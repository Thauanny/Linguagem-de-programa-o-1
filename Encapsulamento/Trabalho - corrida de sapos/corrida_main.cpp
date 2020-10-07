#include "Sapo.hpp"
#include "corrida.hpp"

#include <iostream>

using namespace std;

int main(){
	
	Sapo* sapo1 = new Sapo(1, 5);
	Sapo* sapo2 = new Sapo(2, 3);
	Sapo* sapo3 = new Sapo(3, 5);

	Corrida gpBrasil("Grande premio de Interlagos");

	gpBrasil.addSapo(sapo1);
	gpBrasil.addSapo(sapo2);
	gpBrasil.addSapo(sapo3);

	gpBrasil.start();

	return 0;
}