# 42 Project Repository

## Table of Contents

- [Libft](#libft)
    - [Usage](#usage)
    - [en.subject](#en.subject)

- [ft_printf](#ft_printf)
    - [Usage](#usage)
    - [en.subject](#en.subject)

- [get_next_line](#get_next_line)
    - [Usage](#usage)
    - [en.subject](#en.subject)
- [garbage-collection](#garbage-collection)
    - [Usage](#usage)


#### How does it work?
The goal is to create a library called Libft.A from the source files so I can later use that library from other projects at 42.

To create that library, after downloading/cloning this project, cd into the project, , call make:

```
gcl https://github.com/ERROR244/1337Library.git && cd 1337Library
make && make clean
ls Libft.A
```

You should see a Libft.A.

# 1337Library

Welcome to my 42 Project Repository! This repository showcases the 3 projects `Libft` `ft_printf` `get_next_line` completed and merged in one library:

1. **Libft**
   - **Description:** A personal C library containing various standard functions and additional utility functions.
   - **Usage:** Detailed instructions on compiling and linking the library with your project.
   - **en.subject:** `subjects/subLibft.pdf`.

2. **ft_printf**
   - **Description:** An implementation of the `printf` function in C with support for basic formatting options.
   - **Usage:** Instructions on integrating the `ft_printf` library with your project.
   - **en.subject:** `subjects/subFtPrintf.pdf`.

3. **get_next_line**
   - **Description:** A function that reads a line from a file descriptor, handling multiple file descriptors.
   - **Usage:** Guidelines on implementing `get_next_line` in your project.
   - **en.subject:** `subjects/subGetNextLine.pdf`.
4. **garbage-collection**
    - **Description:** Garbage collection is a form of automatic memory management in which a runtime system identifies and frees up memory that is no longer in use by the program. It's an essential part of languages like Java or Python, where memory management is automated. However, in languages like C or C++, memory management is manual, and the programmer is responsible for deallocating memory using functions like free().

When using linked lists as part of garbage collection, we can keep track of dynamically allocated memory (heap-allocated objects) in a linked list. This approach ensures that when the program no longer needs certain objects, the memory can be reclaimed, thus avoiding memory leaks.

Garbage Collection Using a Linked List
In manual memory management (like in C), you could implement a simple garbage collection mechanism by keeping track of all memory allocations in a linked list. This list will store references to all the dynamically allocated blocks of memory, and you can traverse the list to free up memory once it's no longer needed.

    - **Basic Concept** Allocate memory: When memory is dynamically allocated (e.g., using malloc()), a node is added to a linked list to store the reference (pointer) to the allocated block.\
                        Deallocate memory: When the program is finished using the memory, it will traverse the list and free the memory before deleting the node from the linked list.\
                        Garbage collection: If certain blocks are no longer reachable from the main program (unreferenced), they can be freed from memory. You can implement this by periodically traversing the list to free up\ unreferenced blocks of memory.
