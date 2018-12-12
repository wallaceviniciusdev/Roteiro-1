#include <iostream>
#include "pessoa.h"

using namespace std;

int main(){
	Pessoa *cadastro1 = new Pessoa("Wallace");
	cadastro1->setIdade(19);
	cadastro1->setTelefone("081 9 8940-9940");

	Pessoa *cadastro2 = new Pessoa("Luiz", 17, "083 9 8194-3060");

	cout << "Nome: " << cadastro1->getNome() << endl << "Idade: " << cadastro1->getIdade() << endl << "Telefone: " << cadastro1->getTelefone();
	cout << endl <<"Nome: " << cadastro2->getNome() << endl << "Idade: " << cadastro2->getIdade() << endl << "Telefone: " << cadastro2->getTelefone() << endl;

	delete cadastro1;
	delete cadastro2;

	return 0;
}