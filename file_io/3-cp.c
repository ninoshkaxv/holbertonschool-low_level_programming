#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

#define BUFFER_SIZE 1024

void close_file(int fd, const char *filename);

int main(int argc, char *argv[]) {
    int from, to;
    ssize_t bytes_read, bytes_written;
    char buffer[BUFFER_SIZE];

    if (argc != 3) {
        dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
        exit(97);
    }

    from = open(argv[1], O_RDONLY);
    if (from == -1) {
        dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
        exit(98);
    }

    to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
    if (to == -1) {
        dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", argv[2]);
        close_file(from, argv[1]);
        exit(99);
    }

    do {
        bytes_read = read(from, buffer, BUFFER_SIZE);
        if (bytes_read == -1) {
            dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
            close_file(from, argv[1]);
            close_file(to, argv[2]);
            exit(98);
        }

        bytes_written = write(to, buffer, bytes_read);
        if (bytes_written == -1) {
            dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", argv[2]);
            close_file(from, argv[1]);
            close_file(to, argv[2]);
            exit(99);
        }

    } while (bytes_read > 0);

    close_file(from, argv[1]);
    close_file(to, argv[2]);

    return 0;
}

void close_file(int fd, const char *filename) {
    if (close(fd) == -1) {
        dprintf(STDERR_FILENO, "Error: Can't close fd %d for file %s\n", fd, filename);
        exit(100);
    }
}

