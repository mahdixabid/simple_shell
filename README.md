> # Description π 
simple shell is a UNIX command interpreter that replicates core functionalities of the sh shell. This project was developed as part of the third month curriculum at Holberton School
------------
 #### Requiment π©
1.  Linux
2.  Git
3.  gcc 4.8.4
##### Concept of the project π’
1. How to work in team
2. How Simple Shell works
3. how to use git in team setting
> ### Installation π
Clone this repo:    ` git clone https://github.com/mahdixabid/simple_shell`
<br>
Compile: `gcc -Wall -Werror -Wextra -pedantic *.c -o hsh`
<br>
To run interactively: `./hsh`
<br>
To run in non-interactive mode: `echo "ls -l | ./hsh`
------------
> ###  EXAMPLES π  
##### Example  1:
###### 1. List Files using ls with no option1.
ls with no option list files and directories in bare format where we wonβt be able to view details like file types, size, modified date and time, permission and links etc.
```shell
$ ls
0-read_textfile.c  1-create_file.c  2-append_text_to_file.c  holberton.h  README.md
```
##### Example 2:
##### Example 2: 
###### 2 List Files With option βl
Here, ls -l (-l is character not one) shows file or directory, size, modified date and time, file or folder name and owner of file and its permission.
```shell
$ ls -l
total 20
-rw-rw-r-- 1 yuri yuri 640 Apr 14 10:01 0-read_textfile.c
-rw-rw-r-- 1 yuri yuri 617 Apr 14 10:01 1-create_file.c
-rw-rw-r-- 1 yuri yuri 695 Apr 14 10:01 2-append_text_to_file.c
-rw-rw-r-- 1 yuri yuri 357 Apr 14 10:01 holberton.h
-rw-rw-r-- 1 yuri yuri 172 Apr 14 10:01 README.md
```
------------
#### AUTHORS π
- <a href="https://www.github.com/omaryahia4" title="Omar Yahia">Omar Yahia</a>
- <a href="https://www.github.com/mahdixabid" title="MAHDi ABiD">MAHDi ABiD</a>
------------
### Annotations  π‘
We have written an [article](https://www.linkedin.com/post/edit/6787079741284388864/ "article") in which we deepen the internal processes within the shell by typing the command "ls -l *.c".
### Contact Us π₯ 
2730@holbertonschool.com
2686@holbertonschool.com
