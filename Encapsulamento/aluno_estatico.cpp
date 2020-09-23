#include <iostream>
#include "aluno_statico.hpp"

using namespace std;

//construtores e destrutores

//construtor
Aluno::Aluno(){
	this->nome= "indigente"; // caso nao passe parametro
}


/*Aluno::Aluno(string nome,string telefone,string endereco,string matricula,short idade){ //forma comum
		this->nome = nome;
		this->telefone = telefone;
		this->endereco = endereco;
		this->matricula = matricula;
		this->idade = idade;
}*/

Aluno::Aluno(string nome,string telefone,string endereco,string matricula,short idade):
	nome(nome), telefone(telefone), endereco(endereco), matricula(matricula), idade(idade){} //forma c++


//destrutor
Aluno::~Aluno(){
	cout << this->nome << "...Morreu..." << endl; 
}


//metodos setters e getters

string Aluno::getNome(){
	return this->nome;
}
void Aluno::setNome(string nome_){
	this->nome = nome_;
}

string Aluno::getTelefone(){
	return this->telefone;
}
void Aluno::setTelefone( string telefone_){
	this->telefone = telefone_;
}

string Aluno::getEndereco(){
	return this->endereco;
}
void Aluno::setEndereco(string endereco_){
	this->endereco = endereco_;
}

string Aluno::getMatricula(){
	return this->matricula;
}
void Aluno::setMatricula(string matricula_){
	this->matricula = matricula_;
}

short Aluno::getIdade(){
	return this->idade;
}
void Aluno::setIdade(short idade_){
	this->idade = idade_;
}