#ifndef _H_FUNCIONARIO_H_
#define _H_FUNCIONARIO_H_

#include<iostream>
class Empresa;
#include "empresa.h"
class Funcionario{
	private:
		std::string _nome;
		float	_salario;
	public:
		Funcionario();
		Funcionario(std::string nome, float salario);
		Funcionario(Funcionario &f);
		~Funcionario();

		std::string getNome();
		float getSalario();
		void setSalario(float salario);
		void setNome(std::string nome);

		bool operator==(Funcionario &f);

		Empresa& operator+(Funcionario &f);
		Empresa& operator+(Empresa &e);

		friend std::ostream& operator<<(std::ostream& o, Funcionario &f);
		friend std::istream& operator>>(std::istream& i, Funcionario &f);
};

#endif
