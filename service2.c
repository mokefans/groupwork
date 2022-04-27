#include"main.h"
int service2(int operation)
{
	int i,min=-1;
	for(i=0;i<total_station;i++)
	{
		if(counterclockwise[i]>0||clockwise[i]>0||target[i]>0)
		{
			if(min==-1)
			{
				min=stationposition[i];//未完成！！！！ 
			}
		}
	}
	return operation;
}