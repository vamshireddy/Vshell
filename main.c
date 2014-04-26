#include<stdio.h>
#include<string.h>
#include "definetions.h"
#include "file_handling.h"
#include <signal.h>

char command[COMMAND_SIZE];

int Exit(int code)
{	
	end_timer();
	printf("\n");
	handle_duration_details();
	printf("Thank you!\n");
	exit(code);
}

signal_handler()
{
	Exit(1);
}

int handle_basic_commands(char* command)
{
	char arg[10];
	
	if( strcmp(command,"exit") == 0 )
	{
		Exit(SUCCESS);
	}
	else if( strcmp(command,"clear") == 0 )
	{
		clear_screen();
	}
	else if( memcmp(command,"ls",2) == 0 )
	{
		if( command[2] == '\0' )
		{
			list_files_in_dir(".");
		}
		else
		{
			strcpy(arg,command+3);
			list_files_in_dir(arg);
		}
	}
	else if( memcmp(command,"cd",2) == 0 )
	{
		if( command[2] == '\0' )
		{
			printf("Please specify the directory \n");
		}
		else
		{
			strcpy(arg,command+3);
			change_dir(arg);
		}
	}
	else if( memcmp(command,"rmdir",5) == 0 )
	{
		if( command[6] == '\0' )
		{
			printf("Please specify the directory \n");
		}
		else
		{
			strcpy(arg,command+6);
			remove_dir(arg);
		}
	}
	else if( memcmp(command,"mkdir",5) == 0 )
	{
		if( command[6] == '\0')
		{
			printf("Please specify the directory \n");
		}
		else
		{
			strcpy(arg,command+6);
			make_dir(arg);
		}
	}
	return BASIC_COMMAND;
}

int parse_and_find_operation(char* command)
{
	int c,i;
	int pipe_flag = 0;
	int pipe_proc_count = 0; // abc | cdf | asf
	int io_redirection = 0;
	int io_proc_count = 0; // xyz > saf > abc
	while( i < COMMAND_SIZE )
	{
		/* Either of them should be ther */
		if( command[i] == '|' )
			pipe_flag = 1;
		else if( command[i] == '>' )
			io_redirection = 1;
	}
	return NORMAL_OPERATION;
}	

int* parse_command(char* raw_command,char* cmd_name,int* no_of_args)
{
}

void execute_program(char* raw_command, int a)
{
	int no_of_args;
	char command_name[10];
	int* args = parse_command(raw_command,command_name,&no_of_args);
}

int main()
{
	start_timer();
	clear_screen();
	welcome_prompt();
	signal(SIGINT,signal_handler);
	for(;;)
	{	
		display_prompt();
		gets(&command);
		/* Handle some of the basic commands */
		int flag = handle_basic_commands(command);
		/* Now parse the input to know what type of command it is */
		if( flag != BASIC_COMMAND )
		{
			int a = parse_and_find_operation(command);
			execute_program(command,a);
		}
	}
}
