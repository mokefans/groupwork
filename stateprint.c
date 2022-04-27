#include"main.h"
void stateprint()
{
	int i;
	printf("BUS:\n");
	printf("position:%d\n",busposition);
	printf("target: ");//由于oj的模糊说明，此处在冒号后留有一个空格（也可能没有）
	for(i=0;i<total_station;i++)
	{
		printf("%d",*(target+i));
	 } 
	 printf("\n");
	 printf("STATION:\n");
	 printf("clockwise:");
	 for(i=0;i<total_station;i++)
	 {
	 	printf("%d",*(clockwise+i)); 
	 }
	 printf("\n");
	 printf("counterclockwise:");
	 for(i=0;i<total_station;i++)
	 {
	 	printf("%d",*(counterclockwise+i));
	 }
	 printf("\n");
}
