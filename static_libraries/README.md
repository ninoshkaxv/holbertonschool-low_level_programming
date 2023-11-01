# Static Libraries in C

This repository provides an introduction to static libraries in C, including what a static library is, how it works, how to create one, and how to use it. Additionally, it covers the basic usage of key command-line tools like `ar`, `ranlib`, and `nm` for working with static libraries.

## Table of Contents

- [What is a Static Library?](#what-is-a-static-library)
- [How does a Static Library Work?](#how-does-a-static-library-work)
- [How to Create a Static Library](#how-to-create-a-static-library)
- [How to Use a Static Library](#how-to-use-a-static-library)
- [Basic Usage of ar, ranlib, nm](#basic-usage-of-ar-ranlib-nm)

## What is a Static Library?

A static library, often referred to as a "lib" file, is a collection of object files that are linked with a program at compile-time. These libraries contain precompiled functions and code that can be reused in multiple programs. Static libraries are integral to modularizing code and promoting code reusability.

## How does a Static Library Work?

When you create a static library, you compile and archive individual source files into a single file with the `.a` extension. This library file contains all the object code needed to support the functions within the library.

## How to Create a Static Library

To create a static library, you can follow these general steps:

1. Compile the source files into object files using a command like `gcc -c file1.c file2.c`.

2. Create the library by archiving the object files using the `ar` command: `ar rcs libname.a file1.o file2.o`.

3. The resulting `libname.a` file is your static library.

## How to Use a Static Library

To use a static library in your program, you typically do the following:

1. Include the library header file in your source code: `#include "library.h"`.

2. During compilation, link your program with the static library using the `-l` flag: `gcc -o myprogram myprogram.c -L. -llibname`.

3. This generates an executable that uses the functions from the static library.

## Basic Usage of ar, ranlib, nm

- `ar`: The `ar` command is used to create, modify, and extract files from static libraries. For example, you can create a library using `ar`, add object files to it, or extract object files from an existing library.

- `ranlib`: The `ranlib` command is used to generate an index for the library. It helps improve the efficiency of searching for functions in large libraries.

- `nm`: The `nm` command displays the symbols from object files and libraries. You can use `nm` to inspect the contents of a static library and see the functions it contains.

Static libraries are essential for organizing and reusing code in C programs, and understanding how to create, use, and manage them is a valuable skill for software development.

