#include "empregados.h"

using namespace std;

int main(){
	Empregado *e1 = new Empregado();
	Empregado *e2 = new Empregado();

	e1->setNome("Tassany");
	e1->setSobrenome("Onofri");
	e1->setSalario(1800);

	e2->setNome("Laura");
	e2->setSobrenome("de Faria");
	e2->setSalario(1500);

	cout << "Nome: " << e1->getNome() << endl << "Sobrenome: " << e1->getSobrenome() << endl << "Salario Anual: R$" << e1->getSalario()*12 << endl << endl;
	cout << "Nome: " << e2->getNome() << endl << "Sobrenome: " << e2->getSobrenome() << endl << "Salario Anual: R$" << e2->getSalario()*12 << endl;

	cout << endl << "Aumento de 10 por cento" << endl;

	cout << "Nome: " << e1->getNome() << endl << "Sobrenome: " << e1->getSobrenome() << endl << "Salario Anual: R$" << (e1->getSalario()*12) + (e1->getSalario()*0.1) << endl << endl;
	cout << "Nome: " << e2->getNome() << endl << "Sobrenome: " << e2->getSobrenome() << endl << "Salario Anual: R$" << (e2->getSalario()*12) + (e2->getSalario()*0.1)<< endl;

	delete e1;
	delete e2;
}