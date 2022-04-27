#include"main.h"
int service1(int operation)
{
	operation=sqlist.request[0];
	if(operation>total_station)
	{
		operation-=total_station;
		if(stationposition[operation-1]<=busposition)
		{
			if((busposition-stationposition[operation-1])>=(total_station*distance)/2.0)
			{
				return  operation;
			}
			else
			{
				return (-1)*operation;
			}
		}
		else
		{
			if((stationposition[operation-1]-busposition)>(total_station*distance)/2.0)
			{
				return (-1)*operation;
			}
			else
			{
				return operation;
			}
		}
	}
	return operation;
	//完成策略后，可以取消operation参数.此处为了暂时测试，不予取消. 
}