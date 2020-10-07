#ifndef __CORRIDA__
#define __CORRIDA__

#include "Sapo.hpp"
#include <iostream>

#define MAX_SAPOS 3

using namespace std;

class Corrida{
private:
	string titulo;
	Sapo* sapos[MAX_SAPOS];
	int concorrentes; 


public:
	Corrida(string titulo);
	~Corrida();

	string getTitulo();

	int getConcorrentes();

	void addSapo(Sapo* novo);

	void removeSapo(int id);

	void start();
	
};



#endif