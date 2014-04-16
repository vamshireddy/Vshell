#define MAX_SIZE 1024
void display_prompt()
{
	char command_prompt[MAX_SIZE];
	char host_name[MAX_SIZE];
	gethostname(host_name,MAX_SIZE);
	getcwd(command_prompt,MAX_SIZE);
	printf("%s @ %s =>",host_name,command_prompt);
}
void welcome_prompt()
{
	printf("\t\t\tWelcome to VShell ( Vamshi Shell )\n");
}
void clear_screen()
{
	system("clear");
}
