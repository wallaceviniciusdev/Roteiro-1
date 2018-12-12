#include <iostream>
#include "despesas.h"

using namespace std;

int main(){
	ControleDeGastos *despesa = new ControleDeGastos();

	int indice;
	double valor, soma = 0;
	string tipo;

	cout << "Quantas dispesas você quer cadastrar?" << endl << "Resposta: ";
	cin >> indice;
	cin.ignore();

	vector <Despesa> gasto(indice);

	for(int i = 0; i < indice; i++){
		cout << "Gasto #" << i+1 << endl;
		cout << "Digite o tipo de gasto: ";
		getline(cin, tipo);
		gasto[i].setTipoDeGasto(tipo);

		cout << "Digite o valor do gasto: ";
		cin >> valor;
		gasto[i].setValor(valor);
		cin.ignore();
		cout << endl;
	}

	despesa->setDespesas(gasto);

	cout << endl << "Digite um tipo de despesa: ";
	getline(cin, tipo);

	if(despesa->existeGastoDoTipo(tipo)){
		for(int i = 0; i < indice; i++){
			if(gasto[i].getTipoDeGasto().compare(tipo) == 0){
				cout << "Valor R$: " << gasto[i].getValor() << endl;
				soma += gasto[i].getValor();
			}	
		}

		cout << "Total R$: " << soma << endl;
	}else{
		cout << "Não existe despesa com esse tipo!" << endl;
	}

	delete despesa;	
}