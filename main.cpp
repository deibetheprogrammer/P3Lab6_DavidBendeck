#include <iostream>
#include <vector>
#include "Civilizacion.h"
#include "Habitante.h"
#include "Aldeano.h"
#include "Guerrero.h"
#include "Jinete.h"
#include "Arquero.h"
#include "Caballero.h"
#include <stdlib.h>     /* srand, rand */
#include <time.h> 

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using std::vector;
using std::cout;
using std::cin;
using std::endl;
using std::string;

//Funcion que hace que el juego corra
void juego(vector<Civilizacion*>&);

//Funcion resumen guerra
void resumenCiv(Civilizacion*);

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
	
	srand (time(0));
	
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
			<<"9) Siguiente hora" << endl
			<<"10) Salir" << endl
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
						
						cout << endl
							 << "Su aldeano estara listo en 1 hora"
							 << endl;
						
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
				
				if(civActual->numHabitantes != civActual->habitantes.size()) {
					
					if(civActual->alimento >= 75 && civActual->oro >= 20 && civActual->madera >= 5 && civActual->numEstablos > 0) {
						
						civActual->alimento -= 75;
						civActual->oro -= 20;
						civActual->madera -= 5;
						
						civActual->habitantes.push_back(new Jinete());
						
						cout << endl
							 << "Su jinete estara listo en 6 horas"
							 << endl;
						
					} else {
						cout << endl
						 << "Usted no tiene suficientes recursos o no posee un establo!"
						 << endl;
					}
					
				} else {
					cout << endl
						 << "Usted ya alcanzo su maxima capacidad de habitantes !"
						 << endl;
				}
				
				break;
			}
			case 3: {
				
				if(civActual->numHabitantes != civActual->habitantes.size()) {
					
					if(civActual->alimento >= 50 && civActual->oro >= 10 && civActual->madera >= 10 && civActual->numCuarteles > 0) {
						
						civActual->alimento -= 50;
						civActual->oro -= 10;
						civActual->madera -= 10;
						
						civActual->habitantes.push_back(new Arquero());
						
						cout << endl
							 << "Su arquero estara listo en 4 horas"
							 << endl;
						
					} else {
						cout << endl
						 << "Usted no tiene suficientes recursos o no posee un cuartel!"
						 << endl;
					}
					
				} else {
					cout << endl
						 << "Usted ya alcanzo su maxima capacidad de habitantes !"
						 << endl;
				}
				
				break;
			}
			case 4: {
				
				if(civActual->numHabitantes != civActual->habitantes.size()) {
					
					if(civActual->alimento >= 50 && civActual->oro >= 15 && civActual->madera >= 5 && civActual->numCuarteles > 0) {
						
						civActual->alimento -= 50;
						civActual->oro -= 15;
						civActual->madera -= 15;
						
						civActual->habitantes.push_back(new Caballero());
						
						cout << endl
							 << "Su arquero estara listo en 4 horas"
							 << endl;
						
					} else {
						cout << endl
						 << "Usted no tiene suficientes recursos o no posee un cuartel!"
						 << endl;
					}
					
				} else {
					cout << endl
						 << "Usted ya alcanzo su maxima capacidad de habitantes !"
						 << endl;
				}
				
				break;
			}
			case 5: {
				
				if (civActual->madera >= 50) {
					
					civActual->madera -= 50;
					
					civActual->numCasas++;
					
					civActual->numHabitantes += 5;
					
					cout << endl
						 << "Se ha creado una nueva casa"
						 << endl;
					
				} else {
					
					cout << endl
						 << "Usted no posee suficientes recursos!"
						 << endl;
				}
				
				break;
			}
			case 6: {
				
				if (civActual->oro >= 50 && civActual->madera >= 150) {
					
					civActual->madera -= 150;
					
					civActual->oro -= 50;
					
					civActual->numEstablos++;
					
					cout << endl
						 << "Se ha creado un nuevo establo"
						 << endl;
					
				} else {
					
					cout << endl
						 << "Usted no posee suficientes recursos!"
						 << endl;
				}
				
				break;
			}
			case 7: {
				
				if (civActual->oro >= 50 && civActual->madera >= 200) {
					
					civActual->madera -= 200;
					
					civActual->oro -= 50;
					
					civActual->numCuarteles++;
					
					cout << endl
						 << "Se ha creado un nuevo cuartel"
						 << endl;
					
				} else {
					
					cout << endl
						 << "Usted no posee suficientes recursos!"
						 << endl;
				}
				
				break;
			}
			case 8: {
				
				cout << endl
					 << "***GUERRA***" << "\n\n";
				
				for(int i = 0; i < civilizaciones.size(); i++) {
					if(civilizaciones[i] != civActual) {
						cout << i << " : "
							 << civilizaciones[i]->nombre << endl;
					}
				}
		
				cout << endl
					 << "Por favor, elija una civilizacion: ";
				
				cin >> indice;
				
				while (!cin || (indice < 0 || indice > civilizaciones.size()-1) || civilizaciones[indice] == civActual) {
					cin.clear ();    // Restore input stream to working state
    				cin.ignore ( 100 , '\n' );    // Get rid of any garbage that user might have entered
   				 	cout << "Por favor, ingrese una opcion valida: ";
   					cin >> indice; 
				}
				
				Civilizacion* civAtacada = civilizaciones[indice];
				
				bool guerra = true;
				
				while(guerra) {
					
				
					for(int i = 0; i < civActual->habitantes.size(); i++) {
						if(civActual->habitantes[i]->tipo() != "Aldeano" && civActual->habitantes[i]->horas >= 0) {
							indice = rand()%civAtacada->habitantes.size();
							civActual->habitantes[i]->atacar(civAtacada->habitantes[indice]);
							if (civAtacada->habitantes[indice]->vida <= 0) {
								civAtacada->habitantes.erase(civAtacada->habitantes.begin() + indice);
								if (civAtacada->habitantes.size() == 0) {
									
									guerra = false;
									cout << endl
										 << "Civilizacion atacada extinta!"
										 << endl;
									for (int j = 0; j < civilizaciones.size(); j++ ) {
										if (civilizaciones[j] == civAtacada) {
											civilizaciones.erase(civilizaciones.begin() + j);
										}
									}
								
									civActual->alimento += 100;
									civActual->oro += 100;
									civActual->madera += 100;
								
									break;
								}
							} else {
								civAtacada->habitantes[indice]->atacar(civActual->habitantes[i]);
								if(civActual->habitantes[i]->vida <= 0) {
									civActual->habitantes.erase(civActual->habitantes.begin() + i);
									i--;
								}
							}					
						}
					}
				
					int guerreros = 0;
					for (int i = 0; i < civActual->habitantes.size(); i++) {
						if(civActual->habitantes[i]->tipo() != "Aldeano" && civActual->habitantes[i]->horas >= 0) {
							guerreros++;
						}
					}
				
					if (guerreros = 0) {
						cout << endl
							 << "Has perdido la batalla !"
							 << endl;
						civActual->oro -= 20;
						guerra = false;
					}
					
					if (guerra) {
						
						resumenCiv(civActual);
						resumenCiv(civAtacada);
						
						cout << endl
							 << "Desea continuar ? " << endl
							 << "1) si" << endl
							 << "2) no" << endl
							 << "Su eleccion: ";
						
						int choice;
						cin >> choice;
						
						while (!cin || (choice < 1 || choice > 2) ) {
							cin.clear ();    // Restore input stream to working state
    						cin.ignore ( 100 , '\n' );    // Get rid of any garbage that user might have entered
   						 	cout << "Por favor, ingrese una opcion valida: ";
   							cin >> choice; 
						}
						
						if(choice == 2) {
							guerra = false;
						}
						
					}
				
				}
				
				break;
			}
			case 9: {
				
				cout << endl
					 << "***SIGUIENTE HORA***"
					 << endl;
				
				for(int i = 0; i < civActual->habitantes.size() ; i++) {
					if(civActual->habitantes[i]->tipo() == "Aldeano" && civActual->habitantes[i]->horas >= 0) {
						civActual->alimento += 5;
						civActual->madera += 4;
						civActual->oro += 3;
					}
				}
				
				cout << "Alimentos: " << civActual->alimento << endl
					 << "Madera: " << civActual->alimento << endl
					 << "Oro: " << civActual->oro << endl
					 << "Habitantes: " << civActual->habitantes.size() << endl
					 << "Capacidad de habitantes: " << civActual->numHabitantes << endl;
				
				for (int i = 0; i < civActual->habitantes.size(); i++) {
					
					//Restarle horas de creacion
					civActual->habitantes[i]->horas++;
					
					if(civActual->habitantes[i]->horas < 0) {
						cout << endl
							 << "Habitante en creacion, horas restantes: "
							 << civActual->habitantes[i]->horas * (-1)
							 << endl;
					}
				}
				
				break;
			}
			case 10: {
				
				loop = false;
				break;
			}
		}
		
	}
	
}

//Funcion resumen guerra
void resumenCiv(Civilizacion* civ) {
	
	int Aldeanos,Jinetes,Arqueros,Caballeros;
	
	for (int i = 0; i < civ->habitantes.size(); i++) {
		if (civ->habitantes[i]->horas >= 0) {
			string tipo = civ->habitantes[i]->tipo();
			if(tipo == "Aldeano")
				Aldeanos++;
			if(tipo == "Jinete") {
				Jinetes++;
			}
			if(tipo == "Arquero") {
				Arqueros++;
			}
			if (tipo == "Caballero") {
				Caballeros++;
			}
		}
	}
	
	cout << endl
		 << "Civilizacion: "  << civ->nombre << endl
		 << "Aldeanos: " << Aldeanos << endl
		 << "Jinete: " << Jinetes << endl
		 << "Arquero: " << Arqueros << endl
		 << "Caballeros: " << Caballeros << endl;
	
}



