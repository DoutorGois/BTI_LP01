#ifndef _H_EMPRESA_H_
#define _H_EMPRESA_H_
#include<iostream>
#include<vector>
class Funcionario;
typedef std::vector<Funcionario> plantel;
class Empresa{
	private:
		std::string		s_nome;
		int				s_CNPJ;
		plantel			s_contratados;
	public:
		Empresa();
		Empresa(int i_CNPJ);
		Empresa(std::string i_nome);
		Empresa(std::string i_nome, int i_CNPJ);
		Empresa(Empresa &i_empresa);
		~Empresa();

		std::string getNome();
		int			getCNPJ();
		plantel     getPlantel();
		
		void setNome(std::string i_nome);
		void setCNPJ(int i_CNPJ);
		void setPlantel(std::string i_plantel);

		//bool operator==(Empresa &f);
		//Empresa& operator+(Funcionario &f);
		//Empresa& operator+(Empresa e);

		friend std::ostream& operator<<(std::ostream &o, Empresa e);
		friend std::istream& operator>>(std::istream &i, Empresa e);
};
#endif
