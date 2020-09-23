#include <iostream>
#include <typeinfo>
#include <cstdlib>

#include "dado.hpp"

using namespace std;

int main(int argc, char const *argv[]){
	string a;
	if(argc == 2){
		Dado meu_dado;
		for(int i = 0; i<atoi(argv[1]); i++){
			cout << meu_dado.jogar() <<endl;
		}
	}else if (typeid(argc).name() == typeid(a).name()){
		cout << "Digite um numero" << endl;

	}else{
		cout << "Diga o numero de vezes que vc quer girar" << endl;
	}

	return 0;
}