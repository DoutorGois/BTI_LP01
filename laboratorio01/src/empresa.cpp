#include<iostream>
#include "funcionario.h"
#include "empresa.h"

Empresa::Empresa(){
	_nome = "José LTDA";
	_CNPJ = 1;
	_constructedBy = "Default";
}
Empresa::Empresa(int i_CNPJ):_CNPJ(i_CNPJ){
	_constructedBy = "CNPJ";
	_nome    = "José LTDA";
}
Empresa::Empresa(std::string i_nome):_nome(i_nome){
	_constructedBy = "Name";
	_CNPJ = 1;
}
Empresa::Empresa(std::string i_nome, float i_CNPJ){
	_constructedBy = "Both";
	_nome = i_nome;
	_CNPJ = i_CNPJ;
}
Empresa::Empresa(Empresa const &i_empresa){
	_constructedBy = "Copy";
	_nome = i_empresa.getNome();
	_CNPJ = i_empresa.getCNPJ();
}
Empresa::~Empresa(){
	std::cout << "A empresa " << _nome << " faliu. (" << _constructedBy << ")." << std::endl;
}

//Getters
std::string Empresa::getNome(){
	return _nome;
}

float Empresa::getCNPJ(){
	return _CNPJ;
}

//Setters
void Empresa::setNome(std::string i_nome){
	_nome = i_nome;
}

void Empresa::getCNPJ(float i_CNPJ){
	_CNPJ = i_CNPJ;
}

std::ostream& operator<<(std::ostream &o, Empresa const &e){
	o << "E:" << e.getNome() << std::endl;
	return o;
}

std::istream& operator>>(std::istream &i, Empresa const &e){
	return i;
}
