# C - argc, argv

Compiled with `gcc 4.8.4`, with `-Wall -Werror -Wextra -pedantic` flags.

**Focus**: The project teaches about how arguments are passed to a program, and how to compile with unused variables.

**Tasks and their expected outputs**:
- 0 - Write a program that prints its name, followed by a new line.
```
julien@ubuntu:~/0x09. argc, argv$ gcc -Wall -pedantic -Werror -Wextra 0-whatsmyname.c -o mynameis
julien@ubuntu:~/0x09. argc, argv$ ./mynameis 
./mynameis
julien@ubuntu:~/0x09. argc, argv$ mv mynameis mynewnameis
julien@ubuntu:~/0x09. argc, argv$ ./mynewnameis 
./mynewnameis
julien@ubuntu:~/0x09. argc, argv$ 
```
- 1 - Write a program that prints the number of arguments passed into it.
```
julien@ubuntu:~/0x09. argc, argv$ gcc -Wall -pedantic -Werror -Wextra 1-args.c -o nargs
julien@ubuntu:~/0x09. argc, argv$ ./nargs 
0
julien@ubuntu:~/0x09. argc, argv$ ./nargs hello
1
julien@ubuntu:~/0x09. argc, argv$ ./nargs "hello, world"
1
julien@ubuntu:~/0x09. argc, argv$ ./nargs hello, world
2
julien@ubuntu:~/0x09. argc, argv$ 
```
- 2 - Write a program that prints all arguments it receives.
```
julien@ubuntu:~/0x09. argc, argv$ gcc -Wall -pedantic -Werror -Wextra 2-args.c -o args
julien@ubuntu:~/0x09. argc, argv$ ./args 
./args
julien@ubuntu:~/0x09. argc, argv$ ./args You can do anything, but not everything.
./args
You
can
do
anything,
but
not
everything.
julien@ubuntu:~/0x09. argc, argv$ 
```
- 3 - Write a program that multiplies two numbers. If the program does not receive two arguments, your program should print Error, followed by a new line, and return 1. 
```
julien@ubuntu:~/0x09. argc, argv$ gcc -Wall -pedantic -Werror -Wextra 3-mul.c -o mul
julien@ubuntu:~/0x09. argc, argv$ ./mul 2 3
6
julien@ubuntu:~/0x09. argc, argv$ ./mul 2 -3
-6
julien@ubuntu:~/0x09. argc, argv$ ./mul 2 0
0
julien@ubuntu:~/0x09. argc, argv$ ./mul 245 3245342
795108790
julien@ubuntu:~/0x09. argc, argv$ ./mul
Error
julien@ubuntu:~/0x09. argc, argv$
``` 
- 4 - Write a program that adds positive numbers. If no number is passed to the program, print 0, followed by a new line. If one of the number contains symbols that are not digits, print Error, followed by a new line, and return 1
```
julien@ubuntu:~/0x09. argc, argv$ gcc -Wall -pedantic -Werror -Wextra 4-add.c -o add
julien@ubuntu:~/0x09. argc, argv$ ./add 1 1
2
julien@ubuntu:~/0x09. argc, argv$ ./add 1 10 100 1000
1111
julien@ubuntu:~/0x09. argc, argv$ ./add 1 2 3 e 4 5
Error
julien@ubuntu:~/0x09. argc, argv$ ./add
0
julien@ubuntu:~/0x09. argc, argv$ 
```
- 5 - Write a program that prints the minimum number of coins to make change for an amount of money. You can use an unlimited number of coins of values 25, 10, 5, 2, and 1 cent. if the number of arguments passed to your program is not exactly 1, print Error, followed by a new line, and return 1. 
```
julien@ubuntu:~/0x09. argc, argv$ gcc -Wall -pedantic -Werror -Wextra 100-change.c -o change
julien@ubuntu:~/0x09. argc, argv$ ./change 
Error
julien@ubuntu:~/0x09. argc, argv$ ./change 10
1
julien@ubuntu:~/0x09. argc, argv$ ./change 100
4
julien@ubuntu:~/0x09. argc, argv$ ./change 101
5
julien@ubuntu:~/0x09. argc, argv$ ./change 13
3
julien@ubuntu:~/0x09. argc, argv$ 
```
