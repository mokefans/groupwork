#include"main.h"
int analysis()
{
	char* string;
	string=(char*)malloc(sizeof(char)*20);
	scanf("%s",string);
	if(strcmp(string,"end")==0)
	{
		free(string);
		return 0;
	}
	else if(strcmp(string,"clock")==0)
	{
		free(string);
		return 1;
	}
	else if(strcmp(string,"counterclockwise")==0)
	{
		free(string);
		return 2;
	}
	else if(strcmp(string,"clockwise")==0)
	{
		free(string);
		return 3;
	}
	else if(strcmp(string,"target")==0)
	{
		free(string);
		return 4;
	}
	else
	{
		printf("error\n");
		exit(1);
	}
}