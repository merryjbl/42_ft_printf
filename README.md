_This project was created as part of the 42 curriculum by mjebali._

<h1 align="center">FT_PRINTF</h1>

# Description

The ft_printf project consists of recreating the basic behavior of the standard C library function printf().
Its main goal is to help understand:

* Variadic functions (va_list, va_start, va_arg, va_end)
* Format handling and conversions
* Modular function design
* Managing different data types
* How to structure a C library

The implementation was developed following the 42 Norm, keeping all functions small, readable, and modular.

## Supported Conversions

| Specifier | Meaning | Example Output |
|:----------:|:---------|----------------|
| **`%c`** | Print a single character | `A` |
| **`%s`** | Print a string | `Hello` |
| **`%p`** | Print a pointer address | `0x7ffeefbff5c0` |
| **`%d`** / **`%i`** | Print a signed integer | `42` |
| **`%u`** | Print an unsigned integer | `4294967295` |
| **`%x`** | Print a number in lowercase hex | `2a` |
| **`%X`** | Print a number in uppercase hex | `2A` |
| **`%%`** | Print a literal percent sign | `%` |


## Project Structure

```c
ft_printf/
│
├── ft_printf.c
├── ft_putchar.c
├── ft_puthex.c
├── ft_putnbr.c
├── ft_putptr.c
├── ft_puthex.c
├── ft_putstr.c
├── ft_putunsigned.c
├── ft_printf.h
├── README.md
└── Makefile
```

## File Explanation


### **ft_printf.c**
Contains the main ft_printf() function and the conversion selector responsible for choosing which printing function to call depending on the format specifier found in the string.
### **ft_putchar.c**
Writes a single character to the output and returns the number of printed characters.
### **ft_putstr.c**
Handles printing strings, including the special case of NULL strings.
### **ft_putnbr.c**
Converts and prints signed integers.
### **ft_putunsigned.c**
Prints unsigned integers.
### **ft_puthex.c**
Converts numbers to hexadecimal, supporting both lowercase and uppercase formats.
### **ft_putptr.c**
Handles printing memory addresses (pointers).
### **ft_puthex.c**
Performs the hexadecimal conversion used internally for printing pointers.
### **ft_printf.h**
Header file containing:
* Function prototypes
* Required includes
* Include guards to prevent double inclusion

### **Makefile**
Automates the compilation of the project and the creation of the static library.

---
# Instructions

## Requirements

* Unix-like operating system (tested on Linux and macOS)
* cc
* make

## Compilation

From the root of the repository:

```c
make            # builds libftprintf.a
make clean      # removes object files
make fclean     # removes object files and libftprintf.a
make re         # runs fclean + make
```

The Makefile compiles the project using the flags:

```c
-Wall -Wextra -Werror
```

## Usage Example
```c
#include "ft_printf.h"

int main(void)
{
    ft_printf("Hello %s! Number: %d, Hex: %x\n", "Merry", 42, 42);
    return 0;
}
```
output:
```
Hello Merry! Number: 42, Hex: 2a
```
### Simple Explanation
ft_printf works as the following:

* Reads the format string character by character.
* When it finds %, it checks the next character.
* Calls the correct function depending on the specifier.
* Prints the value and returns the number of characters written.

This teaches how real printf() handles formatting internally.

---
# Resources

**Official Manuals** :
I used the official C manuals (man printf, man stdarg) as the primary reference to understand the behavior of the original functions and the correct use of variadic arguments.

**Google** :
Google was used to look up broader explanations of technical concepts, edge cases, and general information related to data handling and formatting.

**Use of AI**:
Artificial intelligence was used at specific moments to better understand the logic behind certain complex functions and, mainly, to help with the writing, clarification, and technical structuring of this README file.

AI was **not used** to write functions, generate the Makefile, or produce tests. The reasoning, design, and implementation were entirely my own.

---

# Future Improvements
The current implementation covers all mandatory conversions required by the project.
Some possible future improvements include:

* Flag handling (-, 0, #, +, space).
* Width and precision support.
* More advanced compatibility with the original libc printf.
* Optimization of numeric conversions for better performance.
