#include "etudiant.h"

string Etudiant::getNom()
{
	return nom;
}
void Etudiant::setNom(string theNom)
{
	nom = theNom;
}
string Etudiant::getPrenom()
{
	return prenom;
}
void Etudiant::setPrenom(string thePrenom)
{
	prenom = thePrenom;
}
string Etudiant::getDateNaissance()
{
	return dateNaissance;
}
void Etudiant::setDateNaissance(string theDateNaissance)
{
	dateNaissance = theDateNaissance;
}
void Etudiant::display()
{
    cout << nom << endl << prenom << endl << dateNaissance << endl ;
    cout << "-----------------------------------------------------------------" << endl;
}
void Etudiant::input()
{
    cout << "Entrez le nom de l'étudiant :  " << endl;
    getline(cin, nom);
    cout << "Entrez le prenom de l'étudiant : " << endl;
    getline(cin, prenom);
    cout << "Entrez la date de naissance de l'étudiant (JJ/MM/AAAA) : " << endl;
    getline(cin, dateNaissance);
}
