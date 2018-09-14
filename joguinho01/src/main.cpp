#include<iostream>
#include "jogo.h"
#include "dado.h"
#include "jogador.h"

int main(){

	Jogo *restaum = new Jogo(5,3);

	std::cout << "Jogo =" << restaum->getNJogadores() << std::endl;
	std::cout << *restaum;

	for(int j=0; j<restaum->getMaxJogadores();j++){
		Jogo.addJogador();
	}
	return 1;

	Dado *dado = new Dado();

	std::cout << dado->rolar() << std::endl;

	return 0;
}
