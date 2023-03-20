#include <tri.h>

void triBulle(int *tab, int n)
{


}
void triSelection(int *tab, int n)
{
	int i,j,min,temp;

	min = 0;
	i = 0;

	while( i < n - 1)
	{
		min = i;
		j = i + 1;

		while( j < n)
		{
			if(tab[j] < tab[min])
				min = j;
			j++;
		}
		temp = tab[min];
		tab[min] = tab[i];
		tab[i] = temp;

		i++;
	}

	return ;
}
void triInsersion(int *tab, int n)
{

}
