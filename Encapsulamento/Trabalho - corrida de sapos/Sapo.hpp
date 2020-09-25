#ifndef _SAPO_
#define _SAPO_

#include <random>

class Sapo{

private:
	int id = 0;
	int distancia_percorrida = 0;
	int quantidade_de_pulos = 0;
	int max_salto = 0;
	std::random_device rd;
	std::default_random_engine gen;
	std::uniform_int_distribution<> dis;

public:
	static int distancia_total_da_corrida;

	Sapo();
	Sapo(int id, int max_salto);
	~Sapo();

	int getId();
	void setId(int id);

	int getDistancia_percorrida();
	void setDistancia_percorrida(int distancia_percorrida);
	
	int getQuantidade_de_pulos();

	static int getDistancia_total_da_corrida();

	int getMax_salto();

	void pular();
	
};

#endif