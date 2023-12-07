# file_io

This directory contains C programs for basic file I/O operations.

## Overview

The `file_io` directory hosts a collection of C programs designed for performing fundamental file input and output operations. These programs include functions for reading text from files, creating new files, and appending text to existing files.

## Table of Contents

1. **0-read_textfile.c**
   - Contains the implementation of the `read_textfile` function.
   - Prototype: `ssize_t read_textfile(const char *filename, size_t letters);`

2. **1-create_file.c**
   - Contains the implementation of the `create_file` function.
   - Prototype: `int create_file(const char *filename, char *text_content);`

3. **2-append_text_to_file.c**
   - Contains the implementation of the `append_text_to_file` function.
   - Prototype: `int append_text_to_file(const char *filename, char *text_content);`

4. **3-cp.c**
   - Placeholder for the implementation of a file copying program.

## Header File:

**main.h**
   - Contains the prototypes for the functions defined in the C files.
   - Prototypes:
     - `ssize_t read_textfile(const char *filename, size_t letters);`
     - `int create_file(const char *filename, char *text_content);`
     - `int append_text_to_file(const char *filename, char *text_content);`

## Return

These files provide essential functionality for handling file I/O operations in C. Use them to read from existing files, create new files, and append text to files. The functions are designed to be versatile and can be integrated into larger programs for a variety of file-related tasks.

## Author

Ninoshka Perez

