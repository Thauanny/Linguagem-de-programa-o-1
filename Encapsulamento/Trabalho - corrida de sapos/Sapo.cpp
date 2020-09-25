#include <iostream>
#include <random>
#include "Sapo.hpp"

using namespace std;

Sapo::Sapo(){
	cout << "sem numero para o sapo" << endl;
}

Sapo::Sapo(int id, int max_salto)
		:id(id), max_salto(max_salto), rd(), gen(rd()), dis(1, max_salto){}

Sapo::~Sapo(){

}

int Sapo::getId(){
	return this->id;
}

void Sapo::setId(int id){
	this->id = id;
}

int Sapo::getDistancia_percorrida(){
	return this->distancia_percorrida;
}
void Sapo::setDistancia_percorrida(int distancia_percorrida){
	this->distancia_percorrida = distancia_percorrida;
}

int Sapo::getQuantidade_de_pulos(){
	return quantidade_de_pulos;
}

int Sapo::getMax_salto(){

	return this->max_salto;
}

void Sapo::pular(){

	this->quantidade_de_pulos++;
 	this->distancia_percorrida += std::round(dis(gen));
	
}
