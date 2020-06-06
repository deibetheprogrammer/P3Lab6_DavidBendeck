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
		void atacar(Habitante*);
		
		string tipo();
		
		//DESTRUCTORS
		~Guerrero();
	protected:
};

#endif
