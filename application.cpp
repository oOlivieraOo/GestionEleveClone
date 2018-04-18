#include "application.h"

void Application::run()				//Execute l'application
{
	char choix;
	do
	{
		afficherMenu();
		choix = saisieControleeduChoixUtilisateur();
		realiseActionCorrespondantAuChoix(choix);
	}

    while(!(choix=='q'));

}
/* ##########################_____SECTION_____##########################*/

Section Application::choisirSection()
{
	//afficher toutes les sections avec leur n°
	for (unsigned int noTour = 0; noTour < vectSection.size(); noTour++ )
	{
		cout << noTour+1 << ")";
		vectSection[noTour].display();


	}

	//###########Afficher tapez le n° de la section###########
	int numeroSection;
	cout << "Entrez le n° de votre section : " << endl;
	cin >> numeroSection;
    return (vectSection[numeroSection-1]);
}
void Application::ajoutSection()
{

	Section nouvelleSection(this);
	nouvelleSection.input();
	vectSection.push_back(nouvelleSection);

}
void Application::afficherToutesLesSections()
{

	for (unsigned int noTour = 0; noTour < vectSection.size(); noTour++ )
	{
		cout << noTour+1 << ")";
		vectSection[noTour].display();

	}

}
/* ##########################_____FIN____SECTION_____##########################*/

/* ##########################_____MATIERE_____##########################*/
/*vector<Matiere*> Application::ajoutMatiere()
{

	Section nouvelleMatiere(this);
	nouvelleMatiere.input();
	vectMatiere.push_back(nouvelleMatiere);

}*/
void Application::afficherToutesLesMatieres()
{
	for (unsigned int noMatiere = 0; noMatiere < vectMatiere.size(); noMatiere++)
	{
		cout << noMatiere+1 << ")";
		vectMatiere[noMatiere].display();
	}
}
vector<Matiere*> Application::vectToutesLesMatieres()
{
	vector<Matiere*> resultat; 
	for (unsigned int noMatiere = 0; noMatiere < vectMatiere.size(); noMatiere++)
	{
		resultat.push_back(& vectMatiere[noMatiere]);
	}
	return resultat;
}
/* ##########################_____FIN____MATIERE_____##########################*/

/* ##########################_____APPLICATION_____##########################*/

void Application::afficherMenu()
{
	cout << "——————————————————————————————————————————————————" << endl;
	cout << "|Bienvenue sur le menu de l'application d'élèves!|" << endl;
	cout << "——————————————————————————————————————————————————" << endl << endl;

	cout << "Tapez '1' pour ajouter une section." << endl;
	cout << "Tapez '2' pour afficher toutes les sections." << endl;
	cout << "Tapez '3' pour choisir la section souhaitée." << endl << endl;

	cout << "Tapez '4' pour ajouter une matiere." << endl;
	cout << "Tapez '5' pour afficher toutes les matières." << endl << endl;

	cout << "Appuyez sur q pour quitter." << endl << endl;

}
char Application::saisieControleeduChoixUtilisateur()
{
	char leChoix;
	bool choixCorrect;
	do
	{
		cin >> leChoix;
		cin.ignore(1);
		choixCorrect=(leChoix=='1'||leChoix=='2'||leChoix=='3'|| leChoix=='4' || leChoix=='5' || leChoix=='q');

		if (!choixCorrect)
		{
				cout << "❌ Votre choix est invalide. Rééssayez. ❌" << endl;
				return choixCorrect;
		}

	}
	while (!choixCorrect);

	return leChoix;

}
void Application::realiseActionCorrespondantAuChoix(char & leChoix)
{
	char valider;
	string chaineNom;
	Matiere laMatiere;

	switch(leChoix)
	{
		case '1':
		cout << endl;
		ajoutSection();
		cout << endl;
		break;

		case '2':
		cout << "Voici les sections que vous avez entrer : " << endl;
		afficherToutesLesSections();
		cout << endl;
		break;

		case '3':
		choisirSection().run();
		break;

		case '4':
		laMatiere.input();
		vectMatiere.push_back(laMatiere);
		break;

		case '5':
		cout << "Voici la liste de vos matières : " << endl;
		afficherToutesLesMatieres();
		cout << endl;
		break;


		case 'q':
			cout << "Êtes-vous sûr de vouloir quitter? (o/n)" << endl;
			cin >> valider;

			if (valider=='o')
			{
				cout << endl << "Au revoir!" << endl << endl;
			}
			else
			{
				leChoix='k';
			}

		break;
	}

}
/* ##########################_____FIN____APPLICATION_____##########################*/
