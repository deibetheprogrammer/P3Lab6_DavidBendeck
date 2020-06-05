#ifndef ALDEANO_H
#define ALDEANO_H

#include "Habitante.h"

class Aldeano : public Habitante
{
	public:
		//CONSTRUCTORS
		Aldeano();
		
		//FUNCTIONS
		string tipo();
	
		//DESTRUCTORS
		~Aldeano();
	protected:
};

#endif
