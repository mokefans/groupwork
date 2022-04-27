#include"main.h"
void sqlistadd(int i)
{
	if(sqlist.capacity==sqlist.num)
	{
		sqlist.request=(int*)realloc(sqlist.request,sizeof(int)*sqlist.capacity*2);
	}
	sqlist.request[sqlist.num]=i;
	sqlist.num++;
}