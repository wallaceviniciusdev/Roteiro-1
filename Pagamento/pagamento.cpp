#include "pagamento.h"

Pagamento::Pagamento(){
	this->nome = "";
	this->valor = 0;
}

Pagamento::Pagamento(double valor, std::string nome){
	this->nome = nome;
	this->valor = valor;
}

Pagamento::~Pagamento(){}

double Pagamento::getValor(){
	return this->valor;
}

void Pagamento::setValor(double valor){
	this->valor = valor;
}

std::string Pagamento::getNome(){
	return this->nome;
}

void Pagamento::setNome(std::string nome){
	this->nome = nome;
}

ControleDePagamentos::ControleDePagamentos(){}
ControleDePagamentos::~ControleDePagamentos(){}

void ControleDePagamentos::setPagamentos(std::vector<Pagamento> pagamento){
	this->pagamento = pagamento;
}

double ControleDePagamentos::calculaTotalDePagamento(){
	int i = 0;
	double soma = 0;

	while(i <= pagamento.size()){
		soma += this->pagamento[i].getValor();
		i++;
	}

	return soma;
}

bool ControleDePagamentos::existePagamentoParaFuncionario(std::string nome){
	int i = 0;

	while(i <= pagamento.size()){
		if(nome.compare(pagamento[i].getNome()) == 0){
			return true;
		}
		i++;
	}

	return false;
}