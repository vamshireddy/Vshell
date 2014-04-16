#include<stdio.h>
#include "definetions.h"
#include "functions.h"

char command[10];
int main()
{	
	clear_screen();
	welcome_prompt();
	for(;;)
	{	
		display_prompt();
		scanf("%s",command);
		if( strcmp(command,"exit") == 0 )
		{
			break;
		}
		int a = parse_and_find_operation(command);
		execute_program(command,a);
	}
}
