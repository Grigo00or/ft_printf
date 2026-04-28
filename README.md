*This project has been created as part of the 42 curriculum by grgrigor.*

## Description
The **ft_printf** project involves recoding the standard C library function `printf()`. The primary objective is to learn about **variadic functions** in C and to create a well-structured, extensible library. 

The resulting library, `libftprintf.a`, mimics the behavior of the original `printf()` but does not implement the buffer management found in the libc version. It supports the following conversions:
*   `%c`: Prints a single character.
*   `%s`: Prints a string.
*   `%p`: Prints a `void *` pointer in hexadecimal format.
*   `%d`: Prints a decimal (base 10) number.
*   `%i`: Prints an integer in base 10.
*   `%u`: Prints an unsigned decimal (base 10) number.
*   `%x`: Prints a number in lowercase hexadecimal (base 16).
*   `%X`: Prints a number in uppercase hexadecimal (base 16).
*   `%%`: Prints a percent sign.

## Instructions
### Compilation
The project includes a **Makefile** that compiles the source files using `cc` with the flags `-Wall -Wextra -Werror`. To compile the library, run:
```bash
make
```
This will create the `libftprintf.a` library at the root of the repository. The Makefile supports the following rules: `all`, `clean`, `fclean`, `re`, and `$(NAME)`.

### Usage
To use the function in your projects, include the header `ft_printf.h` and link the compiled library.
**Prototype:** `int ft_printf(const char *, ...);`

## Algorithm and Data Structures
The core of this implementation relies on **variadic functions** using the `<stdarg.h>` macros: `va_start`, `va_arg`, `va_copy`, and `va_end`. 

**Explanation and Justification:**
*   **Algorithm:** The function parses the input string character by character. When a `%` is encountered, it identifies the following conversion specifier and calls a specific sub-function to handle that type. This modular approach ensures the code is **extensible**, allowing for easier implementation of bonus features or additional flags.
*   **Data Structures:** The implementation primarily uses a single `va_list` to navigate through the variable arguments provided to the function. This is the standard and most efficient way to handle an unknown number of arguments in C.

## Resources
*   [C Variadic Functions Documentation](https://en.cppreference.com/w/c/variadic)
*   [42 Intranet AI FAQ](https://intranet.42.fr)

### AI Usage Disclosure
As per the requirements, here is a description of how AI was used during this project:
*   **Tasks:** (e.g., AI was used to help debug specific edge cases in hexadecimal conversion or to explain the difference between `va_copy` and `va_start`).
*   **Parts of the project:** (e.g., Logic optimization for the `%p` conversion).
*   **Control Practices:** All code suggested or explained by AI was manually verified and tested against the original `printf()` to ensure accuracy and compliance with the Norm.

***

### Key Constraints Summary from the Sources:
*   **Forbidden:** The `libtool` command is forbidden; you must use `ar` to create the library.
*   **Norm:** All code must comply with the Norm, including bonus files.
*   **Memory:** No memory leaks are tolerated; all heap-allocated memory must be freed.
*   **Undefined Behavior:** The function should not quit unexpectedly (e.g., segmentation faults) except for cases of undefined behavior.
