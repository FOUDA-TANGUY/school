#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <tri.h>
#define N 10
int main(void)
{
	srand((unsigned int)time(NULL));


	int tab[N];
	int i;
	for( i = 0; i < N; i++)
		tab[i] = (65 + (int)rand()%26);

	afficheTableau(tab,N);
	triSelection(tab,N);
	afficheTableau(tab,N);
	return 0;
}