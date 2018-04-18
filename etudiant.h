#ifndef ETUDIANT
	#define ETUDIANT
/**

*  \File section.h
*  \Author ANASSALON Olivier
*  \Version0.1

*/
#include <iostream>
#include <vector>
using namespace std;
/**
*  \Brief Création de la classe Etudiant
**/
class Etudiant
{
private:
/**
*   \Brief Déclaration d'une variable nom de type string
*/
	string nom;
/**
*   \Brief Déclaration d'une variable prenom de type string
*/
	string prenom;
/**
*   \Brief Déclaration d'une variable dateNaissance de type string
*/
	string dateNaissance;
/**
*   \Brief Déclaration du vecteur Bulletin
*/
	//vector<Bulletin> vectBulletin;
/**
*   \Brief Déclaration du vecteur d'appréciation
*/
	//vector<string> vectAppreciation;

public:
/**
*   \Brief Déclaration de la méthode getNom renvoyant une string
*/
	string getNom();
/**
*   \Brief Déclaration de la méthode setNom permettant de définir des noms de type string
*/
	void setNom (string theNom);
/**
*   \Brief Déclaration de la méthode getPrenom renvoyant une string
*/
	string getPrenom();
/**
*   \Brief Déclaration de la méthode setPrenom permettant de définir des prénoms de type string
*/
	void setPrenom(string thePrenom);
/**
*   \Brief Déclaration de la méthode getDateNaissance renvoyant une string
*/
	string getDateNaissance();
/****   \Brief Déclaration de la méthode setDateNaissance permettant de définir une date de naissance des élèves de type string
*/
	void setDateNaissance (string theDateNaissance);
/**
*   \Brief méthode d'affichage du fichier etudiant.h
*/
	void display();
/**
*   \Brief méthode de saisie du fichier etudiant.h
*/
	void input();

};
#endif
