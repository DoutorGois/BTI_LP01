#include "empresa.h"
#include "funcionario.h"
#include<iostream>
#include<vector>
#include<iomanip>

Empresa::Empresa():_nome("José LTDA"),_CNPJ(0){
	s_empresas.push_back(this);
}
Empresa::Empresa(std::string nome, int CNPJ):_nome(nome),_CNPJ(CNPJ),_plantel(){
	s_empresas.push_back(this);

}
Empresa::Empresa(Empresa &e){
	e.setNome(_nome);
	e.setCNPJ(_CNPJ);
	e.setPlantel(_plantel);

	s_empresas.push_back(this);
}
Empresa::~Empresa(){
	std::cout << "Faliu";
}

std::string Empresa::getNome(){return _nome;}
int Empresa::getCNPJ(){return _CNPJ;}

plantel& Empresa::getPlantel(){
	return _plantel;
}
void Empresa::setNome(std::string nome){_nome=nome;}
void Empresa::setCNPJ(int CNPJ){_CNPJ=CNPJ;}
void Empresa::setPlantel(plantel p){_plantel=p;}

void Empresa::imprimeMediaSalarial(){
	std::cout << "Os "<< s_n_funcionarios;
	std::cout << " geram uma folha de $" << s_total_salario;
	std::cout << ". Média de $" << s_total_salario/s_n_funcionarios;
	std::cout << " por funcionário." << std::endl; 
}

void Empresa::imprimeEmpresas(){
	std::vector<Funcionario*> c_plantel;

	int f_cont = 0;
	float f_salario = 0.0;

	std::cout << std::endl << std::endl << "+-------------------------------------+";
	std::cout << std::endl << "+--Lista de funcionários por empresa--+";
	std::cout << std::endl << "+-------------------------------------+"<<std::endl;
	for(unsigned int e=0; e<s_empresas.size(); e++){
		c_plantel = s_empresas[e]->getPlantel();

		for(unsigned int f=0; f<c_plantel.size(); f++){
			f_cont = f_cont + 1;
			std::cout << std::setw(3) << f_cont;
			std::cout << std::setw(10) << s_empresas[e]->getNome();
			std::cout << std::setw(10) <<  c_plantel[f]->getNome();
			std::cout << std::setw(8) << "$" << c_plantel[f]->getSalario() << std::endl;
			f_salario = f_salario+ c_plantel[f]->getSalario();
		}
	}

	std::cout << std::endl << std::endl << "+---------------------------------------------+";
	std::cout << std::endl << "+--Sumário da folha de pagamento por empresa--+";
	std::cout << std::endl << "+---------------------------------------------+"<<std::endl;
	float f_salario_empresa = 0.0;
	for(unsigned int e=0; e<s_empresas.size(); e++){
		c_plantel = s_empresas[e]->getPlantel();
		f_salario_empresa = 0.0;
		for(unsigned int f=0; f<c_plantel.size(); f++)
			f_salario_empresa = f_salario_empresa + c_plantel[f]->getSalario();
		std::cout << "Empresa " << s_empresas[e]->getNome() << "\tN: " << c_plantel.size() << "\tTotal: " << f_salario_empresa << "\tMédia: " << f_salario_empresa/c_plantel.size()<<std::endl;
	}

	std::cout << std::endl << std::endl << "+-----------------+";
	std::cout << std::endl << "+--Sumário geral--+";
	std::cout << std::endl << "+-----------------+"<<std::endl;
	std::cout << "# empresas: " <<s_empresas.size() << std::endl;
	std::cout << "# funcionarios: "<< f_cont<< std::endl;
	std::cout << "Média salarial: " << f_salario/f_cont << std::endl;
}

void Empresa::aumentarSalario(float pct){
	float novo_salario;
	for(unsigned int f=0; f<_plantel.size(); f++){
		novo_salario = _plantel[f]->getSalario()*(1+pct);
		s_total_salario = s_total_salario + novo_salario - _plantel[f]->getSalario();
		_plantel[f]->setSalario(novo_salario);
	}
}
bool Empresa::addFuncionario(){
	Funcionario* novo = new Funcionario();
	std::cin >> *novo;
	for(unsigned int f=0; f<_plantel.size();f++){
		if(*novo==*_plantel[f]){
			std::cerr << std::endl <<"\033[1;47;4;31m";
			std::cerr << "[-Wfunc_repeat] ";
			std::cerr << "A empresa já contratou alguém com esse nome.";
			std::cerr << "\033[0m";
			return 0;
		}
	}
	_plantel.push_back(novo);
	s_n_funcionarios++;
	s_total_salario = s_total_salario + novo->getSalario();
	return true;
}

std::ostream& operator<<(std::ostream& o, Empresa &e){
	o << std::endl;
	o << "++----Plantel da empresa " << e.getNome() << " CNPJ= " << e.getCNPJ() <<std::endl;
	o << "++----Nome------+----Salario---++" << std::endl;
	for(unsigned int f=0; f<e._plantel.size(); f++){
		o << "|| ";
		o << std::setw(12) << e._plantel[f]->getNome() << " | ";
		o << std::setw(12) << e._plantel[f]->getSalario() << " ||";
		o << std::endl;
	}
	o << "----------------+---------------+" << std::endl;
	return o; 
}


std::istream& operator>>(std::istream& i, Empresa &e){
	std::string nome;
	int CNPJ;
	
	std::cout << std::endl <<  "@ Formulario nova empresa" << std::endl;
	
	std::cout << "\tNome: ";
	i >> nome;

	std::cout << "\tCNPJ: ";
	i >> CNPJ;

	e.setNome(nome);
	e.setCNPJ(CNPJ);

	int n = 0;
	std::cout << std::endl << "Quantos funcionários? ";
	std::cin >> n;
	std::cout << n;
	for(int i=0; i<n; i++)
		e.addFuncionario();

	return i;
}
