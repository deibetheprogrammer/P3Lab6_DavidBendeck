#include "Arquero.h"

//CONSTRUCTORS
Arquero::Arquero()
{
	Guerrero();
	vAtaque = 20;
	horas = -4;
}

//FUNCTIONS
void Arquero::atacar(Habitante* pHabitante) {
	pHabitante->vida -= (vAtaque + 0.085*vida);
}

string Arquero::tipo() {
	return "Arquero";
}

Arquero::~Arquero()
{
}
