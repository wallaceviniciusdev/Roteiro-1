#ifndef DESPESAS_H_
#define DESPESAS_H_
#include <iostream>
#include <string>
#include <string.h>
#include <vector>

class Despesa{
	private:
		double valor;
		std::string tipoDeGasto;
	public:
		Despesa();
		Despesa(double valor, std::string tipoDeGasto);
		virtual ~Despesa();
		double getValor();
		void setValor(double valor);
		std::string getTipoDeGasto();
		void setTipoDeGasto(std::string tipoDeGasto);
	
};

class ControleDeGastos{
	private:
		std::vector <Despesa> despesas;
	public:
		ControleDeGastos();
		virtual ~ControleDeGastos();
		void setDespesas(std::vector<Despesa> despesas);
		double calculaTotalDeGasto();
		bool existeGastoDoTipo(std::string tipo);
};

#endif