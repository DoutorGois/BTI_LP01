#include<iostream>
#include "empresa.h"
#include "funcionario.h"
#include <typeinfo>

int main(){
	Funcionario funcionarios[4];
//	Empresa empresas[3];
//	std::cout <<  funcionarios << std::endl;
//	std::cout << *funcionarios << std::endl;
 	std::cout << &funcionarios << std::endl;
	return 1;

	/*
	for(int f=0;f<4;f++)
		funcionarios[f] = new Funcionario("Okay",(f+1)*300.0);

	for(int e=0;e<3;e++){
		empresas[e] = new Empresa();
	}

	funcionarios[2]->setSalario(1200);
	std::cout << std::endl;
	for(int f=0;f<4;f++){
		std::cout << funcionarios[f] <<std::endl;
		std::cout << *funcionarios[f] << std::endl;
	}
	std::cout << std::endl;

	std::cout << "   1  2  3  4"<<std::endl;
	std::cout << "-------------"<<std::endl;
	for(int f1=0;f1<4;f1++){
		std::cout << f1 << "| "; 
		for(int f2=0;f2<4;f2++){
			std::cout << (*funcionarios[f1]==*funcionarios[f2]) << " ";	
		}
		std::cout << std::endl;
	}

	for(int f=0; f<4; f++){
		std::cout<<std::endl;
		delete(funcionarios[f]);
	}
	*/
	return 0;
}
