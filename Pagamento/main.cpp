#include <iostream>
#include "pagamento.h"

using namespace std;

int main(){
	ControleDePagamentos *pagamento = new ControleDePagamentos();

	int indice;
	double valor, soma = 0;
	string nome;

	cout << "Quantos funcionários você quer cadastrar?" << endl << "Resposta: ";
	cin >> indice;
	cin.ignore();

	vector <Pagamento> controle(indice);

	for(int i = 0; i < indice; i++){
		cout << "Funcionário #" << i+1 << endl;
		cout << "Digite o nome do funcionário: ";
		getline(cin, nome);
		controle[i].setNome(nome);

		cout << "Digite o valor do pagamento: ";
		cin >> valor;
		controle[i].setValor(valor);
		cin.ignore();
		cout << endl;
	}

	pagamento->setPagamentos(controle);

	cout << endl << "Digite o nome de um funcionário: ";
	getline(cin, nome);

	if(pagamento->existePagamentoParaFuncionario(nome)){
		cout << "Resultados para " << nome << endl;
		for(int i = 0; i < indice; i++){
			if(controle[i].getNome().compare(nome) == 0){
				cout << "Pagamento R$: " << controle[i].getValor() << endl;
				soma += controle[i].getValor();
			}	
		}

		cout << "Total de pagamentos de " << nome << ": R$" << soma << endl;
	}else{
		cout << "Não existe funcionário com esse nome!" << endl;
	}

	cout << endl << "Total de pagamentos: R$ " << pagamento->calculaTotalDePagamento() << endl;

	delete pagamento;	
}