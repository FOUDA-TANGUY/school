#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <tri.h>
#define N 10
int main(void)
{
	srand((unsigned int)time(NULL));


	int tab[N] = {0,1,7,6,5,4,3,2,1,0};
	int i;
	for( i = 0; i < N; i++)
		printf("%c\n", 65 + (int)rand()%26);
	
	return 0;
}