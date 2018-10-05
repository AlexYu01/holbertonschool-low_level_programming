# C - More functions, more nested loops

Compiled with `gcc 4.8.4`, with `-Wall -Werror -Wextra -pedantic` flags.

**Focus**: The project provides more practice on nested loops, and functions. Usage of the standard library is forbiddne in some tasks.

**Tasks and their expected outputs**:
- 0 - Write a function that checks for uppercase character. Return 1 if c is uppercase, otherwise return 0.
```
julien@ubuntu:~/0x03$ gcc -Wall -pedantic -Werror -Wextra 0-main.c 0-isupper.c -o 0-isuper
julien@ubuntu:~/0x03$ ./0-isuper 
A: 1
a: 0
julien@ubuntu:~/0x03$ 
```
- 1 - Write a function that checks for a digit (0 through 9). Returns 1 if c is a digit, otherwise return 0.
```
julien@ubuntu:~/0x03$ gcc -Wall -pedantic -Werror -Wextra 1-main.c 1-isdigit.c -o 1-isdigit
julien@ubuntu:~/0x03$ ./1-isdigit 
0: 1
a: 0
julien@ubuntu:~/0x03$ 
```
- 2 - Write a function that multiplies two integers.
```
julien@ubuntu:~/0x03$ gcc -Wall -pedantic -Werror -Wextra 2-main.c 2-mul.c -o 2-mul
julien@ubuntu:~/0x03$ ./2-mul 
100352
-1646592
julien@ubuntu:~/0x03$ 
```
- 3 - Write a function that prints the numbers, from 0 to 9, followed by a new line.
```
julien@ubuntu:~/0x03$ gcc -Wall -pedantic -Werror -Wextra _putchar.c 3-main.c 3-print_numbers.c -o 3-print_numbers
julien@ubuntu:~/0x03$ ./3-print_numbers | cat -e
0123456789$
julien@ubuntu:~/0x03$ 
```
- 4 - Write a function that prints the numbers, from 0 to 9, followed by a new line. Do not print 2 and 4.
```
julien@ubuntu:~/0x03$ gcc -Wall -pedantic -Werror -Wextra _putchar.c 4-main.c 4-print_most_numbers.c -o 4-print_most_numbers
julien@ubuntu:~/0x03$ ./4-print_most_numbers 
01356789
julien@ubuntu:~/0x03$ 
```
- 5 - Write a function that prints 10 times the numbers, from 0 to 14, followed by a new line.
```
julien@ubuntu:~/0x03$ gcc -Wall -pedantic -Werror -Wextra _putchar.c 5-main.c 5-more_numbers.c -o 5-more_numbers
julien@ubuntu:~/0x03$ ./5-more_numbers 
01234567891011121314
01234567891011121314
01234567891011121314
01234567891011121314
01234567891011121314
01234567891011121314
01234567891011121314
01234567891011121314
01234567891011121314
01234567891011121314
julien@ubuntu:~/0x03
```
- 6 - Write a function that draws a straight line in the terminal.
```
julien@ubuntu:~/0x03$ gcc -Wall -pedantic -Werror -Wextra _putchar.c 6-main.c 6-print_line.c -o 6-lines
julien@ubuntu:~/0x03$ ./6-lines | cat -e
$
__$
__________$
$
julien@ubuntu:~/0x03$
```
- 7 - Write a function that draws a diagonal line on the terminal.
```
julien@ubuntu:~/0x03$ gcc -Wall -pedantic -Werror -Wextra _putchar.c 7-main.c 7-print_diagonal.c -o 7-diagonals
julien@ubuntu:~/0x03$ ./7-diagonals | cat -e
$
\$
 \$
\$
 \$
  \$
   \$
    \$
     \$
      \$
       \$
        \$
         \$
$
julien@ubuntu:~/0x03$ 
```
- 8 - Write a function that prints a square, followed by a new line.
```
julien@ubuntu:~/0x03$ gcc -Wall -pedantic -Werror -Wextra _putchar.c 8-main.c 8-print_square.c -o 8-squares
julien@ubuntu:~/0x03$ ./8-squares 
##
##
##########
##########
##########
##########
##########
##########
##########
##########
##########
##########

julien@ubuntu:~/0x03$ 
```
- 9 - Write a program that prints the numbers from 1 to 100, followed by a new line. But for multiples of three print Fizz instead of the number and for the multiples of five print Buzz. For numbers which are multiples of both three and five print FizzBuzz.
```
julien@ubuntu:~/0x03$ gcc -Wall -pedantic -Werror -Wextra 9-fizz_buzz.c -o 9-fizz_buzz
julien@ubuntu:~/0x03$ ./9-fizz_buzz 
1 2 Fizz 4 Buzz Fizz 7 8 Fizz Buzz 11 Fizz 13 14 FizzBuzz 16 17 Fizz 19 Buzz Fizz 22 23 Fizz Buzz 26 Fizz 28 29 FizzBuzz 31 32 Fizz 34 Buzz Fizz 37 38 Fizz Buzz 41 Fizz 43 44 FizzBuzz 46 47 Fizz 49 Buzz Fizz 52 53 Fizz Buzz 56 Fizz 58 59 FizzBuzz 61 62 Fizz 64 Buzz Fizz 67 68 Fizz Buzz 71 Fizz 73 74 FizzBuzz 76 77 Fizz 79 Buzz Fizz 82 83 Fizz Buzz 86 Fizz 88 89 FizzBuzz 91 92 Fizz 94 Buzz Fizz 97 98 Fizz Buzz
julien@ubuntu:~/0x03$ 
```
- 10 - Write a function that prints a triangle, followed by a new line.
```
julien@ubuntu:~/0x03$ ./10-triangles | tr ' ' . | cat -e
.#$
##$
.........#$
........##$
.......###$
......####$
.....#####$
....######$
...#######$
..########$
.#########$
##########$
#$
$
julien@ubuntu:~/0x03$
```
- 11 - Write a program that finds and prints the largest prime factor of the number 612852475143, followed by a new line.

*Output not included*
- 12 - Write a function that prints an integer. Usage of long, arrays/pointers is not allowed.
```
julien@ubuntu:~/0x03$ gcc -Wall -pedantic -Werror -Wextra _putchar.c 101-main.c 101-print_number.c -o 101-print_numbers
julien@ubuntu:~/0x03$ ./101-print_numbers 
98
402
1024
0
-98
julien@ubuntu:~/0x03$ 
```
