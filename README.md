# 42 Project Repository

## Table of Contents

- [Libft](#libft)
    - [Usage](#libft)
    - [en.subject](#libft)

- [ft_printf](#ft_printf)
    - [Usage](#ft_printf)
    - [en.subject](#ft_printf)

- [get_next_line](#get_next_line)
    - [Usage](#get_next_line)
    - [en.subject](#get_next_line)
- [garbage-collection](#garbage-collection)
    - [Description](#description)
    - [Basic Concept](#basic-concept)
    - [Memory Allocation](#memory-allocation)
    - [Memory Deallocation](#memory-deallocation)
    - [Garbage Collection](#garbage-collection)
    - [Garbage Collection Using Linked Lists](# Garbage Collection Using Linked Lists)


#### How does it work?
The goal is to create a library called Libft.A from the source files so I can later use that library from other projects at 42.

To create that library, after downloading/cloning this project, cd into the project, , call make:

```
gcl https://github.com/ERROR244/1337Library.git && cd 1337Library
make && make clean
ls Libft.A
```

You should see a Libft.A.

## 1337Library

Welcome to my 42 Project Repository! This repository showcases the 3 projects `Libft` `ft_printf` `get_next_line` completed and merged in one library:

## Libft
   + **Description:** A personal C library containing various standard functions and additional utility functions.
   + **Usage:** Detailed instructions on compiling and linking the library with your project.
   + **en.subject:** [View the PDF](https://cdn.intra.42.fr/pdf/pdf/117032/en.subject.pdf).

## ft_printf
   + **Description:** An implementation of the `printf` function in C with support for basic formatting options.
   + **Usage:** Instructions on integrating the `ft_printf` library with your project.
   + **en.subject:** [View the PDF](https://cdn.intra.42.fr/pdf/pdf/135140/en.subject.pdf).

## get_next_line
   + **Description:** A function that reads a line from a file descriptor, handling multiple file descriptors.
   + **Usage:** Guidelines on implementing `get_next_line` in your project.
   + **en.subject:** [View the PDF](https://cdn.intra.42.fr/pdf/pdf/135365/en.subject.pdf).
## Garbage Collection

### Description
Garbage collection is a mechanism for automatic memory management where the system identifies and frees up memory that is no longer in use. In languages like **Java** or **Python**, this process is automated by the runtime. However, in **C** or **C++**, memory management is manual, and developers are responsible for freeing memory using functions like `free()`.

### Basic Concept
In manual memory management (as in C), a simple garbage collection system can be implemented using a linked list to track memory allocations. This allows us to automate memory management, reducing the risk of memory leaks. The basic process involves:

1. **Memory Allocation**:  
   When memory is dynamically allocated (e.g., using `malloc()`), a node is added to a linked list to store a reference to the allocated block.
   
2. **Memory Deallocation**:  
   When the memory is no longer needed, the linked list is traversed to free the memory and delete the corresponding node from the list.

3. **Garbage Collection**:  
   If certain blocks of memory become unreferenced (no longer reachable by the program), they can be automatically freed. By periodically traversing the list, unreferenced memory can be identified and reclaimed.

### Garbage Collection Using Linked Lists
In C, you can simulate garbage collection by maintaining a linked list that tracks dynamically allocated memory (heap-allocated objects). Each time a memory block is allocated using a custom function like `ft_malloc`, the pointer to that memory is added to the list. This way, the memory does not need to be manually freed; the program can automatically reclaim memory, preventing leaks.

By integrating a garbage collection mechanism with **Libft** (through linked list handling functions), dynamically allocated memory is managed efficiently, ensuring no manual `free()` calls are required. This approach improves memory safety and management, particularly in projects that require heavy dynamic memory use.

