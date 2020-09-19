#ifndef _TURMA_
#define _TURMA_ 

#include "aluno.hpp"

#define CAPACIDADE_MAX 10

using namespace std;

class Turma{

private:

	//atributos
	string nome_turma;
	string nome_disciplina;
	Aluno* alunos[CAPACIDADE_MAX];
	int quantidade_alunos = 0;

public: 

	//metodos getters e setters
	string getNome_turma();
	void setNome_turma(string nome_turma_);

	string getNome_disciplina();
	void setNome_disciplina(string nome_disciplina_);

	int getQuantidade_alunos();

	void adicionar_aluno(Aluno* novo);
	
	void remover_aluno(string nome);

	void listar_alunos();



};



#endif