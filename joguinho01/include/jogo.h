#ifndef _H_JOGO_H_
#define _H_JOGO_H_

#define MAX_JOGADORES 10
#define MAX_DADOS 5
class Dado;
class Jogador;
class Jogo{
	private:
		int _n_jogadores;
		int _n_dados;
		int _n_max_jogadores;
		int _n_max_dados;
		Jogador* _jogadores[MAX_JOGADORES];
		Dado* _dados[MAX_DADOS];
	public:	
		Jogo();
		Jogo(int njogadores, int ndados);

		int getNJogadores();
		int getNDados();

		int getMaxJogadores();
		int getMaxDados();

		void addDado(Dado *d);
		void addJogador(Jogador *j);
		void run();

		friend std::ostream& operator<<(std::ostream&o, Jogo &j);
};

#endif
