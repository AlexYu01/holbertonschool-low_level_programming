# C - Variadic functions

Compiled with `gcc 4.8.4`, with `-Wall -Werror -Wextra -pedantic` flags.

**Focus**: The project teaches about variadic functions in C. How to use `va_start`, `va_arg`, and `va_end`.

**Tasks and their expected outputs**:
- 0 - Write a function that returns the sum of all its parameters.
```
julien@ubuntu:~/0x0f. variadic functions$ gcc -Wall -pedantic -Werror -Wextra 0-main.c 0-sum_them_all.c -o a
julien@ubuntu:~/0x0f. variadic functions$ ./a 
1122
500
julien@ubuntu:~/0x0f. variadic functions$ 
```
- 1 - Write a function that prints numbers, followed by a new line. Where separator is the string to be printed between numbers.
```
julien@ubuntu:~/0x0f. variadic functions$ gcc -Wall -pedantic -Werror -Wextra 1-main.c 1-print_numbers.c -o b
julien@ubuntu:~/0x0f. variadic functions$ ./b
0, 98, -1024, 402
julien@ubuntu:~/0x0f. variadic functions$ 
```
- 2 - Write a function that prints strings, followed by a new line. If separator is NULL, don’t print it. If one of the string is NULL, print (nil) instead.
```
julien@ubuntu:~/0x0f. Variadic functions$ gcc -Wall -pedantic -Werror -Wextra 2-main.c 2-print_strings.c -o c
julien@ubuntu:~/0x0f. Variadic functions$ ./c 
Jay, Django
julien@ubuntu:~/0x0f. Variadic functions$ 
```
- 3 - Write a function that prints anything. Format string contains specifiers indicating what kind of variable to pull out of args.
```
julien@ubuntu:~/0x0f. Variadic functions$ gcc -Wall -pedantic -Werror -Wextra 3-main.c 3-print_all.c -o d
julien@ubuntu:~/0x0f. Variadic functions$ ./d 
H, 0, lberton
julien@ubuntu:~/0x0f. Variadic functions$ 
```
- 4 - Write a 64-bit program in assembly that prints Hello, Holberton, followed by a new line. Only allowed to use system call write.
```
julien@ubuntu:~/0x0f. Variadic functions$ nasm -f elf64 100-hello_holberton.asm && gcc 100-hello_holberton.o -o hello
julien@ubuntu:~/0x0f. Variadic functions$ ./hello 
Hello, Holberton
julien@ubuntu:~/0x0f. Variadic functions$
```
