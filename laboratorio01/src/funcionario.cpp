#include<iostream>
#include "funcionario.h"
#include "empresa.h"

Funcionario::Funcionario(){
	_nome    = "José";
	_salario = 2200.0;
	_constructedBy = "Padrão";
}
Funcionario::Funcionario(float i_salario):_salario(i_salario){
	_constructedBy = "Parametrizado Float";
	_nome    = "José";
}
Funcionario::Funcionario(std::string i_nome):_nome(i_nome){
	_constructedBy = "Parametrizado String";
	_salario = 2200.0;
}
Funcionario::Funcionario(std::string i_nome, float i_salario){
	_constructedBy = "Parametrizado String Float";
	_nome = i_nome;
	_salario = i_salario;
}
Funcionario::Funcionario(Funcionario &i_funcionario){
	_constructedBy = "Cópia";
	_nome = i_funcionario.getNome();
	_salario = i_funcionario.getSalario();
}
Funcionario::~Funcionario(){
	std::cout << "✠ (" << _constructedBy << ")" << std::endl;
//	std::cout << "@ funcionári@ " << s_nome << " morreu." <<std::endl;
//	std::cout << "(" << this << "  " <<(*this) << ")" << std::endl;
}

//Getters
std::string Funcionario::getNome(){
	return _nome;
}

float Funcionario::getSalario(){
	return _salario;
}
//Setters
void Funcionario::setNome(std::string i_nome){
	_nome = i_nome;
}

void Funcionario::setSalario(float i_salario){
	_salario = i_salario;
}

Funcionario Funcionario::operator+(Funcionario &f){
	Funcionario* out = new Funcionario();
	out->_nome = this->_nome;
	out->_salario = this->_salario + f._salario;
	return *out;
}

//Operator overcharge
bool Funcionario::operator==(Funcionario f){
	if ((_nome.compare(f.getNome())==0) == (_salario==f.getSalario()))
		return true;
	return false;
}

bool Funcionario::operator==(Funcionario& f){
	if ((_nome.compare(f.getNome())==0) == (_salario==f.getSalario()))
		return true;
	return false;
}

std::ostream& operator<<(std::ostream &o, Funcionario &f){
	o << "F:" << f.getNome() << "($" << f.getSalario() << ")";
	return o;
}
std::istream& operator>>(std::istream &i, Funcionario &f){
	return i;
}
/*
bool Funcionario::operator=(Funcionario f){
	if ((s_nome.compare(f.getNome())==0) == (s_salario==f.getSalario()))
		return true;
	return false;
}

Empresa& Funcionario::operator+(Funcionario f){
	plantel novo_plantel;
	novo_plantel.push_back(*this);
	novo_plantel.push_back(e);
	return Empresa(novo_plantel);
}

Empresa Funcionario::operator+(Empresa &e){
	e.addFuncionario(*this);
	return e;
}
*/
/*
std::ostream& operator<<(std::ostream &o, Funcionario &f){
	o << "F:" << f.getNome() << "($" << f.getSalario() << ")";
	return o;
}
std::ostream& operator<<(std::ostream &o, Funcionario *f){
	o << "F:" << f.getNome() << "($" << f.getSalario() << ")";
	return o;
}
*/

