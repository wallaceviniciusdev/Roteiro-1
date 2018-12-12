#include "despesas.h"

Despesa::Despesa(){
	this->valor = 0;
	this->tipoDeGasto = "";
}

Despesa::Despesa(double valor, std::string tipoDeGasto){
	this->valor = valor;
	this->tipoDeGasto = tipoDeGasto;
}

Despesa::~Despesa(){}

double Despesa::getValor(){
	return this->valor;
}

std::string Despesa::getTipoDeGasto(){
	return this->tipoDeGasto;
}

void Despesa::setValor(double valor){
	this->valor = valor;
}

void Despesa::setTipoDeGasto(std::string tipoDeGasto){
	this->tipoDeGasto = tipoDeGasto;
}

ControleDeGastos::ControleDeGastos(){}
ControleDeGastos::~ControleDeGastos(){}

void ControleDeGastos::setDespesas(std::vector<Despesa> despesas){
	this->despesas = despesas;
}

double ControleDeGastos::calculaTotalDeGasto(){
	int i = 0;
	double gastos = 0;

	while(despesas.size() >= i){
		gastos += this->despesas[i].getValor();
		i++;
	}

	return gastos;
}

bool ControleDeGastos::existeGastoDoTipo(std::string tipo){
	int i;

	for(i = 0; i < despesas.size(); i++){
		if(tipo.compare(despesas[i].getTipoDeGasto()) == 0)
			return true;
	}

	return false;
}