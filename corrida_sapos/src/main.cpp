#include<iostream>
#include <random>
#include "sapo.h"
#include <vector>
#include "corrida.h"

int main(int argc, char*argv[]){
	int runLength = 200;
	int nofFrogs  = 5;
	int maxLeap   = 10;

	if(argc>1) runLength = atoi(argv[1]);
	if(argc>2) nofFrogs  = atoi(argv[2]);
	if(argc>3) maxLeap   = atoi(argv[3]);

	/*runLength
	if(argc>1)
		for(int a=0; a<=argc; a++)
			std::cout << a << ":\t" << argv[a] << std::endl;
	*/
	std::cout<<"== Frog Run"                 << std::endl;
	std::cout<<"> Run lengt:"  << runLength << std::endl;
	std::cout<<"> # of Frogs:" << nofFrogs  << std::endl;
	std::cout<<"> Leap size:"  << maxLeap   << std::endl;
	std::cout<<std::endl;
	Corrida *frogRun = new Corrida(runLength);

	for(int s=0; s<nofFrogs; s++){
		frogRun->addSapo(new Sapo(maxLeap));
	}

	frogRun->run();

	return 1;
} 
