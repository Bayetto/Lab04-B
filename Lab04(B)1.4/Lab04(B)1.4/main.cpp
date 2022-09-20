/*==================================
AUTEUR : Étienne Bayette-Riendeau
PROJET : Lab04(B)1.4
NOM DU FICHIER : main.cpp
DATE : 2022-09-20
DESCRIPTION : convertir un algorithme en c++
==================================*/

#include <iostream>
#include <conio.h>
using namespace std;

int main() {

	int n1(0);
	int n2;
	
	cout << "inscrivez un chiffre de 0 a 9" << endl;
	do
	{
		cout << "Chiffre ";
		n2 = _getche();
		cout << endl;
		n2 = n2 - 48;

		if (n2 < 10 && n2 > 0)
		{
			cout << n2 << " : ";

			for (int n3 = 0; n3 < n2; n3++)
			{

				if (n3 < n2 - 1)
				{
					cout << "* ";
				}

				else
				{
					cout << "* " << endl;
				}

			}

			n1 = 0;

		}
		else
		{
			n1 = n1 + 1;
		}

	} while (n1 != 2);

	system("PAUSE>0");

}