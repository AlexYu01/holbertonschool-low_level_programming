# C - More singly linked lists

Compiled with `gcc 4.8.4`, with `-Wall -Werror -Wextra -pedantic` flags.

**Focus**: The project teaches more about linked lists. As well as the potential dangers of a looping linked list.

**Tasks and their expected outputs**:
- 0 - Write a function that prints all the elements of a listint_t list.
```
julien@ubuntu:~/0x12. More singly linked lists$ gcc -Wall -pedantic -Werror -Wextra 0-main.c 0-print_listint.c -o a
julien@ubuntu:~/0x12. More singly linked lists$ ./a 
9
8
-> 2 elements
julien@ubuntu:~/0x12. More singly linked lists$ 
```
- 1 - Write a function that returns the number of elements in a linked listint_t list.
```
julien@ubuntu:~/0x12. More singly linked lists$ gcc -Wall -pedantic -Werror -Wextra 1-main.c 1-listint_len.c -o b
julien@ubuntu:~/0x12. More singly linked lists$ ./b 
-> 2 elements
julien@ubuntu:~/0x12. More singly linked lists$ 
```
- 2 - Write a function that adds a new node at the beginning of a listint_t list.
```
julien@ubuntu:~/0x12. More singly linked lists$ gcc -Wall -pedantic -Werror -Wextra 2-main.c 2-add_nodeint.c 0-print_listint.c -o c
julien@ubuntu:~/0x12. More singly linked lists$ ./c 
1024
402
98
4
3
2
1
0
julien@ubuntu:~/0x12. More singly linked lists$ 
```
- 3 - Write a function that adds a new node at the end of a listint_t list.
```
julien@ubuntu:~/0x12. More singly linked lists$ gcc -Wall -pedantic -Werror -Wextra 3-main.c 3-add_nodeint_end.c 0-print_listint.c -o d
julien@ubuntu:~/0x12. More singly linked lists$ ./d 
0
1
2
3
4
98
402
1024
julien@ubuntu:~/0x12. More singly linked lists$ 
```
- 4 - Write a function that frees a listint_t list.
```
julien@ubuntu:~/0x12. More singly linked lists$ gcc -Wall -pedantic -Werror -Wextra 4-main.c 3-add_nodeint_end.c 0-print_listint.c 4-free_listint.c -o e
julien@ubuntu:~/0x12. More singly linked lists$ valgrind ./e 
==3643== Memcheck, a memory error detector
==3643== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==3643== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==3643== Command: ./e
==3643== 
0
1
2
3
4
98
402
1024
==3643== 
==3643== HEAP SUMMARY:
==3643==     in use at exit: 0 bytes in 0 blocks
==3643==   total heap usage: 9 allocs, 9 frees, 1,152 bytes allocated
==3643== 
==3643== All heap blocks were freed -- no leaks are possible
==3643== 
==3643== For counts of detected and suppressed errors, rerun with: -v
==3643== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)
julien@ubuntu:~/0x12. More singly linked lists$ 
```
- 5 - Write a function that frees a listint_t list.
```
julien@ubuntu:~/0x12. More singly linked lists$ gcc -Wall -pedantic -Werror -Wextra 5-main.c 3-add_nodeint_end.c 0-print_listint.c 5-free_listint2.c -o f
julien@ubuntu:~/0x12. More singly linked lists$ valgrind ./f 
==3843== Memcheck, a memory error detector
==3843== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==3843== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==3843== Command: ./f
==3843== 
0
1
2
3
4
98
402
1024
(nil)
==3843== 
==3843== HEAP SUMMARY:
==3843==     in use at exit: 0 bytes in 0 blocks
==3843==   total heap usage: 9 allocs, 9 frees, 1,152 bytes allocated
==3843== 
==3843== All heap blocks were freed -- no leaks are possible
==3843== 
==3843== For counts of detected and suppressed errors, rerun with: -v
==3843== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)
julien@ubuntu:~/0x12. More singly linked lists$ 
```
- 6 - Write a function that deletes the head node of a listint_t linked list, and returns the head node’s data (n).
```
julien@ubuntu:~/0x12. More singly linked lists$ gcc -Wall -pedantic -Werror -Wextra 6-main.c 3-add_nodeint_end.c 0-print_listint.c 5-free_listint2.c 6-pop_listint.c -o g
julien@ubuntu:~/0x12. More singly linked lists$ valgrind ./g 
==4369== Memcheck, a memory error detector
==4369== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==4369== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==4369== Command: ./g
==4369== 
0
1
2
3
4
98
402
1024
- 0
1
2
3
4
98
402
1024
- 1
2
3
4
98
402
1024
(nil)
==4369== 
==4369== HEAP SUMMARY:
==4369==     in use at exit: 0 bytes in 0 blocks
==4369==   total heap usage: 9 allocs, 9 frees, 1,152 bytes allocated
==4369== 
==4369== All heap blocks were freed -- no leaks are possible
==4369== 
==4369== For counts of detected and suppressed errors, rerun with: -v
==4369== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)
julien@ubuntu:~/0x12. More singly linked lists$ 
```
- 7 - Write a function that returns the nth node of a listint_t linked list.
```
julien@ubuntu:~/0x12. More singly linked lists$ gcc -Wall -pedantic -Werror -Wextra 7-main.c 3-add_nodeint_end.c 0-print_listint.c 5-free_listint2.c 7-get_nodeint.c -o h
julien@ubuntu:~/0x12. More singly linked lists$ ./h 
0
1
2
3
4
98
402
1024
98
0
1
2
3
4
98
402
1024
julien@ubuntu:~/0x12. More singly linked lists$ 
```
- 8 - Write a function that returns the sum of all the data (n) of a listint_t linked list.
```
julien@ubuntu:~/c0x12. More singly linked lists$ gcc -Wall -pedantic -Werror -Wextra 8-main.c 3-add_nodeint_end.c 5-free_listint2.c 8-sum_listint.c -o i
julien@ubuntu:~/0x12. More singly linked lists$ ./i 
sum = 1534
julien@ubuntu:~/0x12. More singly linked lists$
```
- 9 - Write a function that inserts a new node at a given position.
```
julien@ubuntu:~/0x12. More singly linked lists$ gcc -Wall -pedantic -Werror -Wextra 9-main.c 3-add_nodeint_end.c 0-print_listint.c 5-free_listint2.c 9-insert_nodeint.c -o j
julien@ubuntu:~/0x12. More singly linked lists$ ./j 
0
1
2
3
4
98
402
1024
-----------------
0
1
2
3
4
4096
98
402
1024
julien@ubuntu:~/0x12. More singly linked lists$ 
```
- 10 - Write a function that deletes the node at index index of a listint_t linked list.
```
julien@ubuntu:~/0x12. More singly linked lists$ gcc -Wall -pedantic -Werror -Wextra 10-main.c 3-add_nodeint_end.c 0-print_listint.c 5-free_listint2.c 10-delete_nodeint.c -o k
julien@ubuntu:~/0x12. More singly linked lists$ valgrind ./k 
==5571== Memcheck, a memory error detector
==5571== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==5571== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==5571== Command: ./k
==5571== 
0
1
2
3
4
98
402
1024
-----------------
0
1
2
3
4
402
1024
-----------------
1
2
3
4
402
1024
-----------------
2
3
4
402
1024
-----------------
3
4
402
1024
-----------------
4
402
1024
-----------------
402
1024
-----------------
1024
-----------------
-----------------
-----------------
-----------------
-----------------
-----------------
-----------------
-----------------
-----------------
-----------------
==5571== 
==5571== HEAP SUMMARY:
==5571==     in use at exit: 0 bytes in 0 blocks
==5571==   total heap usage: 9 allocs, 9 frees, 1,152 bytes allocated
==5571== 
==5571== All heap blocks were freed -- no leaks are possible
==5571== 
==5571== For counts of detected and suppressed errors, rerun with: -v
==5571== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)
julien@ubuntu:~/0x12. More singly linked lists$ 
```
- 11 - Write a function that reverses a listint_t linked list.
```
julien@ubuntu:~/0x12. More singly linked lists$ gcc -Wall -pedantic -Werror -Wextra 100-main.c 3-add_nodeint_end.c 0-print_listint.c 5-free_listint2.c 100-reverse_listint.c -o l
julien@ubuntu:~/0x12. More singly linked lists$ valgrind ./l 
==3117== Memcheck, a memory error detector
==3117== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==3117== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==3117== Command: ./l
==3117== 
0
1
2
3
4
98
402
1024
1024
402
98
4
3
2
1
0
==3117== 
==3117== HEAP SUMMARY:
==3117==     in use at exit: 0 bytes in 0 blocks
==3117==   total heap usage: 9 allocs, 9 frees, 1,152 bytes allocated
==3117== 
==3117== All heap blocks were freed -- no leaks are possible
==3117== 
==3117== For counts of detected and suppressed errors, rerun with: -v
==3117== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)
julien@ubuntu:~/0x12. More singly linked lists$ 
```
- 12 - Write a function that prints a listint_t linked list while making sure not to enter a infinite loop.
```
julien@ubuntu:~/0x12. More singly linked lists$ gcc -Wall -pedantic -Werror -Wextra 101-main.c 2-add_nodeint.c 101-print_listint_safe.c -o m
julien@ubuntu:~/0x12. More singly linked lists$ ./m
[0x1b500f0] 1024
[0x1b500d0] 402
[0x1b500b0] 98
[0x1b50090] 4
[0x1b50070] 3
[0x1b50050] 2
[0x1b50030] 1
[0x1b50010] 0
[0x1b50600] 1024
[0x1b505e0] 402
[0x1b505c0] 98
[0x1b505a0] 4
[0x1b50580] 3
[0x1b50560] 2
[0x1b50540] 1
[0x1b50110] 0
-> [0x1b505c0] 98
julien@ubuntu:~/0x12. More singly linked lists$
```
- 13 - Write a function that frees a listint_t list while making sure not to enter a loop.
```
julien@ubuntu:~/0x12. More singly linked lists$ gcc -Wall -pedantic -Werror -Wextra 102-main.c 2-add_nodeint.c 101-print_listint_safe.c 102-free_listint_safe.c -o n
julien@ubuntu:~/0x12. More singly linked lists$ ./n 
[0x11260f0] 1024
[0x11260d0] 402
[0x11260b0] 98
[0x1126090] 4
[0x1126070] 3
[0x1126050] 2
[0x1126030] 1
[0x1126010] 0
[0x1126600] 1024
[0x11265e0] 402
[0x11265c0] 98
[0x11265a0] 4
[0x1126580] 3
[0x1126560] 2
[0x1126540] 1
[0x1126110] 0
-> [0x11265c0] 98
(nil), (nil)
julien@ubuntu:~/0x12. More singly linked lists$ 
```
- 14 - Write a function that finds the loop in a linked list. 
```
julien@ubuntu:~/0x12. More singly linked lists$ gcc -Wall -pedantic -Werror -Wextra 103-main.c 2-add_nodeint.c 101-print_listint_safe.c 102-free_listint_safe.c 103-find_loop.c -o o
julien@ubuntu:~/0x12. More singly linked lists$ ./o 
[0x13700f0] 1024
[0x13700d0] 402
[0x13700b0] 98
[0x1370090] 4
[0x1370070] 3
[0x1370050] 2
[0x1370030] 1
[0x1370010] 0
[0x1370560] 1024
[0x1370540] 402
[0x1370010] 98
[0x1370030] 7
[0x1370050] 6
[0x1370070] 5
[0x1370090] 4
[0x13700b0] 3
[0x13700d0] 2
[0x13700f0] 1
[0x1370110] 0
-> [0x1370030] 7
Loop starts at [0x1370030] 7
julien@ubuntu:~/0x12. More singly linked lists$ 
```
