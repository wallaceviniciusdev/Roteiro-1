#include "invoice.h"

Invoice::Invoice(){}

Invoice::Invoice(int id, std::string descricao, int quantidade, double valor){
	this->id = id;
	this->descricao = descricao;
	this->quantidade = quantidade;
	this->valor = valor;
}

void Invoice::setId(int id){
	this->id = id;
}

void Invoice::setDescricao(std::string descricao){
	this->descricao = descricao;
}

void Invoice::setQuantidade(int quantidade){
	this->quantidade = quantidade;
}

void Invoice::setValor(double valor){
	this->valor = valor;
}

int Invoice::getId(){
	return this->id;
}

std::string Invoice::getDescricao(){
	return this->descricao;
}

int Invoice::getQuantidade(){
	return this->quantidade;
}

double Invoice::getValor(){
	return this->valor;
}

void Invoice::setInvoiceAmount(int quantidade, double valor){
	this->total = quantidade * valor;
}

double Invoice::getInvoiceAmount(){
	return this->total;
}

void Invoice::setInvoice(std::vector<Invoice> fatura){
	this->fatura = fatura;
}