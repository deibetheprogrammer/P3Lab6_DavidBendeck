#ifndef GUERRERO_H
#define GUERRERO_H

#include "Habitante.h"

class Guerrero : public Habitante
{
	public:
		//CONSTRUCTORS
		Guerrero();
		
		//ATTRIBUTES
		int vAtaque;
		
		//FUNCTIONS
		void virtual atacar(Habitante*);
		
		string tipo();
		
		//DESTRUCTORS
		~Guerrero();
	protected:
};

#endif
