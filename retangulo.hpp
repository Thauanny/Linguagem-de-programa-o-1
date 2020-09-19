#ifndef _RETANGULO_
#define _RETANGULO_

//separar metodos das definições "modularização"

class Retangulo{
private:

	//Atributos
	int largura;
	int altura;


public:
	//Metodos de acesso
	int getLargura();

	void setLargura(int largura_);

	int getAltura();

	void setAltura(int altura_);


	//Metodos Gerais
	area();
	perimetro();
	
};

#endif