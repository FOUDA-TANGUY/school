#ifndef __MATIERE__H__
	#define __MATIERE__H__

	#ifndef LEN
		#define LEN 20
		typedef enum bool{ FALSE, TRUE} bool;
	#endif

	typedef struct matiere
	{
		unsigned int idMatiere;
		unsigned char intituler[LEN];

		float maxOrale;
		float maxEcrit;
		float maxPratique;
		float maxSavoire;

	}matiere;

	void setIntituler(matiere*, const unsigned char*);
	float getCoefficien(matiere*);
	bool isPractical(matiere*);



#endif