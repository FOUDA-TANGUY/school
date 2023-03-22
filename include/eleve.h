#ifndef __ELEVE__H__
	#define __ELEVE__H__

	#ifndef LEN 
		#define LEN 15
	#endif

	typedef enum qubit
	{
		NONE,MALE,FEMAL
	}qubit;

	typedef struct eleve
	{
		unsigned int idEleve;
		unsigned int idClasse;
		unsigned char nom[LEN];
		unsigned char prenom[LEN];
		qubit sexe;
		int age;
	}eleve;

	void setEleveNom(eleve*, const char*);
	void setElevePrenom(eleve*, const char*);
	void copyEleve(eleve*,eleve*);
	
#endif