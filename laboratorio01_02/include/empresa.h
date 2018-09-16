#ifndef _H_EMPRESA_H_
#define _H_EMPRESA_H_

#include<iostream>
#include<vector>
class Funcionario;
typedef std::vector<Funcionario*> plantel;

class Empresa{
	private:
		std::string _nome;
		int _CNPJ;
		plantel _plantel;

	public:
		static int s_n_funcionarios;
		static float s_total_salario;
		static void imprimeMediaSalarial();
		static std::vector<Empresa*> s_empresas;
		static void imprimeEmpresas();

		Empresa();
		Empresa(std::string nome, int CNPJ);
		Empresa(Empresa &e);
		~Empresa();

		void setNome(std::string nome);
		void setCNPJ(int CNPJ);
		void setPlantel(plantel p);
		std::string getNome();
		int getCNPJ();
		plantel& getPlantel();

		bool addFuncionario();

		void aumentarSalario(float pct);

		friend std::ostream& operator<<(std::ostream& o, Empresa &e);
		friend std::istream& operator>>(std::istream& i, Empresa &e);
	};


#endif
