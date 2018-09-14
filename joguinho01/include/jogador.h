#ifndef _H_JOGADOR_H_
#define _H_JOGADOR_H_
#include <iostream>
class Jogador{
	private:
		std::string _nome;
		bool _ativo;
	public:
		Jogador();
		Jogador(std::string nome);
		Jogador(Jogador &jogador);

		std::string getNome();
		bool getAtivo();
};
#endif
