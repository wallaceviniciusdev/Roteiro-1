#include <iostream>
#include "data.h"

using namespace std;

int main(){
	
	Data *data = new Data();
	int dia, mes, ano, indice;

	cout << "Digite um dia: ";
	cin >> dia;
	data->setDia(dia);

	cout << "Digite um mês: ";
	cin >> mes;
	data->setMes(mes);

	cout << "Digite um ano: ";
	cin >> ano;
	data->setAno(ano);

	cout << "Avançar dia: ";
	cin >> indice;
	data->avancarData(indice);

	if(data->getDia() < 10)
		cout << "0" << data->getDia() << "/";
	else
		cout << data->getDia() << "/";

	if(data->getMes() < 10)
		cout << "0" << data->getMes();
	else
		cout << data->getMes();

	cout << "/" << data->getAno() << endl;

	delete data;

	return 0;
}