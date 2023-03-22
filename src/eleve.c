#include <eleve.h>

void setEleveNom(eleve* el, const char* nom)
{
	int i;
	for( i = 0; i < LEN; i++)
		el->nom[i] = nom[i];
	return ;
}
void setElevePrenom(eleve* el, const char* prenom)
{
	int i;
	for( i = 0; i < LEN; i++)
		el->prenom[i] = prenom[i];
}
void copyEleve(eleve* el,eleve* cpEleve)
{
	*el = *cpEleve;
}