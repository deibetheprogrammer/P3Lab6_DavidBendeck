#include "Civilizacion.h"
#include "Habitante.h"
#include "Aldeano.h"
#include "Guerrero.h"
#include "Jinete.h"
#include "Arquero.h"
#include "Caballero.h"

using std::vector;
using std::string;

//COSNTRUCTORS
Civilizacion::Civilizacion()
{
}

Civilizacion::Civilizacion(string nombre) {
	this->nombre = nombre;
	oro = 50;
	madera = 50;
	alimento = 50;
	for (int i = 0; i < 5; i++)
		habitantes.push_back(new Aldeano());
	habitantes.push_back(new Jinete());
	numCasas = 2;
	numHabitantes = 10;
}

Civilizacion::~Civilizacion()
{
}
