#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

#define SPEED 1 
typedef struct sequencelist{
	int* request;
	int num;
	int capacity;
}Sqlist;

typedef enum{FCFS,SSTF,SCAN}STRATEGY;

extern int* stationposition;
extern int* counterclockwise;
extern int* clockwise;
extern int* target;
extern int busposition;
extern int total_station;
extern STRATEGY strategy;
extern int distance;
extern int (*service)(int operation);
extern Sqlist sqlist;

void input(FILE* fp);
void init();
void running();
int analysis();
int service1(int operation);
int service2(int operation);
int service3(int operation);
void ending();
void stateprint();
int whichstation();
void clearrequest(int operation);
void sqlistadd(int i);

void destroy();