#pragma once
#include <iostream>
using namespace std;

class Tableau

{
protected:

	int taille;
	float* array;

public:
	Tableau(int);
	Tableau(const Tableau&);
	Tableau& operator=(const Tableau&);
	float& operator[](int);
	~Tableau();
};

