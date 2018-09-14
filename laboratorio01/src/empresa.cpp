#include<iostream>
#include "funcionario.h"
#include "empresa.h"

Empresa::Empresa(){
	s_nome = "José LTDA";
	s_CNPJ = 1;
}
Empresa::Empresa(int i_CNPJ):s_CNPJ(i_CNPJ){
	s_nome    = "José LTDA";
}
Empresa::Empresa(std::string i_nome):s_nome(i_nome){
	s_CNPJ = 1;
}
Empresa::Empresa(std::string i_nome, float i_CNPJ){
	s_nome = i_nome;
	s_CNPJ = i_CNPJ;
}
Empresa::Empresa(Empresa &i_empresa){
	s_nome = i_empresa.getNome();
	s_CNPJ = i_empresa.getCNPJ();
}
Empresa::~Empresa(){
	std::cout << "A empresa " << s_nome << " faliu." << std::endl;
}

//Getters
std::string Empresa::getNome(){
	return s_nome;
}

float Empresa::getCNPJ(){
	return s_CNPJ;
}
//Setters
void Empresa::setNome(std::string i_nome){
	s_nome = i_nome;
}

void Empresa::getCNPJ(float i_CNPJ){
	s_CNPJ = i_CNPJ;
}

std::ostream& operator<<(std::ostream &o, Empresa e){
	o << "E:" << e.getNome() << std::endl;
	return o;
}

std::istream& operator>>(std::istream &i, Empresa e){
	return i;
}
