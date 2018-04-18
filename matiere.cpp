#include "matiere.h"

string Matiere::getNomMatiere()
{
	return nomMatiere;
}
void Matiere::setNomMatiere(string theNomMatiere)
{
	nomMatiere = theNomMatiere;
}
void Matiere::input()
{
	cout << "Entrez le nom de la matière : " << endl;
	getline(cin, nomMatiere);
	cout << "---------------------------------------------" << endl;
	cout << "La matière que vous venez d'ajouter se nomme : " << nomMatiere << endl << endl;
}
void Matiere::display()
{
	cout << nomMatiere << endl;
}
