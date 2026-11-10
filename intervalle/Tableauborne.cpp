#include "Tableauborne.h"

Tableauborne::Tableauborne(int S, float min, float max):Tableau(S), min(min),max(max)
{
	if (max < min) {
		cout << "tu as permute la min avec le max !!! (tu doit respecter cet ordre (taille,min,max)) " << endl;
			exit(-1);
	}
	if (S < 2) {
		cout << "Pour definir un intervalle ,il doit y en avoir au moins 2 element (donner une taille >=2)" << endl;
		exit(-1);
	}
	    array[0] = min;
		array[S - 1] = max;
		
}
 
const float& Tableauborne::operator[](int i) const
{
	if (i >= 0 && i < taille)
		return array[i];
	else exit(-1);
	// TODO: insert return statement here
}
