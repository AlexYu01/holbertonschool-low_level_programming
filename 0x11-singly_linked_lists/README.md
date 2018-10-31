# C - Singly linked lists

Compiled with `gcc 4.8.4`, with `-Wall -Werror -Wextra -pedantic` flags.

**Focus**: The project teaches linked lists. Why use linked list over arrays, and how to make one.

**Tasks and their expected outputs**:
- 0 - Write a function that prints all the elements of a list_t list.
```
julien@ubuntu:~/0x11. Singly linked lists$ gcc -Wall -pedantic -Werror -Wextra 0-main.c 0-print_list.c -o a
julien@ubuntu:~/0x11. Singly linked lists$ ./a 
[5] Hello
[5] World
-> 2 elements

[0] (nil)
[5] World
-> 2 elements
julien@ubuntu:~/0x11. Singly linked lists$
```
- 1 - Write a function that returns the number of elements in a linked list_t list.
```
julien@ubuntu:~/0x11. Singly linked lists$ gcc -Wall -pedantic -Werror -Wextra 1-main.c 1-list_len.c -o b
julien@ubuntu:~/0x11. Singly linked lists$ ./b 
-> 2 elements
julien@ubuntu:~/0x11. Singly linked lists$ 
```
- 2 - rite a function that adds a new node at the beginning of a list_t list. The passed string needs to be duplicated.
```
julien@ubuntu:~/0x11. Singly linked lists$ gcc -Wall -pedantic -Werror -Wextra 2-main.c 2-add_node.c 0-print_list.c -o c
julien@ubuntu:~/0x11. Singly linked lists$ ./c 
[3] Zee
[7] William
[7] Tasneem
[6] Steven
[9] Sravanthi
[6] Siphan
[4] Rona
[4] Rick
[4] Rick
[7] Praylin
[5] Mason
[6] Marine
[4] Kris
[7] Josquin
[4] John
[4] John
[3] Joe
[6] Gloria
[7] Electra
[4] Dora
[6] Daniel
[6] Damian
[8] Chandler
[5] Bilal
[7] Bennett
[8] Augustin
[5] Asaia
[9] Alexandro
julien@ubuntu:~/0x11. Singly linked lists$ 
```
- 3 - Write a function that adds a new node at the end of a list_t list.
```
julien@ubuntu:~/0x11. Singly linked lists$ gcc -Wall -pedantic -Werror -Wextra 3-main.c 3-add_node_end.c 0-print_list.c -o d
julien@ubuntu:~/0x11. Singly linked lists$ ./d 
[4] Anne
[6] Colton
[6] Corbin
[6] Daniel
[6] Danton
[5] David
[4] Gary
[6] Holden
[3] Ian
[3] Ian
[3] Jay
[6] Jennie
[5] Jimmy
[6] Justin
[6] Kalson
[4] Kina
[7] Matthew
[3] Max
[7] Michael
[4] Ntuj
[6] Philip
[7] Richard
[8] Samantha
[6] Stuart
[5] Swati
[7] Timothy
[6] Victor
[6] Walton
julien@ubuntu:~/0x11. Singly linked lists$ 
```
- 4 - Write a function that frees a list_t list.
```
julien@ubuntu:~/0x11. Singly linked lists$ gcc -Wall -pedantic -Werror -Wextra 4-main.c 4-free_list.c 3-add_node_end.c 0-print_list.c -o e
julien@ubuntu:~/0x11. Singly linked lists$ valgrind ./e
==3598== Memcheck, a memory error detector
==3598== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==3598== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==3598== Command: ./e
==3598== 
[6] Jennie
[1] &
[3] Jay
[4] love
[3] asm
==3598== 
==3598== HEAP SUMMARY:
==3598==     in use at exit: 0 bytes in 0 blocks
==3598==   total heap usage: 11 allocs, 11 frees, 1,166 bytes allocated
==3598== 
==3598== All heap blocks were freed -- no leaks are possible
==3598== 
==3598== For counts of detected and suppressed errors, rerun with: -v
==3598== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)
julien@ubuntu:~/0x11. Singly linked lists$ 
```
- 5 - Write a function that prints You're beat! and yet, you must allow,\nI bore my house upon my back!\n before the main function is executed.
```
julien@ubuntu:~/$ gcc -Wall -pedantic -Werror -Wextra 100-main.c 100-first.c -o first
julien@ubuntu:~/$ ./first 
You're beat! and yet, you must allow,
I bore my house upon my back!
(A tortoise, having pretty good sense of a hare's nature, challenges one to a race.)
julien@ubuntu:~/$ 
```
- 6 - Write a 64-bit program in assembly that prints Hello, Holberton, followed by a new line. Only allowed to use printf.
```
julien@ubuntu:~/$ nasm -f elf64 101-hello_holberton.asm && gcc 101-hello_holberton.o -o hello
julien@ubuntu:~/$ ./hello 
Hello, Holberton
julien@ubuntu:~/$ 
```
