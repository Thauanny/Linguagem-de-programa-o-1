#include <iostream>
#include "aluno_construtor.hpp"

using namespace std;

int main(){
	
	Aluno* thauanny = new Aluno("Thauanny", "988054681", "Tv: santo onofre", "20190000840", 21);
	cout << "aluno nome: " << thauanny->getNome() << endl;
	cout << "aluno telefone: " << thauanny->getTelefone() << endl;
	cout << "aluno endereco: " << thauanny->getEndereco() << endl;
	cout << "aluno matricula: " << thauanny->getMatricula() << endl;
	cout << "aluno idade: " << thauanny->getIdade() << endl;

	cout << "" << endl;

	Aluno* raquel = new Aluno("Raquel", "8752465", "Parnamirim", "201784526", 21);
	cout << "aluno nome: " << raquel->getNome() << endl;
	cout << "aluno telefone: " << raquel->getTelefone() << endl;
	cout << "aluno endereco: " << raquel->getEndereco() << endl;
	cout << "aluno matricula: " << raquel->getMatricula() << endl;
	cout << "aluno idade: " << raquel->getIdade() << endl;

	cout << "" << endl;

	delete thauanny;
	delete raquel;
	 
	return 0;
}