*This project has been created as part of the 42 curriculum by **srosu**.*


# LIBFT

**keywords**: `Unix logic`
**skills**: `Imperative programming - Rigor - Algorithms & AI`


## Description

`Libft` is the first core project of the 42 curriculum and consists of reimplementing a subset of the C standard library, along with additional utility functions and basic data structures.

The objective is to build a **custom, reusable static library** that will serve as a foundation for future projects. By recreating these functions from scratch, the project enforces a precise understanding of:

* Memory allocation and deallocation
* Pointer manipulation and data representation
* String processing at a low level
* Robust error handling and edge-case management

This library replaces reliance on external standard functions and ensures full control over behavior, performance, and reliability. It also establishes rigorous coding habits that are essential for systems programming.


## Instructions

### Compilation

The project uses a `Makefile` to automate compilation and maintenance tasks.

Available rules:

* `make`
  Compiles all source files and produces the static library `libft.a`.

* `make clean`
  Removes all intermediate object files (`.o`), keeping the compiled library intact.

* `make fclean`
  Removes both object files and the final library (`libft.a`).

* `make re`
  Performs a full rebuild by executing `fclean` followed by `make`.

### Usage

No `main.c` is provided in this project, as `libft` is intended to be used as a reusable library.

To test or use the library, you can create your own `main.c` and compile it manually with the generated object files:

```bash
cc -Wall -Wextra -Werror main.c *.o
```

Alternatively, you can link against the compiled static library:

```bash
cc -Wall -Wextra -Werror main.c -L. -lft
```

Make sure to include the header in your source file:

```c
#include "libft.h"
```


## Implementation Overview

### Part 1 – Libc Function Reimplementations

This section focuses on reproducing standard C library behavior without using the original implementations.

* `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`
  Perform character classification based on ASCII value ranges.

* `ft_strlen`
  Computes string length by iterating until the null terminator.

* `ft_memset`, `ft_bzero`
  Initialize memory regions with a specific value or zero.

* `ft_memcpy`, `ft_memmove`
  Copy raw memory. `ft_memmove` handles overlapping memory safely by adjusting the copy direction.

* `ft_strlcpy`, `ft_strlcat`
  Provide size-aware string copy and concatenation, preventing buffer overflow.

* `ft_toupper`, `ft_tolower`
  Convert character case based on ASCII transformations.

* `ft_strchr`, `ft_strrchr`
  Locate the first or last occurrence of a character in a string.

* `ft_strncmp`, `ft_memcmp`
  Compare strings or memory blocks lexicographically.

* `ft_memchr`
  Scan a memory region for a specific byte.

* `ft_strnstr`
  Locate a substring within a bounded length.

* `ft_atoi`
  Convert a string to an integer, handling whitespace, sign, and potential overflow conditions.

* `ft_calloc`
  Allocate memory and initialize it to zero, ensuring safe default values.

* `ft_strdup`
  Allocate and duplicate a string into a new memory buffer.


### Part 2 – Additional Utility Functions

These functions extend the library with higher-level operations.

* `ft_substr`
  Extract a substring from a given string, ensuring bounds safety.

* `ft_strjoin`
  Concatenate two strings into a newly allocated buffer.

* `ft_strtrim`
  Remove specified characters from the beginning and end of a string.

* `ft_split`
  Divide a string into an array of substrings based on a delimiter. This function requires careful handling of multiple allocations and cleanup in case of failure.

* `ft_itoa`
  Convert an integer into its string representation, including negative values.

* `ft_strmapi`
  Apply a transformation function to each character, producing a new string.

* `ft_striteri`
  Iterate over a string and apply a function in place.

* `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd`
  Output characters, strings, and numbers to a specified file descriptor, enabling flexible I/O handling.


### Part 3 – Linked List Functions

This section introduces singly linked lists using a generic structure:

```c
typedef struct s_list
{
    void            *content;
    struct s_list   *next;
}   t_list;
```

#### Example: `ft_lstnew`

```c
t_list *ft_lstnew(void *content)
{
    t_list *node;

    node = (t_list *)malloc(sizeof(t_list));
    if (!node)
        return (NULL);
    node->content = content;
    node->next = NULL;
    return (node);
}
```

This function allocates a new node, initializes its content, and sets the `next` pointer to `NULL`, establishing the base element of a linked list.

#### Additional functions

* `ft_lstadd_front`, `ft_lstadd_back`
  Insert elements at the beginning or end of the list.

* `ft_lstsize`
  Count the number of elements through traversal.

* `ft_lstlast`
  Retrieve the final node in the list.

* `ft_lstdelone`, `ft_lstclear`
  Free memory safely, ensuring no leaks remain.

* `ft_lstiter`
  Apply a function to each element in the list.

* `ft_lstmap`
  Create a new list by applying a transformation to each element, with proper cleanup in case of allocation failure.


## Resources

### References

* ISO/IEC JTC 1/SC 22/WG14 — C Standard Draft (N3220): [https://www.open-std.org/jtc1/sc22/wg14/www/docs/n3220.pdf](https://www.open-std.org/jtc1/sc22/wg14/www/docs/n3220.pdf)
* mycodeschool — explanations of algorithms and data structures
* Stack Overflow — discussions on:

  * [https://stackoverflow.com/questions/24891/c-memory-management](https://stackoverflow.com/questions/24891/c-memory-management)
  * [https://stackoverflow.com/questions/71768623/what-is-the-cause-of-the-memory-leak-in-c](https://stackoverflow.com/questions/71768623/what-is-the-cause-of-the-memory-leak-in-c)

### Use of AI

AI tools such as ChatGPT and Claude were used as supplementary resources to clarify certain concepts, validate approaches, and assist with documentation.

All implementations and design choices were carried out independently.
