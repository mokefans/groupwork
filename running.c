#include"main.h"
void running()
{
	int instation=0;
	int i;
	int order; 
	int operation=0;//修改意见：可以用正数表示顺时针到达，负数表示逆时针到达 (已完成部分)
	stateprint();
	order=analysis();
	while(order!=0)
	{
		if(order==1)
		{
			if(instation==1)
			{
				clearrequest(operation);
				instation=0;
				while(operation==service(operation))
				{
					clearrequest(operation);
				}
				operation=service(operation);//此处可能不适用2，3策略，待修正..... 
			}
			else
			{
				if(operation<0)
				{
					busposition-=SPEED;
					if(busposition<0)
					{
						busposition+=total_station*distance+1;//
					}
				}
				else if(operation>0)
				{
					busposition+=SPEED;
					if(busposition>total_station*distance)
					{
						busposition-=(total_station*distance+1);//
					}
				}
				if(abs(operation)==whichstation())
				{
					instation=1;
				}
			}
			stateprint();
		}
		else if(order==2)
		{
			scanf("%d",&i);
			*(counterclockwise+i-1)+=1;
			sqlistadd((-1)*i);
			operation=service(operation);
		}
		else if(order==3)
		{
			scanf("%d",&i);
			*(clockwise+i-1)+=1;
			sqlistadd(i);
			operation=service(operation);
		}
		else if(order==4)
		{
			scanf("%d",&i);
			*(target+i-1)+=1;
			sqlistadd(i+total_station);//无法判断是正向还是逆向     后期可以通过传入i+total_station,来使器通过合理判定 
			operation=service(operation);
		}
		order=analysis();
	}
	ending();
}
