#ifndef INVOICE_H_
#define INVOICE_H_
#include <iostream>
#include <string>
#include <vector>

class Invoice{
public:
	int id;
	std::string descricao;
	int quantidade;
	double valor;
	double total;
	std::vector<Invoice> fatura;

	Invoice();
	Invoice(int id, std::string descricao, int quantidade, double valor);
	void setId(int id);
	void setDescricao(std::string descricao);
	void setQuantidade(int quantidade);
	void setValor(double valor);
	int getId();
	std::string getDescricao();
	int getQuantidade();
	double getValor();
	double getInvoiceAmount();
	void setInvoice(std::vector<Invoice> fatura);
	void setInvoiceAmount(int quantidade, double valor);
};

#endif