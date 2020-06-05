#include "Jinete.h"

//CONSTRUCTORS
Jinete::Jinete()
{
	Guerrero();
	vAtaque = 30;
	horas = -6;
}

//FUNCTIONS
void Jinete::atacar(Habitante* pHabitante) {
	pHabitante->vida -= (vAtaque + 0.065*vida);
}

string Jinete::tipo() {
	return "Jinete";
}

Jinete::~Jinete()
{
	
}
