#include <iostream>
#include "turma_construtor.hpp"


using namespace std;


//construtores e destrutores

//construdor
Turma::Turma(){
	this->nome_turma = "IMD0000";
	this->nome_disciplina = "Turma Provisoria";
}
Turma::Turma(string nome_turma, string nome_disciplina):
	nome_turma(nome_turma), nome_disciplina(nome_disciplina){}

//destrutor
Turma::~Turma(){
	cout << "Turma removida" << endl;
}

//metodos getters e setters
string Turma::getNome_turma(){
  
  	return this->nome_turma;
}
void Turma::setNome_turma(string nome_turma_){

	this->nome_turma = nome_turma_;
}

string Turma::getNome_disciplina(){

	return this->nome_disciplina;
}
void Turma::setNome_disciplina(string nome_disciplina_){

	this->nome_disciplina = nome_disciplina_;
}

int Turma::getQuantidade_alunos(){
	return this->quantidade_alunos;
}

void Turma::adicionar_aluno(Aluno* novo){

	if (this->quantidade_alunos < CAPACIDADE_MAX){

		this->alunos[this->quantidade_alunos++] = novo;

	}
}

void Turma::remover_aluno(string nome){
   
   bool encontrou = false;
	for (int i = 0; i < this->quantidade_alunos; ++i){

		if (alunos[i]->getNome() == nome){
			Aluno* temp = alunos[i];
			alunos[i] = alunos[i+1];
			alunos[i+1] = temp;
			encontrou = true;

		}
	} 

	if(encontrou){
		delete alunos[this->quantidade_alunos--];
	}else{
		cout << "aluno nao encontrado, impossivel remover" << endl;
	}
}

void Turma::listar_alunos(){

	for (int i = 0; i < this->quantidade_alunos; ++i){
		cout << "Nome dos alunos: " << this->alunos[i]->getNome() << endl;
	}

}

