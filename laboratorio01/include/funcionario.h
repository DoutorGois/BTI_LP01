#ifndef _H_FUNCIONARIO_H_
#define _H_FUNCIONARIO_H_
#include<iostream>
class Empresa;
class Funcionario{
	private:
		std::string	_nome;
		float		_salario;
		std::string     _constructedBy;
	public:
		Funcionario();
		Funcionario(float i_salario);
		Funcionario(std::string i_nome);
		Funcionario(std::string i_nome, float i_salario);
		Funcionario(Funcionario &i_funcionario);
		
		~Funcionario();

		// Getters and setters
		std::string getNome();
		float		getSalario();
		std::string getConstructed();
		void setNome(std::string i_nome);
		void setSalario(float i_salario);


		// Sobrecarga de operadores
		bool         operator==(Funcionario f);
		bool         operator==(Funcionario& f);
		Funcionario& operator=(Funcionario f);
		Funcionario  operator+(Funcionario &f);
		//Empresa&    operator+(Funcionario f);
		//Empresa&    operator+(Empresa e);
		
		friend std::ostream& operator<<(std::ostream &o, Funcionario f);
//		friend std::ostream& operator<<(std::ostream &o, Funcionario &f);
//		friend std::ostream& operator<<(std::ostream &o, Funcionario *f);
		friend std::istream& operator>>(std::istream &i, Funcionario f);
};
#endif
