#include <iostream>
#include "turma_statico.hpp"
#include "aluno_statico.hpp"

int main(){


	Turma* turma = new Turma("LP1","IMD0033");

	Aluno* thauanny = new Aluno("Thauanny","(84) 9981248215", "Pitimbu", "20190000840", 21);

	Aluno* lais = new Aluno("Lais", "(84) 8821562452", "Planalto", "20195555840", 19);

	Aluno* bob = new Aluno("Junior", "(84) 555888225", "Lagoa nova", "2018555875", 25);
	
	Aluno* ricardo = new Aluno("Ricardo", "(84) 887523477", "Alecrim", "2017558422", 25);

	turma->adicionar_aluno(thauanny);
	turma->adicionar_aluno(lais);
	turma->adicionar_aluno(bob);
	turma->adicionar_aluno(ricardo);


	cout << turma->getNome_disciplina() << " -> " << turma->getQuantidade_alunos() << "/" << CAPACIDADE_MAX << endl;
	turma->listar_alunos();
	
	cout << "" << endl;

	cout << "removendo..." << endl;
	
	cout << "" << endl;

	turma->remover_aluno("lais");
	
	cout << "" << endl;

	cout << turma->getNome_disciplina() << " -> " << turma->getQuantidade_alunos() << "/" << CAPACIDADE_MAX << endl;
	turma->listar_alunos();

	cout << "" << endl;

	delete turma;
	
	return 0;
}