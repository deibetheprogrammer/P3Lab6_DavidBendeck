#include <iostream>
#include <vector>
#include "Civilizacion.h"
#include "Habitante.h"
#include "Aldeano.h"
#include "Guerrero.h"
#include "Jinete.h"
#include "Arquero.h"
#include "Caballero.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using std::vector;
using std::cout;
using std::cin;
using std::endl;
using std::string;

//Funcion que hace que el juego corra
void juego(vector<Civilizacion*>&);

int main(int argc, char** argv) {
	
	vector<Civilizacion*> civilizaciones;
	
	bool loop = true;
	while(loop) {
	
		cout<<"********MENU********" << endl
			<<"1) Crear Civilizacion" << endl
			<<"2) Jugar" << endl
			<<"Su eleccion: ";
	
		int opcion;
		cin >> opcion;
	
		while (!cin || (opcion < 1 || opcion > 2)) {
			cin.clear ();    // Restore input stream to working state
    		cin.ignore ( 100 , '\n' );    // Get rid of any garbage that user might have entered
   		 	cout << "Por favor, ingrese una opcion valida: ";
    		cin >> opcion; 
		}
		
		switch(opcion) {
			case 1: {
				
				cout << endl
					 << "Ingrese el nombre de su civilizacion por favor: ";
				
				string nombre;
				cin >> nombre;
				
				civilizaciones.push_back(new Civilizacion(nombre));
				
				cout << "Civilizacion: " << nombre << " ha sido creada!" << endl;
				
				break;
			}
			case 2: {
				
				cout << endl
					 << "Iniciando Era of Kingdoms Ultra Master XD 4K 100% real no fake";
				
				juego(civilizaciones);
				
				cout << "Saliendo ...";
				loop = false;
				break;
			}

		}
	}
	return 0;
	
}

//Funcion que hace que el juego corra
void juego(vector<Civilizacion*>& civilizaciones) {
	
	cout << endl;
	
	for(int i = 0; i < civilizaciones.size(); i++) {
		cout << i << " : "
			 << civilizaciones[i]->nombre << endl;
	}
	
	cout << endl
		 << "Por favor, elija una civilizacion: ";
	
	int indice;
	cin >> indice;
	
	while (!cin || (indice < 0 || indice > civilizaciones.size()-1)) {
		cin.clear ();    // Restore input stream to working state
    	cin.ignore ( 100 , '\n' );    // Get rid of any garbage that user might have entered
   	 	cout << "Por favor, ingrese una opcion valida: ";
   		cin >> indice; 
	}
	
	Civilizacion* civActual = civilizaciones[indice];
	
	bool loop = true;
	while(loop) {
		
		cout<<"********MENU********" << endl
			<<"1) Crear aldeano" << endl
			<<"2) Crear jinete" << endl
			<<"3) Crear arquero" << endl
			<<"4) Crear caballero" << endl
			<<"5) Construir casa" << endl
			<<"6) Construir cuartel" << endl
			<<"7) Construir establo" << endl
			<<"8) Ir a la guerra" << endl
			<<"9) Salir"
			<<"Su eleccion: ";
	
		int opcion;
		cin >> opcion;
	
		while (!cin || (opcion < 1 || opcion > 9)) {
			cin.clear ();    // Restore input stream to working state
    		cin.ignore ( 100 , '\n' );    // Get rid of any garbage that user might have entered
   		 	cout << "Por favor, ingrese una opcion valida: ";
    		cin >> opcion; 
		}
		
		switch(opcion) {
			
			case 1: {
				
				if(civActual->numHabitantes != civActual->habitantes.size()) {
					
					if(civActual->alimento >= 25) {
						
						civActual->alimento -= 25;
						
						civActual->habitantes.push_back(new Aldeano());
						
						cout << "Su aldeano estara listo en 1 hora";
						
					} else {
						cout << endl
						 << "Usted no tiene suficiente alimento !"
						 << endl;
					}
					
				} else {
					cout << endl
						 << "Usted ya alcanzo su maxima capacidad de habitantes !"
						 << endl;
				}
				
				break;
			}
			case 2: {
				
				break;
			}
			case 3: {
				
				break;
			}
			case 4: {
				
				break;
			}
			case 5: {
				
				break;
			}
			case 6: {
				
				break;
			}
			case 7: {
				
				break;
			}
			case 8: {
				
				break;
			}
			case 9: {
				
				loop = false;
				break;
			}
		}
		
	}
	
}



