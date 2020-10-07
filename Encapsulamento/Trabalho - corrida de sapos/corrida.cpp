#include "corrida.hpp"

Corrida::Corrida(string titulo): titulo(titulo), concorrentes(0){}

Corrida::~Corrida(){

}

string Corrida::getTitulo(){
	return this->titulo;
}

int Corrida::getConcorrentes(){
	return this->concorrentes;
}

void Corrida::addSapo(Sapo* novo){
	if(this->concorrentes < MAX_SAPOS){

		this->sapos[this->concorrentes++] = novo;

	}else{
		
		cout << "Corrida lotada. Sapo" << novo->getId() << "ficou de fora." <<endl;
	}
}

void Corrida::removeSapo(int id){
	bool encontrou = false;
	for (int i = 0; i < this->concorrentes; ++i){

		if (sapos[i]->getId() == id){
			Sapo* temp = sapos[i];
			sapos[i] = sapos[i+1];
			sapos[i+1] = temp;
			encontrou = true;

		}
	} 

	if(encontrou){
		delete sapos[this->concorrentes--];
	}else{
		cout << "sapo nao encontrado, impossivel remover" << endl;
	}
}

void Corrida::start(){
	bool fim = false;

	while(!fim){
		for (int i = 0; i < this->concorrentes; ++i){
			
			this-> sapos[i]->pular();
			cout <<this->sapos[i]->getId() << "dist= " << this->sapos[i]->getDistancia() << "meta=" << Sapo::distancia_total_da_corrida() << endl;
			if (his->sapos[i]->getDistancia() >  Sapo::distancia_total_da_corrida()){
				fim = true;
				break;
			}
		}
	}
}