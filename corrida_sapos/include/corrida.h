#ifndef _H_CORRIDA_H_
#define _H_CORRIDA_H_

#include<iostream>
#include "sapo.h"
#include "corrida.h"

class Corrida{
	private:
		int s_distancia;
		int s_nofSapos;
		int s_laps;
		Sapo * sapoList[99];
	
	public:
		Corrida(int distance);
		Corrida();
		~Corrida();

		void addSapo(Sapo* sapo);
		void run();
};


#endif
