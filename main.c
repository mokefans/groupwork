#include"main.h" 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int* stationposition;
int* counterclockwise;
int* clockwise;
int* target;
int busposition=0; 
int total_station = 5;
STRATEGY strategy = FCFS;
int distance = 2;
int (*service)(int operation);
Sqlist sqlist;

int main(int argc, char *argv[]) {
	FILE* fp;
	fp=fopen("dict.dic","r");
	if(fp!=NULL)
	{
		input(fp);
		fclose(fp);
	}
	init();
	running();
	destroy();
	return 0;
}