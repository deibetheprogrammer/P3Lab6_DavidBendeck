#include "Caballero.h"

//CONSTRUCTORS
Caballero::Caballero()
{
	Guerrero();
	vAtaque = 10;
	horas = -4;
}

//FUNCTIONS
void Caballero::atacar(Habitante* pHabitante) {
	pHabitante->vida -= (vAtaque + 0.095*vida);
}

string Caballero::tipo() {
	return "Caballero";
}

Caballero::~Caballero()
{
	
}
