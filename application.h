#ifndef APPLICATION
	#define APPLICATION

/**

*  \File section.h
*  \Author ANASSALON Olivier
*  \Version0.1

*/
#include "matiere.h"
#include "section.h"
/**
*	\Brief Déclaration de la classe Application
*/
class Section;
class Application
{
	private:
/**
*	\Brief méthode afficherMenu de l'application
*/
        void afficherMenu();
/**
*	\Brief méthode la saisie de l'utilisateur
*/
        char saisieControleeduChoixUtilisateur();
/**
*	\Brief méthode réalisant l'action selon le choix de l'utilisateur
*/
		void realiseActionCorrespondantAuChoix(char & leChoix);
/**
*	\Brief méthode d'ajout d'une section
*/
		void ajoutSection();

		// MATIERE
		void afficherToutesLesMatieres();
		
		void afficherToutesLesSections();

		Section choisirSection();

		vector<Section> vectSection;

		vector<Matiere> vectMatiere;

	public:

		vector<Matiere*> ajoutMatiere();

		vector<Matiere*> vectToutesLesMatieres();

		void run(); //fait tourner l'application

};
#endif
