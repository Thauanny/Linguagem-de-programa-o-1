#include <iostream>
#include "aluno.hpp"

using namespace std;

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