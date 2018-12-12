#include <iostream>
#include <string>

class Empregado{
	private:
		std::string nome;
		std::string sobrenome;
		double salario;
	public:
		Empregado();
		virtual ~Empregado();
		std::string getNome();
		std::string getSobrenome();
		double getSalario();
		void setNome(std::string nome);
		void setSobrenome(std::string sobrenome);
		void setSalario(double salario);
};