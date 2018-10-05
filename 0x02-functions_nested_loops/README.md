# C - Functions, nested loops

Compiled with `gcc 4.8.4`, with `-Wall -Werror -Wextra -pedantic` flags.

**Focus**: The project teaches about nested loops, scope of variables, declaration and use of functions. Usage of the standard library is forbiddne in some tasks.

**Tasks and their expected outputs**:

- 0 - Write a program that prints Holberton, followed by a new line.
```
julien@ubuntu:~/0x02$  gcc -Wall -pedantic -Werror -Wextra _putchar.c 0-holberton.c -o 0-holberton
julien@ubuntu:~/0x02$ ./0-holberton 
Holberton
julien@ubuntu:~/0x02$ 
```
- 1 - Write a function that prints the alphabet, in lowercase, followed by a new line.
```
julien@ubuntu:~/0x02$ gcc -Wall -pedantic -Werror -Wextra _putchar.c 1-main.c 1-alphabet.c -o 1-alphabet
julien@ubuntu:~/0x02$ ./1-alphabet 
abcdefghijklmnopqrstuvwxyz
julien@ubuntu:~/0x02$
```
- 2 - Write a function that prints 10 times the alphabet, in lowercase, followed by a new line.
```
julien@ubuntu:~/0x02$ gcc -Wall -pedantic -Werror -Wextra _putchar.c 2-main.c 2-print_alphabet_x10.c -o 2-alphabet_x10
julien@ubuntu:~/0x02$ ./2-alphabet_x10 
abcdefghijklmnopqrstuvwxyz
abcdefghijklmnopqrstuvwxyz
abcdefghijklmnopqrstuvwxyz
abcdefghijklmnopqrstuvwxyz
abcdefghijklmnopqrstuvwxyz
abcdefghijklmnopqrstuvwxyz
abcdefghijklmnopqrstuvwxyz
abcdefghijklmnopqrstuvwxyz
abcdefghijklmnopqrstuvwxyz
abcdefghijklmnopqrstuvwxyz
julien@ubuntu:~/0x02$ 
```
- 3 - Write a function that checks for lowercase character. Returns 1 if c is lowercase otherwise return 0.
```
julien@ubuntu:~/0x02$ gcc -Wall -pedantic -Werror -Wextra _putchar.c 3-main.c 3-islower.c -o 3-islower
julien@ubuntu:~/0x02$ ./3-islower 
011
julien@ubuntu:~/0x02$ 
```
- 4 - Write a function that checks for alphabetic character. Returns 1 if c is a letter, lowercase or uppercase otherwise return 0.
```
julien@ubuntu:~/0x02$ gcc -Wall -pedantic -Werror -Wextra _putchar.c 4-main.c 4-isalpha.c -o 4-isalpha
julien@ubuntu:~/0x02$ ./4-isalpha 
1110
julien@ubuntu:~/0x02$ 
```
- 5 - Write a function that prints the sign of a number.
```
julien@ubuntu:~/0x02$ gcc -Wall -pedantic -Werror -Wextra _putchar.c 5-main.c 5-sign.c -o 5-sign
julien@ubuntu:~/0x02$ ./5-sign 
+, 1
0, 0
+, 1
-, /
julien@ubuntu:~/0x02$ 
```
- 6 - Write a function that computes the absolute value of an integer.
```
julien@ubuntu:~/0x02$ gcc -Wall -pedantic -Werror -Wextra _putchar.c 6-main.c 6-abs.c -o 6-abs
julien@ubuntu:~/0x02$ ./6-abs 
1
0
1
98
julien@ubuntu:~/0x02$ 
```
- 7 - Write a function that prints the last digit of a number.
```
julien@ubuntu:~/0x02$ gcc -Wall -pedantic -Werror -Wextra _putchar.c 7-main.c 7-print_last_digit.c -o 7-last_digit
julien@ubuntu:~/0x02$ ./7-last_digit 
8044
julien@ubuntu:~/0x02$ 
```
- 8 - Write a function that prints every minute of the day of Jack Bauer, starting from 00:00 to 23:59.
```
julien@ubuntu:~/0x02$ gcc -Wall -pedantic -Werror -Wextra _putchar.c 8-main.c 8-24_hours.c -o 8-24
julien@ubuntu:~/0x02$ ./8-24 | head
00:00
00:01
00:02
00:03
00:04
00:05
00:06
00:07
00:08
00:09
julien@ubuntu:~/0x02$ ./8-24 | tail
23:50
23:51
23:52
23:53
23:54
23:55
23:56
23:57
23:58
23:59
julien@ubuntu:~/0x02$ ./8-24 | wc -l
1440
julien@ubuntu:~/0x02$ 
```
- 9 - Write a function that prints the 9 times table, starting with 0.
```
julien@ubuntu:~/c/curriculum_by_julien/holbertonschool-low_level_programming/0x02$ gcc -Wall -pedantic -Werror -Wextra _putchar.c 9-main.c 9-times_table.c -o 9-times_table
ulien@ubuntu:~/0x02$ ./9-times_table | cat -e
0,  0,  0,  0,  0,  0,  0,  0,  0,  0$
0,  1,  2,  3,  4,  5,  6,  7,  8,  9$
0,  2,  4,  6,  8, 10, 12, 14, 16, 18$
0,  3,  6,  9, 12, 15, 18, 21, 24, 27$
0,  4,  8, 12, 16, 20, 24, 28, 32, 36$
0,  5, 10, 15, 20, 25, 30, 35, 40, 45$
0,  6, 12, 18, 24, 30, 36, 42, 48, 54$
0,  7, 14, 21, 28, 35, 42, 49, 56, 63$
0,  8, 16, 24, 32, 40, 48, 56, 64, 72$
0,  9, 18, 27, 36, 45, 54, 63, 72, 81$
julien@ubuntu:~/0x02$ ./9-times_table | tr ' ' . | cat -e
0,..0,..0,..0,..0,..0,..0,..0,..0,..0$
0,..1,..2,..3,..4,..5,..6,..7,..8,..9$
0,..2,..4,..6,..8,.10,.12,.14,.16,.18$
0,..3,..6,..9,.12,.15,.18,.21,.24,.27$
0,..4,..8,.12,.16,.20,.24,.28,.32,.36$
0,..5,.10,.15,.20,.25,.30,.35,.40,.45$
0,..6,.12,.18,.24,.30,.36,.42,.48,.54$
0,..7,.14,.21,.28,.35,.42,.49,.56,.63$
0,..8,.16,.24,.32,.40,.48,.56,.64,.72$
0,..9,.18,.27,.36,.45,.54,.63,.72,.81$
julien@ubuntu:~/0x02$ 
```
- 10 - Write a function that adds two integers and returns the result.
```
julien@ubuntu:~/0x02$ gcc -Wall -pedantic -Werror -Wextra _putchar.c 10-main.c 10-add.c -o 10-add
julien@ubuntu:~/0x02$ ./10-add 
98
julien@ubuntu:~/0x02$ 
```
- 11 - Write a function that prints all natural numbers from n to 98, followed by a new line.
```
julien@ubuntu:~/0x02$ gcc -Wall -pedantic -Werror -Wextra _putchar.c 11-main.c 11-print_to_98.c -o 11-98
julien@ubuntu:~/0x02$ ./11-98 
0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98
98
111, 110, 109, 108, 107, 106, 105, 104, 103, 102, 101, 100, 99, 98
81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98
-10, -9, -8, -7, -6, -5, -4, -3, -2, -1, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98
julien@ubuntu:~/0x02$ 
```
- 12 - Write a function that prints the n times table, starting with 0. If n is greater than 15 or less than 0 the function should not print anything.
```
julien@ubuntu:~/0x02$ gcc -Wall -pedantic -Werror -Wextra _putchar.c 100-main.c 100-times_table.c -o 100-times_table
julien@ubuntu:~/0x02$ ./100-times_table 
0,   0,   0,   0
0,   1,   2,   3
0,   2,   4,   6
0,   3,   6,   9

0,   0,   0,   0,   0,   0
0,   1,   2,   3,   4,   5
0,   2,   4,   6,   8,  10
0,   3,   6,   9,  12,  15
0,   4,   8,  12,  16,  20
0,   5,  10,  15,  20,  25


0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0
0,   1,   2,   3,   4,   5,   6,   7,   8,   9,  10,  11,  12
0,   2,   4,   6,   8,  10,  12,  14,  16,  18,  20,  22,  24
0,   3,   6,   9,  12,  15,  18,  21,  24,  27,  30,  33,  36
0,   4,   8,  12,  16,  20,  24,  28,  32,  36,  40,  44,  48
0,   5,  10,  15,  20,  25,  30,  35,  40,  45,  50,  55,  60
0,   6,  12,  18,  24,  30,  36,  42,  48,  54,  60,  66,  72
0,   7,  14,  21,  28,  35,  42,  49,  56,  63,  70,  77,  84
0,   8,  16,  24,  32,  40,  48,  56,  64,  72,  80,  88,  96
0,   9,  18,  27,  36,  45,  54,  63,  72,  81,  90,  99, 108
0,  10,  20,  30,  40,  50,  60,  70,  80,  90, 100, 110, 120
0,  11,  22,  33,  44,  55,  66,  77,  88,  99, 110, 121, 132
0,  12,  24,  36,  48,  60,  72,  84,  96, 108, 120, 132, 144
```
- 13 - If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23. Write a program that computes and prints the sum of all the multiples of 3 or 5 below 1024 (excluded), followed by a new line.

*Output not included*
- 14 - Write a program that prints the first 50 Fibonacci numbers, starting with 1 and 2, followed by a new line.

*Output not included*
- 15 - Each new term in the Fibonacci sequence is generated by adding the previous two terms. By starting with 1 and 2, the first 10 terms will be: 1, 2, 3, 5, 8, 13, 21, 34, 55, 89. By considering the terms in the Fibonacci sequence whose values do not exceed 4,000,000, write a program that finds and prints the sum of the even-valued terms, followed by a new line.

*Output not included*

- 16 - Write a program that finds and prints the first 98 Fibonacci numbers, starting with 1 and 2, followed by a new line. Usage of `long long`, `malloc`, pointers, array/tables, structures and any library besides standard library is forbidden.

*Output not included*
