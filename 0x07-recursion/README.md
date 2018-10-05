# C - Recursion

Compiled with `gcc 4.8.4`, with `-Wall -Werror -Wextra -pedantic` flags.

**Focus**: The project teaches recursion and their usages. Usage of the standard library is forbidden in some tasks.

**Tasks and their expected outputs**:
- 0 - Write a function that prints a string, followed by a new line.
```
julien@ubuntu:~/0x07. Recursion$ gcc -Wall -pedantic -Werror -Wextra _putchar.c 0-main.c 0-puts_recursion.c -o 0-puts_recursion
julien@ubuntu:~/0x07. Recursion$ ./0-puts_recursion 
Betty Holberton
julien@ubuntu:~/0x07. Recursion$ 
```
- 1 - Write a function that prints a string in reverse.
```
julien@ubuntu:~/0x07. Recursion$ gcc -Wall -pedantic -Werror -Wextra _putchar.c 1-main.c 1-print_rev_recursion.c -o 1-print_rev_recursion
julien@ubuntu:~/0x07. Recursion$ ./1-print_rev_recursion 
reklaW notloC
julien@ubuntu:~/0x07. Recursion$ 
```
- 2 - Write a function that returns the length of a string.
```
julien@ubuntu:~/0x07. Recursion$ gcc -Wall -pedantic -Werror -Wextra  2-main.c 2-strlen_recursion.c -o 2-strlen_recursion
julien@ubuntu:~/0x07. Recursion$ ./2-strlen_recursion 
14
julien@ubuntu:~/0x07. Recursion$ 
```
- 3 - Write a function that returns the factorial of a given number. If n is lower than 0, the function should return -1 to indicate an error.
```
julien@ubuntu:~/0x07. Recursion$ gcc -Wall -pedantic -Werror -Wextra 3-main.c 3-factorial.c -o 3-factorial
julien@ubuntu:~/0x07. Recursion$ ./3-factorial 
1
120
3628800
-1
julien@ubuntu:~/0x07. Recursion$
```
- 4 - Write a function that returns the value of x raised to the power of y. If y is lower than 0, the function should return -1.
```
julien@ubuntu:~/0x07. Recursion$ gcc -Wall -pedantic -Werror -Wextra 4-main.c 4-pow_recursion.c -o 4-pow
julien@ubuntu:~/0x07. Recursion$ ./4-pow 
1
1
65536
25
-1
-125
julien@ubuntu:~/0x07. Recursion$ 
```
- 5 - Write a function that returns the natural square root of a number. If n does not have a natural square root, the function should return -1
```
julien@ubuntu:~/0x07. gcc -Wall -pedantic -Werror -Wextra 5-main.c 5-sqrt_recursion.c -o 5-sqrt
julien@ubuntu:~/0x07. Recursion$ ./5-sqrt 
1
32
4
-1
5
-1
julien@ubuntu:~/0x07. Recursion$ 
```
- 6 - Write a function that returns 1 if the input integer is a prime number, otherwise return 0.
```
julien@ubuntu:~/0x07. Recursion$ gcc -Wall -pedantic -Werror -Wextra 6-main.c 6-is_prime_number.c -o 6-prime
julien@ubuntu:~/0x07. Recursion$ ./6-prime 
0
0
0
1
0
0
1
1
julien@ubuntu:~/0x07. Recursion$ 
```
- 7 - Write a function that returns 1 if a string is a palindrome and 0 if not.
```
julien@ubuntu:~/0x07. Recursion$ gcc -Wall -pedantic -Werror -Wextra 7-main.c 7-is_palindrome.c -o 7-palindrome
julien@ubuntu:~/0x07. Recursion$ ./7-palindrome 
1
1
0
1
julien@ubuntu:~/0x07. Recursion$
```
- 8 - Write a function that compares two strings and returns 1 if the strings can be considered identical, otherwise return 0.
```
julien@ubuntu:~/0x07. Recursion$ gcc -Wall -pedantic -Werror -Wextra 100-main.c 100-wildcmp.c -o 100-wildcmp
julien@ubuntu:~/0x07. Recursion$ ./100-wildcmp 
1
1
1
1
1
1
1
0
1
1
0
0
julien@ubuntu:~/0x07. Recursion$ 
```
