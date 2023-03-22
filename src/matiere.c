#include <matiere.h>

void setIntituler(matiere* mat, const unsigned char* label)
{
	int i;

	for( i = 0; i < LEN; i++)
		mat->intituler[i] = label[i];
	return;
}
float getCoefficien(matiere* mat)
{
	return (mat->maxOrale + mat->maxEcrit + mat->maxPratique + mat->maxSavoire)/20.0;
}
bool isPractical(matiere* mat)
{
	if(!mat->maxPratique)
		return TRUE;
	return FALSE;
}