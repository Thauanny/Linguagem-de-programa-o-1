#include <iostream>
#include "retangulo.hpp"

using std::cout;
using std::endl;

	//Metodos de acesso
	int Retangulo::getLargura(){
		return largura;
	}

	void Retangulo::setLargura(int largura_){
		if(largura_ < 0){
			cout<< "ERRO" <<endl;
			
		}else{
			largura = largura_;
		}
		
	}

	int Retangulo::getAltura(){
		return altura;
	}

	void Retangulo::setAltura(int altura_){
		if(altura_ < 0){
			cout<< "ERRO" <<endl;
			
		}else{
			altura = altura_;
		}
		
	}


	//Metodos
	int Retangulo::area(){
		return largura*altura;
	}

	int Retangulo::perimetro(){
		return (2*altura+2*largura);
	}