# Libft

*This project has been created as part of the 42 curriculum by kapaydin*

## Description

**Libft** is the foundational project of the 42 school curriculum. The goal is to create a personal C library by re-coding standard C library functions (from `libc`) and implementing additional utility functions that will be used in future 42 projects.

This projects goal, gaining a deep understanding of fundamental building blocks of 42 training. This library serves as a reusable toolkit for C programming tasks.

## Instructions

### Compilation

The library is compiled into a static archive file (`libft.a`). To compile the library, run the following command in your terminal:

```bash
make

```

Common rules included in the Makefile:

* `make`: Compiles the source files and creates `libft.a`.
* `make clean`: Removes the object files (`.o`).
* `make fclean`: Removes object files and the `libft.a` archive.
* `make re`: Performs a full recompilation (fclean + make).

### Usage

To use Libft in your own project, include the header file in your source code and link the library during compilation:

1. Include the header:

```c
#include "libft.h"

```

2. Link the library:

```bash
cc main.c -L ./path-to-libft-folder -lft -o example_program

```

## Resources

### Documentation & Tutorials

* **Introduction to C:** [W3Schools C Tutorial](https://www.w3schools.com/c/c_intro.php)
* **Linked List Fundamentals:** [GeeksforGeeks - Linked Lists](https://www.geeksforgeeks.org/c/linked-list-in-c/)
* **Official Man Pages:** [Linux Man Pages (man7.org)](https://man7.org/linux/man-pages/)
* **Makefile Tutorial** [Makefile Tutorial By Example](https://makefiletutorial.com/)

### Use of AI

AI was utilized during this project for the following tasks:

* **Logic Clarification:** Explaining complex behavior of functions like `ft_memset` and `ft_split`.
* **Debugging:** Identifying edge cases in pointer arithmetic.
* **Documentation:** Assistance in formatting and structuring this `README.md` to styling.

## Library Details

The functions within Libft are categorized into three distinct parts:

### Part 1: Libc Functions

These are re-implementations of standard functions found in the libraries:

* **Memory operations:** `memset`, `bzero`, `memcpy`, `memmove`, `memchr`, `memcmp`.
* **String manipulation:** `strlen`, `strlcpy`, `strlcat`, `strchr`, `strrchr`, `strncmp`, `strnstr`.
* **Character checks:** `isalpha`, `isdigit`, `isalnum`, `isascii`, `isprint`, `islower`, `isupper`.
* **Conversions:** `toupper`, `tolower`, `atoi`.
* **Memory Allocation:** `calloc`, `strdup`.

### Part 2: Additional Functions

These functions are not part of the standard C library but are highly useful for C development:

* `ft_substr`: Extracts a substring from a string.
* `ft_strjoin`: Concatenates two strings into a new allocation.
* `ft_strtrim`: Trims specific characters from the beginning and end of a string.
* `ft_split`: Splits a string into an array of strings using a delimiter.
* `ft_itoa`: Converts an integer to a string.
* `ft_strmapi` / `ft_striteri`: Applies a function to each character of a string.
* **File Descriptor Output:** `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd`.

### Part 3: Linked Lists

A set of functions designed to manipulate singly linked lists using the `t_list` structure:

* `ft_lstnew`, `ft_lstadd_front`, `ft_lstsize`, `ft_lstlast`, `ft_lstadd_back`, `ft_lstdelone`, `ft_lstclear`, `ft_lstiter`, `ft_lstmap`.
