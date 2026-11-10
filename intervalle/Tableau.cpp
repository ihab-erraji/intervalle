#include "Tableau.h"

Tableau::Tableau(int taille):taille(taille)
{
	if (taille > 0) {
		array = new float[taille];
	}
	else {
		cout << "la taille doit etre > 0 !!!!" << endl;
		exit(-1);
	}
}

Tableau::Tableau(const Tableau& A) :taille(A.taille)
{
	array = new float[taille];
	for (int y = 0; y < taille; y++) {
		array[y] = A.array[y];
	}
}

Tableau& Tableau::operator=(const Tableau& A)
{
	if (this != &A) {
		delete[] array;
		taille = A.taille;
		array = new float[taille];
		for (int y = 0; y < taille; y++) {
			array[y] = A.array[y];
		}
	}

	return *this;
}

float& Tableau::operator[](int i)
{
	if (i >= 0 && i < taille)
		return array[i];
	else exit(-1);
}