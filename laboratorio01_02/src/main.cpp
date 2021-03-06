#include <iostream>
#include "funcionario.h"
#include "empresa.h"
#include <vector>

int Empresa::s_n_funcionarios=0;
float Empresa::s_total_salario=0.0;
std::vector<Empresa*> Empresa::s_empresas;

int main(){

	std::vector<Empresa*> empresas;
	Empresa *empresa;
	
	int e = 0;
	std::cout << "Quantas empresas? ";
	std::cin >> e;

	for(int ei=0; ei<e; ei++){
		empresa = new Empresa();
		
		std::cin >> *empresa;
		empresas.push_back(empresa);

		std::cout << *empresas[ei];
		Empresa::imprimeMediaSalarial();

		empresas[ei]->aumentarSalario(0.1);

		std::cout << *empresas[ei];
		Empresa::imprimeMediaSalarial();
	}

	Funcionario * f1 = new Funcionario("José",3000.0);
	Funcionario * f2 = new Funcionario("Sara",3000.0);
	Funcionario * f3 = new Funcionario("Sana",3000.0);

	empresas.push_back(&(*f1 + *f2 + *f3 +*f3));

	if(empresas.size()>=3)
		*f3 + *f1 + *empresas[2] + *f3 + *f3;


	Empresa::imprimeEmpresas();
	return 0;

}
