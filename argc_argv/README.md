# C Program Documentation

This repository provides information on various aspects of C programming, including how to use arguments passed to your program, different prototypes of the `main` function, and techniques to compile functions with unused variables or parameters.

## Table of Contents

- [How to Use Arguments Passed to Your Program](#how-to-use-arguments-passed-to-your-program)
- [Two Prototypes of the `main` Function](#two-prototypes-of-the-main-function)
- [Using `__attribute__((unused))` or `(void)` for Unused Variables](#using-attributeunused-or-void-for-unused-variables)

## How to Use Arguments Passed to Your Program

In C programming, you can access command-line arguments passed to your program using the `main` function's arguments: `int argc` and `char *argv[]`. The `argc` variable represents the number of arguments, while `argv` is an array of strings containing the arguments themselves. This allows you to make your program flexible and configurable by users.

## Two Prototypes of the `main` Function

There are two standard prototypes for the `main` function in C:

1. **`int main(void)`**: This prototype specifies that the `main` function takes no command-line arguments. It is used when your program doesn't need any command-line input.

2. **`int main(int argc, char *argv[])`**: This prototype specifies that the `main` function takes command-line arguments. `argc` is the count of arguments, and `argv` is an array containing the arguments. Use this prototype when you need to process command-line input in your program.

The choice of which prototype to use depends on whether your program requires command-line arguments.

## Using `__attribute__((unused))` or `(void)` for Unused Variables

In C, you might encounter situations where you declare variables or parameters that are not used within a function. To prevent compiler warnings about these unused variables, you can use one of two techniques:

- **`__attribute__((unused))`**: You can annotate a variable with `__attribute__((unused))` to indicate to the compiler that the variable is intentionally not used. This prevents warnings about unused variables.

  ```c
  int unused_variable __attribute__((unused));

