#include "carro.hpp"

int main()
{
	Carro c("preto", "Toyota Corolla", "2010", "ABC-1234", "Thauanny", 22.50);
	c.ligar();

	Veiculo* v = &c; // &c -> copia do carro

	cout << v->getPlaca() << endl;
	cout << v->getModelo() << endl;
	//cout << v->getVolumePortaMalas() << endl;
	v->ligar();
 
	Veiculo* v1 = new Veiculo;
	Carro* c1 = (Carro*)(v1); 
	c1->setModelo("Toyota Corolla"); 
	c1->setPlaca("ABC-1234"); 
	c1->setVolumePortaMalas(22.50); 
	c1->ligar();

	delete v1;

	return 0;
}