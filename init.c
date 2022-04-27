#include"main.h"
void init()
{
	int i;
	stationposition=(int*)malloc(sizeof(int)*total_station);
	counterclockwise=(int*)malloc(sizeof(int)*total_station);
	clockwise=(int*)malloc(sizeof(int)*total_station);
	target=(int*)malloc(sizeof(int)*total_station);
	for(i=0;i<total_station;i++)
	{
		*(stationposition+i)=i*distance;
		*(counterclockwise+i)=0;
		*(clockwise+i)=0;
		*(target+i)=0;
	}
	switch(strategy)
	{
		case FCFS:service=service1;break;
		case SSTF:service=service2;break;
		case SCAN:service=service3;break;
	}
	sqlist.num=0;
	sqlist.request=(int*)malloc(sizeof(int)*8);
	sqlist.capacity=8;
}