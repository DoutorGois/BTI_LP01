#include <iostream>
#include "dado.h"

Dado::Dado():rd(),gen(rd()),dis(1,6){
	_valor=6;	
}

Dado::Dado(int valor):rd(),gen(rd()),dis(1,6){
	_valor=valor;	
}
/*
Dado::Dado(Dado &dado){
	_valor
}
*/
int Dado::rolar(){
	return dis(gen);
}
