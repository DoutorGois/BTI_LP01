#ifndef _H_ALUNO_H
#define _H_ALUNO_H
#include<iostream>
class Alunos{
	private:
		std::string	s_nome;
		std::string	s_matricula;
		int		s_idade;
		char		s_sexo;
	public:
		Alunos(std::string i_nome, std::string i_matricula, int i_idade, char s_sexo);
		Alunos();
		~Alunos();
		
		std::string	getNome();
		std::string	getMatricula();
		int		getIdade();
		char		getSexo();

		void setIdade(int i_idade);
		void setNome(std::string i_nome);
		void setMatricula(std::string i_matricula);
		void setSexo(char i_sexo);

		void print();
};

#endif
