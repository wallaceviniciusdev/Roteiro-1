#ifndef PESSOA_H_
#define PESSOA_H_
#include <iostream>
#include <string>

class Pessoa{
	private:
		std::string nome;
		int idade;
		std::string telefone;
	public:
		Pessoa(std::string nome);
		Pessoa(std::string nome, int idade, std::string telefone);
		virtual ~Pessoa();
		std::string getNome();
		void setNome(std::string nome);
		int getIdade();
		void setIdade(int idade);
		std::string getTelefone();
		void setTelefone(std::string telefone);
	
};

#endif