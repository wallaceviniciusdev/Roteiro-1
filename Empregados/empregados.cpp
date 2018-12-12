#include "empregados.h"

Empregado::Empregado(){
	this->nome = "";
	this->sobrenome = "";
	this->salario = 0;
}

Empregado::~Empregado(){}

std::string Empregado::getNome(){
	return this->nome;
}

std::string Empregado::getSobrenome(){
	return this->sobrenome;
}

double Empregado::getSalario(){
	return this->salario;
}

void Empregado::setNome(std::string nome){
	this->nome = nome;
}

void Empregado::setSobrenome(std::string sobrenome){
	this->sobrenome = sobrenome;
}

void Empregado::setSalario(double salario){
	this->salario = salario;
}