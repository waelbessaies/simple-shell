# simple shell
# Table of contents 
- About this project
- Usage
- Exmples Builtins
- Authorized functions and system calls

## About this project
A simple UNIX command interpreter written as part of the low-level programming and algorithm track at Holberton School.

## Usage
compile it with

gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh

-exit exits shell (Usage: exit [status])
-env prints environmental variables (Usage: env)

## Exmples Builtins
-case of env and exit
```bash
julien@ubuntu:~/shell$ ./simple_shell
$ env
USER=julien
LANGUAGE=en_US
SESSION=ubuntu
COMPIZ_CONFIG_PROFILE=ubuntu
SHLVL=1
HOME=/home/julien
C_IS=Fun_:)
DESKTOP_SESSION=ubuntu
LOGNAME=julien
TERM=xterm-256color
PATH=/home/julien/bin:/home/julien/.local/bin:/usr/local/sbin:/usr/local/bin:/usr/sbin:/usr/bin:/sbin:/bin:/usr/games:/usr/local/games:/snap/bin
DISPLAY=:0
$ exit
julien@ubuntu:~/shell$ 
```
#  Authorized functions and system calls
```bash

-access (man 2 access)
-chdir (man 2 chdir)
-close (man 2 close)
-closedir (man 3 closedir)
-execve (man 2 execve)
-exit (man 3 exit)
-exit (man 2 _exit)
-fflush (man 3 fflush)
-fork (man 2 fork)
-free (man 3 free)
-getcwd (man 3 getcwd)
-getline (man 3 getline)
-getpid (man 2 getpid)
-isatty (man 3 isatty)
-kill (man 2 kill)
-malloc (man 3 malloc)
-open (man 2 open)
-opendir (man 3 opendir)
-perror (man 3 perror)
-read (man 2 read)
-readdir (man 3 readdir)
-signal (man 2 signal)
-stat (__xstat) (man 2 stat)
-lstat (__lxstat) (man 2 lstat)
-fstat (__fxstat) (man 2 fstat)
-strtok (man 3 strtok)
-wait (man 2 wait)
-waitpid (man 2 waitpid)
-wait3 (man 2 wait3)
-wait4 (man 2 wait4)
-write (man 2 write)
