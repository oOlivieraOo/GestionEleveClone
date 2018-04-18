#ifndef SECTION
	#define SECTION
/**
*  \File section.h
*  \Author ANASSALON Olivier
*  \Version 0.1
*/
#include <iostream>
#include <vector>
#include "matiere.h"
#include "etudiant.h"
#include "application.h"

using namespace std;
/**
*  \Brief Déclaration de la classe Application dans le fichier section.h
*/
class Application;
class Section
{
private:
/**
*   \Brief Déclaration du vecteur Etudiant
*/
	vector<Etudiant> vectEtudiant;
/**
*   \Brief Déclaration du vecteur Evaluation
*/
//vector<Evaluation> vectEval;
/**
*   \Brief Déclaration du vecteur Matiere
*/
	vector<Matiere> vectMatieres;
/**
*   \Brief Déclaration du vecteur de coefficients
*/
	//vector<int> vectLesCoeff;
/**
*   \Brief Déclaration d'une variable nomSection de type string
*/
	string nomSection;
/**
*	\Brief Déclaration du pointeur de Application
*/
	Application * lApplication;

public:
/**
*	\Brief déclaration de la méthode getSection renvoyant une chaîne de caractères
*/
	string getNomSection();
/**
*	\Brief déclaration de la méthode setNomSection permettant de définir les variables de type string
*/
	void setNomSection(string theNomSection);
/**
*  \Brief méthode d'ajout d'un élève
*/
	void ajoutEtudiant();
/**
*  \Brief méthode permettant d'afficher tous les élèves
*/
	void afficherTousLesEtudiants();
/**
*  \Brief méthode la saisie de l'utilisateur
*/
	char saisieControleeduChoixUtilisateur();
/**
*    \Brief méthode d'ajout d'une matière
*/
	void ajoutMatiere();
/**
*	\Brief utilisation du pointeur
*/
	Section(Application * lApplication);
/**
*   \Brief méthode permettant d'afficher toutes les matières
*/
    void afficherToutesLesMatieres();
/**
*   \Brief méthode faisant le choix d'une matière
*/
	void realiseActionCorrespondantAuChoix(char leChoix);
/**
*	\Brief méthode de saisie par l'utilisateur du fichier section.h
*/
	void input();
/**
*	\Brief méthode d'affichage du fichier section.h
*/
	void display();
/**
* \Brief méthode permettant d'afficher le menu de la section de l'application
*/
	void afficherMenuSection();
/**
*	\Brief méthode utlisée pour éxecuter l'application
*/
	void run();
};
#endif

