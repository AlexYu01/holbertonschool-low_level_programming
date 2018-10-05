# C - Pointers, arrays and strings

Compiled with `gcc 4.8.4`, with `-Wall -Werror -Wextra -pedantic` flags.

**Focus**: The project teaches about pointers, arrays, and the manipulation of strings. Usage of the standard library is forbiddne in some tasks.

**Tasks and their expected outputs**:
- 0 - Write a function that takes a pointer to an int as parameter and updates the value it points to to 98.
```
julien@ubuntu:~/0x04$ gcc -Wall -pedantic -Werror -Wextra 0-main.c 0-reset_to_98.c -o 0-98
julien@ubuntu:~/0x04$ ./0-98 
n=402
n=98
julien@ubuntu:~/0x04$ 
```
- 1 - Write a function that swaps the values of two integers.
```
julien@ubuntu:~/0x04$ gcc -Wall -pedantic -Werror -Wextra 1-main.c 1-swap.c -o 1-swap
julien@ubuntu:~/0x04$ ./1-swap 
a=98, b=42
a=42, b=98
julien@ubuntu:~/0x04$
```
- 2 - Write a function that returns the length of a string.
```
julien@ubuntu:~/0x04$ gcc -Wall -pedantic -Werror -Wextra 2-main.c 2-strlen.c -o 2-strlen
julien@ubuntu:~/0x04$ ./2-strlen 
10
julien@ubuntu:~/0x04$ 
```
- 3 - Write a function that prints a string, followed by a new line, to stdout.
```
julien@ubuntu:~/0x04$ gcc -Wall -pedantic -Werror -Wextra _putchar.c 3-main.c 3-puts.c -o 3-puts
julien@ubuntu:~/0x04$ ./3-puts 
I do not fear computers. I fear the lack of them - Isaac Asimov
julien@ubuntu:~/0x04$ 
```
- 4 - Write a function that prints a string, in reverse, followed by a new line.
```
julien@ubuntu:~/0x04$ gcc -Wall -pedantic -Werror -Wextra _putchar.c 4-main.c 4-print_rev.c -o 4-print_rev
julien@ubuntu:~/0x04$ ./4-print_rev 
vomisA caasI - meht fo kcal eht raef I .sretupmoc raef ton od I
julien@ubuntu:~/0x04$ 
```
- 5 - Write a function that reverses a string.
```
julien@ubuntu:~/0x04$ gcc -Wall -pedantic -Werror -Wextra 5-main.c 5-rev_string.c -o 5-rev_string
julien@ubuntu:~/0x04$ ./5-rev_string 
Holberton
notrebloH
julien@ubuntu:~/0x04$ 
```
- 6 - Write a function that prints one char out of 2 of a string, followed by a new line.
```
julien@ubuntu:~/0x04$ gcc -Wall -pedantic -Werror -Wextra _putchar.c 6-main.c 6-puts2.c -o 6-puts2
julien@ubuntu:~/0x04$ ./6-puts2 
02468
julien@ubuntu:~/0x04$ 
```
- 7 - Write a function that prints half of a string, followed by a new line. If the number of characters is odd, the function should print the last n characters of the string, where n = (length_of_the_string - 1) / 2
```
julien@ubuntu:~/0x04$ gcc -Wall -pedantic -Werror -Wextra _putchar.c 7-main.c 7-puts_half.c -o 7-puts_half
julien@ubuntu:~/0x04$ ./7-puts_half 
56789
julien@ubuntu:~/0x04$ 
```
- 8 - Write a function that prints n elements of an array of integers, followed by a new line.
```
julien@ubuntu:~/0x04$ gcc -Wall -pedantic -Werror -Wextra 8-main.c 8-print_array.c -o 8-print_array
julien@ubuntu:~/0x04$ ./8-print_array 
98, 402, -198, 298, -1024
julien@ubuntu:~/0x04$
```
- 9 - Write a function that copies the string pointed to by src, including the terminating null byte (\0), to the buffer pointed to by dest.
```
julien@ubuntu:~/0x04$ gcc -Wall -pedantic -Werror -Wextra 9-main.c 9-strcpy.c -o 9-strcpy
julien@ubuntu:~/0x04$ ./9-strcpy 
First, solve the problem. Then, write the code
First, solve the problem. Then, write the code
julien@ubuntu:~/0x04$ 
```
- 10 - Write a function that convert a string to an integer. Usage of long, declaration of a new array is not allowed.
```
julien@ubuntu:~/0x04$ gcc -Wall -pedantic -Werror -Wextra -fsanitize=signed-integer-overflow 100-main.c 100-atoi.c -o 100-atoi
julien@ubuntu:~/0x04$ ./100-atoi 
98
-402
-98
214748364
0
402
98
402
julien@ubuntu:~/0x04$ 
```
- 11 - Create a program that generates random valid passwords for the program 101-crackme.
```
julien@ubuntu:~/0x04$ gcc -Wall -pedantic -Werror -Wextra 101-keygen.c -o 101-keygen
julien@ubuntu:~/0x04$ ./101-crackme "`./101-keygen`"
Tada! Congrats
julien@ubuntu:~/0x04$ 
```
