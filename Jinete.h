#ifndef JINETE_H
#define JINETE_H

#include "Guerrero.h"

class Jinete : public Guerrero
{
	public:
		//CONSTRUCTORS
		Jinete();
		
		//FUNCTIONS
		void atacar(Habitante*);
		string tipo();
		
		//DESTRUCTORS
		~Jinete();
	protected:
};

#endif
