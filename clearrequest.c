#include"main.h"
void clearrequest(int operation)
{
	int i;
	if(strategy==SSTF)
	{
		if(operation<0)
		{
			counterclockwise[(whichstation()-1)]=0;
			target[(whichstation()-1)]=0;
		}
		else
		{
			clockwise[(whichstation()-1)]=0;
			target[(whichstation()-1)]=0;
		}
	}
	else if(strategy==FCFS)
	{
		//对队列的清除；
		if(sqlist.request[0]>total_station)
		{
			target[(whichstation()-1)]--;
		}
		else
		{
			if(sqlist.request[0]>0)
			{
				clockwise[(whichstation()-1)]--;
			}
			else
			{
				counterclockwise[(whichstation()-1)]--;
			}
		}
		 for(i=0;i<sqlist.num;i++)
		 {
		 	sqlist.request[i]=sqlist.request[i+1];
		 }
		 sqlist.num--;
		 sqlist.request[sqlist.num]=0;
	 } 
	 else
	 {
	 	counterclockwise[(whichstation()-1)]=0;
		target[(whichstation()-1)]=0;
		clockwise[(whichstation()-1)]=0;
	 }
}