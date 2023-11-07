# Memory Allocation and Management in C

## Table of Contents
1. [Introduction](#introduction)
2. [Automatic vs. Dynamic Allocation](#automatic-vs-dynamic-allocation)
3. [Using malloc and free](#using-malloc-and-free)
4. [When and Why Use malloc](#when-and-why-use-malloc)
5. [Checking for Memory Leaks with Valgrind](#checking-for-memory-leaks-with-valgrind)

## Introduction
This README provides a brief overview of memory allocation in C, focusing on the difference between automatic and dynamic allocation, how to use `malloc` and `free`, when and why to use `malloc`, and how to check for memory leaks using Valgrind.

## Automatic vs. Dynamic Allocation
In C, memory allocation can be categorized into two main types: automatic and dynamic allocation.

- **Automatic Allocation**: Variables with automatic storage duration are allocated and deallocated automatically. These include local variables defined within functions, which are automatically allocated when the function is called and deallocated when it returns.

- **Dynamic Allocation**: Dynamic allocation, on the other hand, involves requesting memory during program execution from the heap. This memory must be explicitly allocated and deallocated by the programmer.

## Using `malloc` and `free`
In C, dynamic memory allocation is achieved using the `malloc` and `free` functions.

- `malloc`: The `malloc` function (short for "memory allocation") is used to request a block of memory from the heap. It returns a pointer to the allocated memory if successful or `NULL` if the allocation fails.

  ```c
  #include <stdlib.h>

  void* ptr = malloc(sizeof(int));
  if (ptr == NULL) {
      // Allocation failed
  }

