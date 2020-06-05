#include "Aldeano.h"

//CONSTRUCTORS
Aldeano::Aldeano()
{
	Habitante();
	horas = -1;
}

//FUNCTIONS
string Aldeano::tipo() {
	return "Aldeano";
}

Aldeano::~Aldeano()
{
}
