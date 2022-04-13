# simple shell
# Table of contents 
- About this project
- Usage
- Exmples Builtins
- Authorized functions and system calls

## About this project
A simple UNIX command interpreter written as part of the low-level programming and algorithm track at Holberton School.

##Usage
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
