# LIBFT - 42

# ⚡ What is Libft?

Libft is an individual project in 42 where we have to recreate some standard C library functions useful to understand its internal behavior and be able to use them in other future projects.

That's because at 42 we're not allowed to use some standard libraries on our projects, so we have to create our own functions and libraries.


# :computer: Technologies

This Project was made with:

* [C](https://devdocs.io/)
* [Makefile](https://www.gnu.org/software/make/manual/make.html)
* [Shell](https://unixguide.readthedocs.io/en/latest/unixcheatsheet/)
* [gcc](https://terminaldeinformacao.com/2015/10/08/como-instalar-e-configurar-o-gcc-no-windows-mingw/)

# ⚙️ How to Run
```bash
# *************COMMANDS************ #
# run - run compile all the libtest with the your libft and run the all tests
$ make all
# run - run compile bonus part
$ make bonus
# clean - remove the .o and .c files 
$ make clean
# fclean - remove the .o and .c files and the .a
$ make fclean
# re - remove all files and remake all
$ make re

# after run one time the the comand all 
# you can use compile others files .c using this lib 
# and using the function of then.
$ gcc main.c -L . -lft

```

# 📝 List of Functions

## Functions from `<ctype.h>`

- `ft_isalpha` - checks for an alphabetic character.
- `ft_isdigit`	- check for a digit (0 through 9).
- `ft_isalnum`	- checks for an alphanumeric character.
- `ft_isascii`	- checks whether c fits into the ASCII character set.
- `ft_isprint`	- checks for any printable character.
- `ft_toupper`	- convert char to uppercase.
- `ft_tolower`	- convert char to lowercase.

## Functions from `<string.h>`

- `ft_strlen`	- calculate the length of a string.
- `ft_memset`	- fill memory with a constant byte.
- `ft_bzero`	- zero a byte string.
- `ft_memcpy`	- copy memory area.
- `ft_memmove`	- copy memory area.
- `ft_strlcpy`	- copy string to a specific size.
- `ft_strlcat`	- concatenate a string to a specific size.
- `ft_strchr`	- locate character in a string.
- `ft_strrchr`	- locate character in a string.
- `ft_strncmp`	- compare two strings.
- `ft_memchr`	- scan memory for a character.
- `ft_memcmp`	- compare memory areas.
- `ft_strnstr`	- locate a substring in a string.
- `ft_strdup`	- creates a duplicate for the string passed as a parameter.

## Functions from `<stdlib.h>`
- `ft_atoi`	- convert a string to an integer.
- `ft_calloc`	- allocates memory and sets its bytes' values to 0.

## Non-standard functions
- `ft_substr`	- returns a substring from a string.
- `ft_strjoin`	- concatenates two strings.
- `ft_strtrim`	- trims the beginning and end of a string with a specific set of chars.
- `ft_split`	- splits a string using a char as parameter.
- `ft_itoa`	- converts a number into a string.
- `ft_strmapi`	- applies a function to each character of a string.
- `ft_striteri`	- applies a function to each character of a string.
- `ft_putchar_fd`	- output a char to a file descriptor.
- `ft_putstr_fd`	- output a string to a file descriptor.
- `ft_putendl_fd`	- output a string to a file descriptor, followed by a new line.
- `ft_putnbr_fd`	- output a number to a file descriptor.

## Linked list functions

- `ft_lstnew`	- creates a new list element.
- `ft_lstadd_front`	- adds an element at the beginning of a list.
- `ft_lstsize`	- counts the number of elements in a list.
- `ft_lstlast`	- returns the last element of the list.
- `ft_lstadd_back`	- adds an element at the end of a list.
- `ft_lstclear`	- deletes and free list.
- `ft_lstiter`	- applies a function to each element of a list.
- `ft_lstmap`	- applies a function to each element of a list.
