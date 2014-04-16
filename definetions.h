#include <stdio.h>
#include <sys/types.h>
#include <fcntl.h>
#include <stdlib.h>

#define MAX__SIZE 1024
#define TRUE 1
#define FALSE 0

#define BACKGROUND_PROC 1
#define IO_REDIRECT 2
#define PIPING 3

void display_prompt();
void clear_screen();
void welcome_prompt();
void parse_and_find_operation();
void execute_program();
