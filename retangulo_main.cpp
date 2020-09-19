#include <iostream>
#include "retangulo.hpp"

using std::cout;
using std::endl;
using std::cin;

int main(){

	Retangulo x; //tipo da classe do hpp retangulo
	x.setLargura(-1);
	x.setAltura(1);
	cout << "Area x: " << x.area() << endl;

	Retangulo* y = new Retangulo(); //tipo da classe do hpp retangulo de forma dinamica

	y->setLargura(5);
	y->setAltura(-5);

	cout<< "Area y: " << y->area() <<endl;
	return 0;
}