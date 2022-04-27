#include"main.h"
int whichstation()
{
	int i=0;
	while(i<total_station&&stationposition[i]<=busposition)
	{
		if(busposition==stationposition[i])
		{
			return (i+1);//return the serial number of the station
		}
		i++;
	}
	return -1;
}