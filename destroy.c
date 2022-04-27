#include"main.h"
void destroy()
{
	free(stationposition);
	free(counterclockwise);
	free(clockwise);
	free(target);
}