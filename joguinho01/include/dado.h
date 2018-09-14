#ifndef _H_DADO_H_
#define _H_DADO_H_
#include<random>
class Dado{
	private:
		int _valor;

		std::random_device rd;
		std::default_random_engine gen;
		std::uniform_int_distribution<int> dis;
	public:
		Dado();
		Dado(int valor);
		Dado(Dado& d);
		
		int rolar();
};

#endif
