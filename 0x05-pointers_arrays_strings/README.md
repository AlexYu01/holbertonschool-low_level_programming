# C - More pointers, arrays and strings

Compiled with `gcc 4.8.4`, with `-Wall -Werror -Wextra -pedantic` flags.

**Focus**: The project teaches more about pointers, arrays, and the manipulation of strings. Usage of the standard library is forbidden in some tasks.

**Tasks and their expected outputs**:
- 0 - Write a function that concatenates two strings. This function appends the src string to the dest string, overwriting the terminating null byte (\0) at the end of dest, and then adds a terminating null byte.
```
julien@ubuntu:~/0x05$ gcc -Wall -pedantic -Werror -Wextra 0-main.c 0-strcat.c -o 0-strcat
julien@ubuntu:~/0x05$ ./0-strcat 
Hello 
World!
Hello World!
World!
Hello World!
julien@ubuntu:~/0x05$ 
```
- 1 - Write a function that concatenates two strings. It will use at most n bytes from src.
```
julien@ubuntu:~/0x05$ gcc -Wall -pedantic -Werror -Wextra 1-main.c 1-strncat.c -o 1-strncat
julien@ubuntu:~/0x05$ ./1-strncat 
Hello 
World!
Hello W
World!
Hello W
Hello WWorld!
World!
Hello WWorld!
julien@ubuntu:~/0x05$
```
- 2 - Write a function that copies a string.
```
julien@ubuntu:~/0x05$ gcc -Wall -pedantic -Werror -Wextra 2-main.c 2-strncpy.c -o 2-strncpy
julien@ubuntu:~/0x05$ ./2-strncpy 
*************************************************************************************************
First********************************************************************************************
First********************************************************************************************
First, solve the problem. Then, write the code
First, solve the problem. Then, write the code
0x46 0x69 0x72 0x73 0x74 0x2c 0x20 0x73 0x6f 0x6c
0x76 0x65 0x20 0x74 0x68 0x65 0x20 0x70 0x72 0x6f
0x62 0x6c 0x65 0x6d 0x2e 0x20 0x54 0x68 0x65 0x6e
0x2c 0x20 0x77 0x72 0x69 0x74 0x65 0x20 0x74 0x68
0x65 0x20 0x63 0x6f 0x64 0x65 0x0a 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x2a 0x2a 0x2a 0x2a 0x2a 0x2a 0x2a 0x00
julien@ubuntu:~/0x05$ 
```
- 3 - Write a function that compares two strings.
```
julien@ubuntu:~/0x05$ gcc -Wall -pedantic -Werror -Wextra 3-main.c 3-strcmp.c -o 3-strcmp
julien@ubuntu:~/0x05$ ./3-strcmp 
-15
15
0
julien@ubuntu:~/0x05$ 
```
- 4 - Write a function that reverses the content of an array of integers.
```
julien@ubuntu:~/0x05$ gcc -Wall -pedantic -Werror -Wextra 4-main.c 4-rev_array.c -o 4-rev_array
julien@ubuntu:~/0x05$ ./4-rev_array 
0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 98, 1024, 1337
1337, 1024, 98, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0
julien@ubuntu:~/0x05$ 
```
- 5 - Write a function that changes all lowercase letters of a string to uppercase.
```
julien@ubuntu:~/0x05$ gcc -Wall -pedantic -Werror -Wextra 5-main.c 5-string_toupper.c -o 5-string_toupper
julien@ubuntu:~/0x05$ ./5-string_toupper 
HOLBERTON SCHOOL!
HOLBERTON SCHOOL!
julien@ubuntu:~/0x05$ 
```
- 6 - Write a function that capitalizes all words of a string. Separators of words: space, tabulation, new line, ,, ;, ., !, ?, ", (, ), {, and }
```
julien@ubuntu:~/0x05$ gcc -Wall -pedantic -Werror -Wextra 6-main.c 6-cap_string.c -o 6-cap
julien@ubuntu:~/0x05$ ./6-cap 
Expect The Best. Prepare For The Worst. Capitalize On What Comes.
Hello World! Hello-world 0123456hello World Hello World.Hello World
Expect The Best. Prepare For The Worst. Capitalize On What Comes.
Hello World! Hello-world 0123456hello World Hello World.Hello World
julien@ubuntu:~/0x05$ 
```
- 7 - Write a function that encodes a string into 1337.
```
julien@ubuntu:~/0x05$ gcc -Wall -pedantic -Werror -Wextra 7-main.c 7-leet.c -o 7-1337
julien@ubuntu:~/0x05$ ./7-1337 
3xp3c7 7h3 b3s7. Pr3p4r3 f0r 7h3 w0rs7. C4pi741iz3 0n wh47 c0m3s.
3xp3c7 7h3 b3s7. Pr3p4r3 f0r 7h3 w0rs7. C4pi741iz3 0n wh47 c0m3s.
julien@ubuntu:~/0x05$ 
```
- 8 - Write a function that encodes a string using rot13.
```
julien@ubuntu:~/0x05$ gcc -Wall -pedantic -Werror -Wextra 8-main.c 8-rot13.c -o 8-rot13
julien@ubuntu:~/0x05$ ./8-rot13 
EBG13 ("ebgngr ol 13 cynprf", fbzrgvzrf ulcurangrq EBG-13) vf n fvzcyr yrggre fhofgvghgvba pvcure.
------------------------------------
EBG13 ("ebgngr ol 13 cynprf", fbzrgvzrf ulcurangrq EBG-13) vf n fvzcyr yrggre fhofgvghgvba pvcure.
------------------------------------
ROT13 ("rotate by 13 places", sometimes hyphenated ROT-13) is a simple letter substitution cipher.
------------------------------------
ROT13 ("rotate by 13 places", sometimes hyphenated ROT-13) is a simple letter substitution cipher.
------------------------------------
EBG13 ("ebgngr ol 13 cynprf", fbzrgvzrf ulcurangrq EBG-13) vf n fvzcyr yrggre fhofgvghgvba pvcure.
------------------------------------
EBG13 ("ebgngr ol 13 cynprf", fbzrgvzrf ulcurangrq EBG-13) vf n fvzcyr yrggre fhofgvghgvba pvcure.
julien@ubuntu:~/0x05$ 
```
- 9 - Write a function that prints an integer. Usage of long, arrays, pointers is forbidden.
```
julien@ubuntu:~/0x05$ gcc -Wall -pedantic -Werror -Wextra _putchar.c 100-main.c 100-print_number.c -o 100-print_numbers
julien@ubuntu:~/0x05$ ./100-print_numbers 
98
402
1024
0
-98
julien@ubuntu:~/0x05$ 
```
- 10 - Add one line to the file, so that the program prints a[2] = 98, followed by a new line.

