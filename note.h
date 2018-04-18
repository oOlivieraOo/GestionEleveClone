#ifndef NOTE
	#define NOTE
/**

*  \File section.h
*  \Author O.Anassalon
*  \Version0.1

*/
#include <iostream>
using namespace std;

class Note
{
private:

	string nom;

public:
	string getNote();

	void setNote(string nom);
	
	void display();
	void input();
};
#endif