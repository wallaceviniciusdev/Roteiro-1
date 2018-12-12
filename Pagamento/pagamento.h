#ifndef PAGAMENTO_H_
#define PAGAMENTO_H_
#include <iostream>
#include <string>
#include <vector>

class Pagamento{
	private:
		double valor;
		std::string nome;
	public:
		Pagamento();
		Pagamento(double valor, std::string nome);
		virtual ~Pagamento();
		double getValor();
		void setValor(double valor);
		std::string getNome();
		void setNome(std::string nome);
	
};

class ControleDePagamentos{
	private:
		std::vector <Pagamento> pagamento;
	public:
		ControleDePagamentos();
		virtual ~ControleDePagamentos();
		void setPagamentos(std::vector<Pagamento> pagamento);
		double calculaTotalDePagamento();
		bool existePagamentoParaFuncionario(std::string nome);
};

#endif