*Output not included.*
- 11 - Write a function that adds two numbers.
```
julien@ubuntu:~/0x05$ gcc -Wall -pedantic -Werror -Wextra 102-main.c 102-infinite_add.c -o 102-add
julien@ubuntu:~/0x05$ ./102-add 
1234567892434574367823574575678477685785645685876876774586734734563456453743756756784458 + 9034790663470697234682914569346259634958693246597324659762347956349265983465962349569346 = 10269358555905271602506489145024737320744338932474201434349082690912722437209719106353804
Error
Error
999999999 + 1 = 1000000000
julien@ubuntu:~/0x05$ 
```
- 12 - Write a function that prints a buffer. The output should print 10 bytes per line. Each line starts with the position of the first byte of the line in hexadecimal (8 chars), starting with 0. Each line shows the hexadecimal content (2 chars) of the buffer, 2 bytes at a time, separated by a space. Each line shows the content of the buffer. If the byte is a printable character, print the letter, if not, print '.' Each line ends with a new line \n. If size is 0 or less, the output should be a new line only \n.
```
julien@ubuntu:~/0x05$ gcc -Wall -pedantic -Werror -Wextra 103-main.c 103-print_buffer.c -o 103-buffer
julien@ubuntu:~/0x05$ ./103-buffer 
This is a string!
---------------------------------
00000000: 5468 6973 2069 7320 6120 This is a 
0000000a: 7374 7269 6e67 2100 416e string!.An
00000014: 6420 7468 6973 2069 7320 d this is 
0000001e: 7468 6520 7265 7374 206f the rest o
00000028: 6620 7468 6520 2362 7566 f the #buf
00000032: 6665 7220 3a29 0102 0304 fer :)....
0000003c: 0506 0723 6369 7366 756e ...#cisfun
00000046: 0a00 0000 0000 0000 0000 ..........
00000050: 0000 0000 0000 0000 0000 ..........
0000005a: 2021 3456 2370 6f69 6e74  !4V#point
00000064: 6572 7361 7265 6675 6e20 ersarefun 
0000006e: 2369 6e66 6572 6e75 6d69 #infernumi
00000078: 7366 756e 0a00           sfun..
julien@ubuntu:~/0x05$ 
```
