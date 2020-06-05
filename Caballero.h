#ifndef CABALLERO_H
#define CABALLERO_H

#include "Guerrero.h"

class Caballero : public Guerrero
{
	public:
		//CONSTRUCTORS
		Caballero();
		
		//FUNCTIONS
		void atacar(Habitante*);
		string tipo();
		
		//DESTRUCTORS
		~Caballero();
	protected:
};

#endif
