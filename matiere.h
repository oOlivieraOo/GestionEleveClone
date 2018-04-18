#ifndef MATIERE
	#define MATIERE
/**

*  \File section.h
*  \Author ANASSALON Olivier
*  \Version0.1

*/
#include <iostream>
using namespace std;
/**
*   \Brief Déclaration de la classe Matiere dans le fichier matiere.h
*/
class Matiere
{
private:
/**
*   \Brief Déclaration de la variable nomMatiere de type string
*/
	string nomMatiere;

public:
/**
*   \Brief Déclaration de la méthode getNomMatiere renvoyant une string
*/
	string getNomMatiere();
/**
*   \Brief Déclaration de la méthode setNomMatiere permettant de définir le nom d'une matiere de type string
*/
	void setNomMatiere(string theNomMatiere);
/**
*   \Brief méthode d'affichage du fichier matiere.h
*/
	void display();
/**
*   \Brief méthode de saisie du fichier matiere.h
*/
	void input();
/**
*   \Brief Déclaration de la méthode afficherToutesLesMatieres permettant d'afficher toutes les matières
*/
void vectToutesLesMatieres();
/**
*	\Brief
*/
void ajoutMatiere();
};
#endif
