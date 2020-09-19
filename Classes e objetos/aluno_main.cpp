#include <iostream>
#include "aluno.hpp"

using namespace std;

int main(){
	
	Aluno* novo_aluno = new Aluno();
	novo_aluno->setNome("THAUANNY");
	novo_aluno->setTelefone("988054681");
	novo_aluno->setEndereco("Tv: santo onofre");
	novo_aluno->setMatricula("20190000840");
	novo_aluno->setIdade(21);


	cout << "aluno nome: " << novo_aluno->getNome() << endl;
	cout << "aluno telefone: " << novo_aluno->getTelefone() << endl;
	cout << "aluno endereco: " << novo_aluno->getEndereco() << endl;
	cout << "aluno matricula: " << novo_aluno->getMatricula() << endl;
	cout << "aluno idade: " << novo_aluno->getIdade() << endl;


	return 0;
}