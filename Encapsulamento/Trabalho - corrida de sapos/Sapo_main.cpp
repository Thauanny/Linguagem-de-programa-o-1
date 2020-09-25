#include <iostream>

#include "Sapo.hpp"

using namespace std;

int Sapo::distancia_total_da_corrida = 50;

int main(){

	Sapo* sapo1 = new Sapo(1, 5);
	Sapo* sapo2 = new Sapo(2, 3);
	Sapo* sapo3 = new Sapo(3, 5);

	bool venceu = false;
	Sapo* sapoVencedor;

	cout << "\n" << endl;

	while(venceu == false){

		sapo1->pular();
		cout << " O sapo numero " << sapo1->getId() << " pulour uma distantcia de " << sapo1->getDistancia_percorrida() << endl;

		if (sapo1->getDistancia_percorrida() >= Sapo::distancia_total_da_corrida){

			venceu = true;
			sapoVencedor = sapo1;	
		}
		sapo2->pular();
		cout << " O sapo numero " << sapo2->getId() << " pulour uma distantcia de " << sapo2->getDistancia_percorrida() << endl;
		
		if(sapo2->getDistancia_percorrida() >= Sapo::distancia_total_da_corrida){
				
			venceu = true;
			sapoVencedor = sapo2;	
	
		}
		sapo3->pular();
		cout << " O sapo numero " << sapo3->getId() << " pulour uma distantcia de " << sapo3->getDistancia_percorrida() << endl;
		
		if(sapo3->getDistancia_percorrida() >= Sapo::distancia_total_da_corrida){
				
			venceu = true;
			sapoVencedor = sapo3;	
	
		}
	}

	cout << "\n" << " O sapo numero " << sapoVencedor->getId() <<" ganhou com um total de "<< sapoVencedor->getQuantidade_de_pulos() << " pulos!!" <<endl;

	cout << "" << endl;

	cout<< " Fim da Corrida!" <<endl;

	delete sapo1;
	delete sapo2;

	return 0;
}