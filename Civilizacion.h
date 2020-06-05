#ifndef CIVILIZACION_H
#define CIVILIZACION_H
#include <vector>
#include <string>
#include "Habitante.h"

using std::vector;
using std::string;

class Civilizacion
{
	public:
		//CONSTRUCTORS
		Civilizacion();
		
		Civilizacion(string);
		
		//ATTRIBUTES
		string nombre;
		int oro;
		int madera;
		int alimento;
		vector<Habitante*> habitantes;
		int numCasas;
		int numCarteles;
		int numEstablos;
		int numHabitantes;
		
		~Civilizacion();
	protected:
		
};

#endif
