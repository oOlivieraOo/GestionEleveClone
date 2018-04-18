#include "section.h"

void Section::run()				//Execute l'application
{
	char choix;
	do
	{
		afficherMenuSection();
		choix = saisieControleeduChoixUtilisateur();
		realiseActionCorrespondantAuChoix(choix);
	}

    while(!(choix=='q'));

}
/* ##########################_____SECTION_____##########################*/
Section::Section(Application * monApp)
{
	monApp = lApplication;
	
}
string Section::getNomSection()
{
	return nomSection;
}
void Section::setNomSection(string theNomSection)
{
	nomSection = theNomSection;
}
void Section::display()
{
	cout << nomSection << endl;
}
void Section::input()
{
	cout << "Saisir le nom de votre section : " << endl << endl;
	getline(cin, nomSection);
	cout << "---------------------------------------------" << endl;
	cout << "La section que vous venez d'ajouter s'appelle : " << nomSection << endl << endl;	//Affichage final du message
}
void Section::afficherMenuSection()
{
	cout << "——————————————————————" << endl;
	cout << "Menu Section d'étudiants!"<< endl;
	cout << "——————————————————————" << endl;

	cout << "1- Pour ajouter une matière." << endl;
	cout << "2- Pour afficher toutes les matières." << endl << endl;

	cout << "4- Pour ajouter un étudiant." << endl;
	cout << "5- Pour afficher tous les étudiants." << endl << endl;

	cout << "Appuyez sur q pour quitter." << endl << endl;
}
/* ##########################_____FIN____SECTION_____##########################*/

/* ##########################_____Etudiant_____##########################*/
void Section::ajoutEtudiant()
{
    Etudiant nouvelEtudiant;
    nouvelEtudiant.input();
    vectEtudiant.push_back(nouvelEtudiant);
}
void Section::afficherTousLesEtudiants()
{
	for(unsigned int noEtudiant=0; noEtudiant < vectEtudiant.size(); noEtudiant++)
	{
		cout << noEtudiant+1 << ")";
		vectEtudiant[noEtudiant].display();
	}
}
void Section::choisirEtudiant()
{
	for(unsigned int noEtudiant=0; noEtudiant < vectEtudiant.size(); noEtudiant++)
	{
		cout << noEtudiant+1 << ")";
		vectEtudiant[noEtudiant].display();
	}
}
/* ##########################_____FIN____Etudiant_____##########################*/

/* ##########################_____Matiere_____##########################*/
void Section::afficherToutesLesMatieres()
{
	for(unsigned int noMatiere=0; noMatiere < vectMatieres.size(); noMatiere++)
	{
		cout << noMatiere+1 << ")";
		vectMatieres[noMatiere].display();
	}
}
void Section::ajoutMatiere()
{
    Matiere nouvelleMatiere;
    nouvelleMatiere.input();
    vectMatieres.push_back(nouvelleMatiere);
}
/*Matiere Section::choisirMatiere()
{
	//afficher toutes les matières avec leur n°
	for (unsigned int noTour = 0; noTour < vectMatieres.size(); noTour++ )
	{
		cout << noTour+1 << ")";
		vectMatieres[noTour].display();


	}

	//###########Afficher tapez le n° de la section###########
	int numeroMat;
	cout << "Entrez le n° de votre matière : " << endl;
	cin >> numeroMat;
    return (vectMatieres[numeroMat-1]);
}*/
/* ##########################_____FIN____Matiere_____##########################*/

char Section::saisieControleeduChoixUtilisateur()
{
	char leChoix;
	bool choixCorrect;
	do
	{
		cin >> leChoix;
		cin.ignore(1);
		choixCorrect=(leChoix=='1'||leChoix=='2'||leChoix=='3'|| leChoix=='4' || leChoix=='5' || leChoix=='6' || leChoix=='q');

		if (!choixCorrect)
		{
				cout << "❌ Votre choix n'est pas valide. Rééssayez. ❌" << endl;
				return choixCorrect;
		}

	}
	while (!choixCorrect);

	return leChoix;

}
void Section::realiseActionCorrespondantAuChoix(char leChoix)
{

	string chaineNom;
	Etudiant unEtudiant;
	Matiere laMatiere;

	switch(leChoix)
	{
		case '1':
		cout << endl;
        laMatiere.input();
        vectMatieres.push_back(laMatiere);
		cout << endl;
		break;

		case '2':
		cout << endl;
       	afficherToutesLesMatieres();
		cout << endl;
		break;

		case '3':
		cout << endl;
        choisirMatiere();
		cout << endl;
		break;

		case '4':
		cout << endl;
		ajoutEtudiant();
		cout << endl;
		break;

		case '5':
		cout << endl;
		afficherTousLesEtudiants();
		cout << endl;
		break;

		case 'q':
		{
			cout << "Retour au menu application ! " << endl << endl;
		}
		break;
	}

}
