/*==================================
AUTEUR : Étienne Bayette-Riendeau
PROJET : Lab04(B)1.5
NOM DU FICHIER : main.cpp
DATE : 2022-09-20
DESCRIPTION : convertir un algorithme en c++
==================================*/

#include <iostream>
#include <conio.h>
using namespace std;

#define ENTER 13

int main() {

	int n1(0);
	int un(0);
	int deux(0);
	int trois(0);
	int quatre(0);
	int cinq(0);
	int six(0);
	int sept(0);
	int huit(0);
	int neuf(0);

	do
	{
		n1 = _getche();
		if (n1 == '1')
		{
			un = un + 1;
		}
		else if (n1 == '2')
		{
			deux = deux + 1;
		}
		else if (n1 == '3')
		{
			trois = trois + 1;
		}
		else if (n1 == '4')
		{
			quatre = quatre + 1;
		}
		else if (n1 == '5')
		{
			cinq = cinq + 1;
		}
		else if (n1 == '6')
		{
			six = six + 1;
		}
		else if (n1 == '7')
		{
			sept = sept + 1;
		}
		else if (n1 == '8')
		{
			huit = huit + 1;
		}
		else if (n1 == '9')
		{
			neuf = neuf + 1;
		}
	} while (n1 != 13);
	system("CLS");

	cout << "1 : ";
	for (int un1 = 0; un1 < un + 1; un1++)
	{
		if (un1 < un)
		{
			cout << "* ";
		}

		else
		{
			cout << endl;
		}
	}

	cout << "2 : ";
	for (int deux1 = 0; deux1 < deux + 1; deux1++)
	{
		if (deux1 < deux)
		{
			cout << "* ";
		}

		else
		{
			cout << endl;
		}
	}

	cout << "3 : ";
	for (int trois1 = 0; trois1 < trois + 1; trois1++)
	{
		if (trois1 < trois)
		{
			cout << "* ";
		}

		else
		{
			cout << endl;
		}
	}

	cout << "4 : ";
	for (int quatre1 = 0; quatre1 < quatre + 1; quatre1++)
	{
		if (quatre1 < quatre)
		{
			cout << "* ";
		}

		else
		{
			cout << endl;
		}
	}

	cout << "5 : ";
	for (int cinq1 = 0; cinq1 < cinq + 1; cinq1++)
	{
		if (cinq1 < cinq)
		{
			cout << "* ";
		}

		else
		{
			cout << endl;
		}
	}

	cout << "6 : ";
	for (int six1 = 0; six1 < six + 1; six1++)
	{
		if (six1 < six)
		{
			cout << "* ";
		}

		else
		{
			cout << endl;
		}
	}

	cout << "7 : ";
	for (int sept1 = 0; sept1 < sept + 1; sept1++)
	{
		if (sept1 < sept)
		{
			cout << "* ";
		}

		else
		{
			cout << endl;
		}
	}

	cout << "8 : ";
	for (int huit1 = 0; huit1 < huit + 1; huit1++)
	{
		if (huit1 < huit)
		{
			cout << "* ";
		}

		else
		{
			cout << endl;
		}
	}

	cout << "9 : ";
	for (int neuf1 = 0; neuf1 < neuf + 1; neuf1++)
	{
		if (neuf1 < neuf)
		{
			cout << "* ";
		}

		else
		{
			cout << endl;
		}
	}
}
