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
#define SUCCESS 1
#define FAIL -1
#define COMMAND_SIZE 20
#define NORMAL_OPERATION 4
#define BASIC_COMMAND 1
#define MAX_SIZE 1024
#define ARG_SIZE 10

char privilage_char = '$';

time_t start_time;
time_t end_time;

void start_timer()
{
	start_time = time(NULL);
}

void end_timer()
{
	end_time = time(NULL);
}

void handle_duration_details()
{
	int diff = end_time-start_time;
	printf("You have spent %d seconds in Vshell\n",diff);
}
void display_prompt()
{
	char command_prompt[MAX_SIZE];
	char host_name[MAX_SIZE];
	gethostname(host_name,MAX_SIZE);
	getcwd(command_prompt,MAX_SIZE);
	printf("%s @ %s%c ",host_name,command_prompt,privilage_char);
}
void welcome_prompt()
{
	printf("\t\t\tWelcome to VShell ( Vamshi Shell )\n");
}
void clear_screen()
{
	system("clear");
}
