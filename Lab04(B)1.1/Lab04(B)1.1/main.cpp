/*==================================
AUTEUR : Étienne Bayette-Riendeau
PROJET : Lab04(B)1.1
NOM DU FICHIER : main.cpp
DATE : 2022-09-16
DESCRIPTION : convertir un algorithme en c++
==================================*/


#include <iostream>
using namespace std;

int main() {

	int n1;
	int n2(0);

	cout << "Inscrivez un chiffre de 0 a 9" << endl;

	while (n2 != 2)
	{

		cout << "Chiffre ? ";
		cin >> n1;

			if (n1 == 0)
			{
				n2++;
			}

			else if (n1 < 0)
			{
				continue;
			}

			else if (n1 > 9)
			{
				continue;
			}

			else if (n1 > 0 && n1 < 10)
			{

				cout << n1 << " : ";

				for (int n3 = 0; n3 < n1; n3++)
				{

					if (n3 < n1 - 1)
					{
						cout << "* ";
					}

					else
					{
						cout << "* " << endl;
					}

				}

			}

	}

	system("PAUSE>0");

}
