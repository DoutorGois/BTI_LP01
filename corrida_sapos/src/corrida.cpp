#include<iostream>
#include "sapo.h"
#include "corrida.h"

Corrida::Corrida(int i_distance):s_distancia(i_distance){
	s_nofSapos  = 0;
	s_laps      = 0;
}

Corrida::Corrida(){
	s_distancia = 200;
	s_nofSapos  = 0;
	s_laps      = 0;
}

void Corrida::addSapo(Sapo *sapo){
	sapoList[s_nofSapos++] = sapo;
	std::cout << (*sapo) <<std::endl;
}

void Corrida::run(){
	int round = 0;
	int nFinished = 0;
	while(nFinished < s_nofSapos){
		round++;
		std::cout << "------ Round #" << round << "(" << nFinished << ")" <<  std::endl;
		nFinished = 0;
		for(int s=0; s<s_nofSapos; s++){
			int c_distance = sapoList[s]->getDistance();
			if(c_distance<s_distancia) c_distance += sapoList[s]->hop();
			if(c_distance>=s_distancia) nFinished++;
			int c_nhops  = sapoList[s]->getNofHops();

			std::cout << "------------- Sapo #" << s << ": ";
			std::cout << c_distance << "/" << c_nhops << " =\t";
			std::cout << float(c_distance)/c_nhops <<  std::endl;
		}
	}
}
