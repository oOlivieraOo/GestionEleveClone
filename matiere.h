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
*   \Brief D�claration de la classe Matiere dans le fichier matiere.h
*/
class Matiere
{
private:
/**
*   \Brief D�claration de la variable nomMatiere de type string
*/
	string nomMatiere;

public:
/**
*   \Brief D�claration de la m�thode getNomMatiere renvoyant une string
*/
	string getNomMatiere();
/**
*   \Brief D�claration de la m�thode setNomMatiere permettant de d�finir le nom d'une matiere de type string
*/
	void setNomMatiere(string theNomMatiere);
/**
*   \Brief m�thode d'affichage du fichier matiere.h
*/
	void display();
/**
*   \Brief m�thode de saisie du fichier matiere.h
*/
	void input();
/**
*   \Brief D�claration de la m�thode afficherToutesLesMatieres permettant d'afficher toutes les mati�res
*/
void vectToutesLesMatieres();
/**
*	\Brief
*/
void ajoutMatiere();
};
#endif
