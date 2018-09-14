#include "alunos.h"
#include<iostream>

Alunos::Alunos(std::string i_nome, std::string i_matricula, int i_idade, char i_sexo):s_nome(i_nome),s_matricula(i_matricula),s_idade(i_idade),s_sexo(i_sexo){}
Alunos::Alunos(){
	s_nome      = "Zé Ninguém";
	s_matricula = "00000-0";
	s_idade     = 0;
	s_sexo      = 'U';
}

std::string	Alunos::getNome(){
	return s_nome;
}
std::string	Alunos::getMatricula(){
	return s_matricula;
}
int		Alunos::getIdade(){
	return s_idade;
}
char		Alunos::getSexo(){
	return s_sexo;
}

void Alunos::setIdade(int i_idade){
	s_idade = i_idade;
}
void Alunos::setNome(std::string i_nome){
	s_nome = i_nome;
}
void Alunos::setMatricula(std::string i_matricula){
	s_matricula = i_matricula;
}
void Alunos::setSexo(char i_sexo){
	s_sexo = i_sexo;
}
void Alunos::print(){
	std::cout << "--- Ficha estudantil" << std::endl;
	std::cout << "# Matricula:\t" << s_matricula << std::endl;
	std::cout << "# Nome:\t" << s_nome << std::endl;
	std::cout << "# Sexo:\t" << s_sexo << std::endl;
	std::cout << "# Idade:\t" << s_idade << std::endl;
	std::cout << "--------------------" << std::endl;

}

