#include "funcionario.h"
#include "empresa.h"
#include<iostream>
#include<string>

Funcionario::Funcionario():_nome("José"),_salario(2200.0){}
Funcionario::Funcionario(std::string nome, float salario):_nome(nome),_salario(salario){}
Funcionario::Funcionario(Funcionario &f){
	_nome=f.getNome();
	_salario=f.getSalario();
}
Funcionario::~Funcionario(){
	std::cout << "RIP Funcionario";
}

std::string Funcionario::getNome(){ return _nome;}
float Funcionario::getSalario(){ return _salario;}
void Funcionario::setSalario(float salario){ _salario=salario;}
void Funcionario::setNome(std::string nome){ _nome=nome;}

bool Funcionario::operator==(Funcionario &f){
	if(_nome==f.getNome())
		return true;
	return false;
}

std::ostream& operator<<(std::ostream& o, Funcionario &f){
	o << f.getNome() << "($" << f.getSalario() << ")" << std::endl;
	return o;
}

std::istream& operator>>(std::istream& i, Funcionario &f){
	std::string nome;
	float salario;
	
	std::cout << std::endl << "+ Formulario novo funcionario" << std::endl;
	
	std::cout << "\tNome: ";
//	std::getline(i,nome);
	i >> nome;
	std::cout << nome;

	std::cout << "\tSalario: ";
	i >> salario;
	std::cout << salario;

	f.setNome(nome);
	f.setSalario(salario);

	return i;
}

Empresa& Funcionario::operator+(Funcionario &f){
	Empresa *empresa = new Empresa();

	empresa->setNome(this->_nome.substr(0,1) + "&"+ f.getNome().substr(0,1) + " Cia");
	empresa->setCNPJ(0);
	empresa->addFuncionario(&f);
	empresa->addFuncionario(this);

	return *empresa;
}

Empresa& Funcionario::operator+(Empresa &e){

	e.setNome(this->_nome.substr(0,1) + "&" + e.getNome() + " Cia");
	e.addFuncionario(this);

	return e;
}


