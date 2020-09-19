#include <iostream>
#include"turma.hpp"
#include "aluno.hpp"


int main(){


	Turma* turma = new() Turma;
	turma->setNome_turma("LP1");
	turma->setNome_disciplina("IMD0033");

	Aluno* thauanny = new() Aluno;
	thauanny->setNome("Thauanny");
	thauanny->setMatricula("20190000840");
	thauanny->setIdade(21);
	thauanny->setTelefone("(84) 9981248215");
	thauanny->setEndereco("pitimbu");

	Aluno* lais = new() Aluno;
	lais->setNome("Lais");
	lais->setMatricula("20195555840");
	lais->setIdade(19);
	lais->setTelefone("(84) 8821562452");
	lais->setEndereco("planalto");


	Aluno* bob = new() Aluno;
	bob->setNome("Junior");
	bob->setMatricula("2018555875");
	bob->setIdade(25);
	bob->setTelefone("(84) 555888225");
	bob->setEndereco("lagoa nova");
	
	Aluno* ricardo = new() Aluno;
	ricardo->setNome("Ricardo");
	ricardo->setMatricula("2017558422");
	ricardo->setIdade(25);
	ricardo->setTelefone("(84) 887523477");
	ricardo->setEndereco("alecrim");
	

	turma->adicionar_aluno(thauanny);
	turma->adicionar_aluno(lais);
	turma->adicionar_aluno(bob);
	turma->adicionar_aluno(ricardo);


	cout << turma->getNome_disciplina() << " -> " << turma->getQuantidade_alunos() << "/" << CAPACIDADE_MAX << endl;
	turma->listar_alunos();

	cout << "removendo..." << endl;

	turma->remover_aluno("lais");
	cout << turma->getNome_disciplina() << " -> " << turma->getQuantidade_alunos() << "/" << CAPACIDADE_MAX << endl;
	turma->listar_alunos();
	return 0;
}