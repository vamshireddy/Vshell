#include<stdio.h>
#include<dirent.h>

void list_files_in_dir( char* dir_name )
{
	DIR* dir = opendir(dir_name);
	if( dir == NULL )
	{
		printf("There is no such file or directory\n");
		return;
	}
	struct dirent* dir_p;
	while( ( dir_p = readdir(dir) ) != NULL )
	{
		printf("%s\n",dir_p->d_name);
	}
}

void change_dir(char* d)
{
	if( chdir(d) == -1 )
	{
		printf("Invalid directory\n");
		return;
	}
}

void remove_dir(char* d)
{
	if( rmdir(d) == -1 )
	{
		printf("Invalid directory\n");
		return;
	}	
}

void make_dir(char* d)
{
	mkdir(d);
}
