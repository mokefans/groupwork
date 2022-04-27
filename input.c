#include"main.h"
void input(FILE* fp)
{
	char* string;
	char* m_strategy;
	string=(char*)malloc(sizeof(char)*15);
	m_strategy=(char*)malloc(sizeof(char)*8);
	while(!feof(fp))
	{
		string[0]=fgetc(fp);
		if(string[0]=='#')
		{
			while((string[0]=fgetc(fp))!='\n');
		}
		else
		{
			fscanf(fp,"%s = ",string+1);
			if(strcmp(string,"TOTAL_STATION")==0)
			{
				fscanf(fp,"%d",&total_station);
			}
			if(strcmp(string,"STRATEGY")==0)
			{
				fscanf(fp,"%s",m_strategy);
				if(strcmp(m_strategy,"FCFS")==0)
				{
					strategy=FCFS;
				}
				else if(strcmp(m_strategy,"SSTF")==0)
				{
					strategy=SSTF;
				}
				else if(strcmp(m_strategy,"SCAN")==0)
				{
					strategy=SCAN;
				}
			}
			if(strcmp(string,"DISTANCE")==0)
			{
				fscanf(fp,"%d",&distance);
			}
		}
	}
	free(string);
	free(m_strategy);
}