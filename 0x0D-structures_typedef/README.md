# C - Structures, typedef

Compiled with `gcc 4.8.4`, with `-Wall -Werror -Wextra -pedantic` flags.

**Focus**: The project teaches what structures are, how to make one, and how to use one. Also teaches about the usages of typedef.

**Tasks and their expected outputs**:
- 0 - Define a new type struct dog with the following elements:
name, type = char *
age, type = float
owner, type = char *
```
julien@ubuntu:~/0x0d. structures, typedef$ gcc -Wall -pedantic -Werror -Wextra 0-main.c -o a
julien@ubuntu:~/0x0d. structures, typedef$ ./a 
My name is Django, and I am 3.5 :) - Woof!
julien@ubuntu:~/0x0d. structures, typedef$ 
```
- 1 - Write a function that initialize a variable of type struct dog.
```
julien@ubuntu:~/0x0d. structures, typedef$ gcc -Wall -pedantic -Werror -Wextra 2-main.c 2-print_dog.c -o c
julien@ubuntu:~/0x0d. structures, typedef$ ./c 
Name: Django
Age: 3.500000
Owner: Jay
julien@ubuntu:~/0x0d. structures, typedef$ 
```
- 2- Write a function that prints a struct dog. If an element of d is NULL, print (nil) instead of this element. (if name is NULL, print Name: (nil)). If d is NULL print nothing.
```
julien@ubuntu:~/0x0d. structures, typedef$ gcc -Wall -pedantic -Werror -Wextra 2-main.c 2-print_dog.c -o c
julien@ubuntu:~/0x0d. structures, typedef$ ./c 
Name: Django
Age: 3.500000
Owner: Jay
julien@ubuntu:~/0x0d. structures, typedef$
```
- 3 - Define a new type dog_t as a new name for the type struct dog.
```
julien@ubuntu:~/0x0d. structures, typedef$ gcc -Wall -pedantic -Werror -Wextra 3-main.c -o d
julien@ubuntu:~/0x0d. structures, typedef$ ./d 
My name is Django, and I am 3.5 :) - Woof!
julien@ubuntu:~/0x0d. structures, typedef$ 
```
- 4 - Write a function that creates a new dog. You have to store a copy of name and owner. Return NULL if the function fails.
```
julien@ubuntu:~/0x0d. structures, typedef$ gcc -Wall -pedantic -Werror -Wextra 4-main.c 4-new_dog.c -o e
julien@ubuntu:~/0x0d. structures, typedef$ ./e
My name is Django, and I am 3.5 :) - Woof!
julien@ubuntu:~/0x0d. structures, typedef$ 
```
- 5 - Write a function that frees dogs (structure).
```
julien@ubuntu:~/0x0d. structures, typedef$ gcc -Wall -pedantic -Werror -Wextra 5-main.c 5-free_dog.c 4-new_dog.c -o f
julien@ubuntu:~/0x0d. structures, typedef$ valgrind ./f
==22840== Memcheck, a memory error detector
==22840== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==22840== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==22840== Command: ./f
==22840== 
My name is Django, and I am 3.5 :) - Woof!
==22840== 
==22840== HEAP SUMMARY:
==22840==     in use at exit: 0 bytes in 0 blocks
==22840==   total heap usage: 4 allocs, 4 frees, 1,059 bytes allocated
==22840== 
==22840== All heap blocks were freed -- no leaks are possible
==22840== 
==22840== For counts of detected and suppressed errors, rerun with: -v
==22840== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)
julien@ubuntu:~/0x0d. structures, typedef$ 
```
