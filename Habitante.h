#ifndef HABITANTE_H
#define HABITANTE_H
#include <string>

using std::string;

class Habitante
{
	public:
		//CONSTRUCTORS
		Habitante();
		
		//ATTRIBUTES
		int vida;
		int horas;
		
		//FUNCTIONS
		virtual string tipo();
		virtual void atacar(Habitante* pHabitante);
		
		~Habitante();
	protected:
};

#endif
