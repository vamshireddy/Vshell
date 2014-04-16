Vshell
======

This is a very interactive shell with minimal list of features when compared to bash. Done exclusively for learning purpose.

Tasks to be done :

PARSER
1) Implement parser for parsing the input commands
    ( Should handle routines for | , >
2) Structure the input into command_name, argumentlist
3) Should handle string args ( ex: grep )\n

MAIN
1) Get the user name and the machine name for displaying at the command prompt
2) Initialize the path variable

PROCESS HANDLING
1) Should fork a new process and replace its image with exec, when a command is entered.
Its output is returned back using pipes.
2) Duplicate the descriptors using dup,dup2
3) stdin(0), stdout(1), stderr(2)
