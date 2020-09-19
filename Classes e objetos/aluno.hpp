#ifndef _ALUNO_
#define _ALUNO_
#include <iostream>

using namespace std;

class Aluno{

private:

	//atributos
	string nome;
	string telefone;
	string endereco;
	string matricula;
	short idade;


public:

	//metodos setters e getters
	string getNome();
	void setNome(string nome_);

	string getTelefone();
	void setTelefone( string telefone_);

	string getEndereco();
	void setEndereco(string endereco_);

	string getMatricula();
	void setMatricula(string matricula_);

	short getIdade();
	void setIdade(short idade_);

};

#endif