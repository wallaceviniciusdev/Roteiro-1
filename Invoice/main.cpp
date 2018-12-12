#include <iostream>
#include "invoice.h"

using namespace std;

int main(){
	Invoice *fatura = new Invoice(0, "Default", 0, 0.0);

	int i, quantidade, indice;
	double valor, total = 0;
	string descricao;

	cout << "Digite quantos produtos você quer cadastrar: ";
	cin >> indice;

	vector <Invoice> id(indice);

	for(i = 0; i < indice; i++){
		cout << "\n" << "Produto #" << i+1 << endl << "------------------------------" << endl;
		id[i].setId(i+1);

		cin.ignore();
		cout << "Digite a descrição do produto: ";
		getline(cin, descricao);
		id[i].setDescricao(descricao);

		cout << "Digite a quantidade de produtos: ";
		cin >> quantidade;
		id[i].setQuantidade(quantidade);

		cout << "Digite o valor do produto: ";
		cin >> valor;
		id[i].setValor(valor);
		id[i].setInvoiceAmount(quantidade, valor);
	}

	fatura->setInvoice(id);
	cout << "\n" <<"------------------------------" << "\n" << "Fatura" << endl << "------------------------------" << endl;
	if(indice > 1){
		cout << indice << " produtos" << endl << "------------------------------" << endl;
	}else if(indice == 1){
		cout << "1 produto" << endl << "------------------------------" << endl;
	}
	for(i = 0; i < indice; i++){
		cout << "\n" << "Id: " << id[i].getId() << endl;
		cout << "Descricao: " << id[i].getDescricao() << endl;
		cout << "Quantidade: " << id[i].getQuantidade() << endl;
		cout << "Valor: " << "R$" << id[i].getValor() << endl;
		cout << "----------------------" << endl;
		total += id[i].getInvoiceAmount();
	}

	cout << "TOTAL: R$" << total << "------------------------------" << "\n" << endl;

	delete fatura;
	return 0;
}