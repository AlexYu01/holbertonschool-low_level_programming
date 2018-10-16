# C - Preprocessor

Compiled with `gcc 4.8.4`, with `-Wall -Werror -Wextra -pedantic` flags.

**Focus**: The project teaches about macros and how to use them. What are the most common predefined macros. How to include guard in your header files.

**Tasks and their expected outputs**:
- 0 - Create a header file that defines a macro named SIZE as an abbreviation for the token 1024.
```
julien@ubuntu:~/0x0c. macro, structures$ gcc -Wall -pedantic -Werror -Wextra 0-main.c -o a
julien@ubuntu:~/0x0c. macro, structures$ ./a 
1122
julien@ubuntu:~/0x0c. macro, structures$ 
```
- 1 - Create a header file that defines a macro named PI as an abbreviation for the token 3.14159265359.
```
julien@ubuntu:~/0x0c. macro, structures$ gcc -Wall -pedantic -Werror -Wextra 1-main.c -o b
julien@ubuntu:~/0x0c. macro, structures$ ./b
30171.855
julien@ubuntu:~/0x0c. macro, structures$
```
- 2 - Write a program that prints the name of the file it was compiled from, followed by a new line.
```
julien@ubuntu:~/0x0c. macro, structures$ gcc -Wall -pedantic -Werror -Wextra 2-main.c -o c
julien@ubuntu:~/0x0c. macro, structures$ ./c 
2-main.c
julien@ubuntu:~/0x0c. macro, structures$ cp 2-main.c 02-main.c
julien@ubuntu:~/0x0c. macro, structures$ gcc -Wall -pedantic -Werror -Wextra 02-main.c -o cc
julien@ubuntu:~/0x0c. macro, structures$ ./cc
02-main.c
julien@ubuntu:~/0x0c. macro, structures$ 
```
- 3 - Write a function-like macro ABS(x) that computes the absolute value of a number x.
```
julien@ubuntu:~/0x0c. macro, structures$ gcc -Wall -pedantic -Werror -Wextra 3-main.c -o d
julien@ubuntu:~/0x0c. macro, structures$ ./d 
980, 980
julien@ubuntu:~/0x0c. macro, structures$ 
```
- 4 - Write a function-like macro SUM(x, y) that computes the sum of the numbers x and y.
```
julien@ubuntu:~/0x0c. macro, structures$ gcc -Wall -pedantic -Werror -Wextra 4-main.c -o e
julien@ubuntu:~/0x0c. macro, structures$ ./e 
1122
julien@ubuntu:~/0x0c. macro, structures$ 
```
