#ifndef ARQUERO_H
#define ARQUERO_H

#include "Guerrero.h"

class Arquero : public Guerrero
{
	public:
		//CONSTRUCTORS
		Arquero();
		
		//FUNCTIONS
		void atacar(Habitante*);
		string tipo();
		
		//DESTRUCTORS
		~Arquero();
	protected:
};

#endif
