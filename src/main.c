#include <stdio.h>
#include <eleve.h>
int main(void)
{
	eleve el;
	unsigned char nom[LEN];


	
	
	scanf("%s",nom);
	setEleveNom(&el,nom);
	scanf("%s",nom);
	setElevePrenom(&el,nom);
	printf("%s\n", el.nom);
	printf("%s\n", el.prenom);
	return 0;
}