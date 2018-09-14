#include <iostream>
#include "sapo.h"

Sapo::Sapo():rd(),gen(rd()),dis(1,6){
	nof_hops = 0;
	distance = 0;
}
Sapo::Sapo(int mh):rd(),gen(rd()),dis(1,6){
	nof_hops = 0;
	distance = 0;
	max_hop = mh;
}
Sapo::Sapo(Sapo& s):rd(),gen(rd()),dis(1,6){
	nof_hops = s.getNofHops();
	distance = s.getDistance();
	max_hop  = s.getMaxHop();
}
int Sapo::hop(){
	nof_hops++;
	int jump_size = dis(gen);
	distance += jump_size;
	return jump_size;
}
void Sapo::hop2(){
	nof_hops++;
	int jump_size = dis(gen);
	distance += jump_size;
}

int Sapo::getDistance(){
	return distance;
}

int Sapo::getNofHops(){
	return nof_hops;
}

int Sapo::getMaxHop(){
	return max_hop;
}

std::ostream& operator<<(std::ostream& o, Sapo const s){
	o << "+Sapo"         << std::endl;
	o << "Distance:\t"   << s.distance << std::endl;
	o << "Hop length:\t" << s.max_hop  << std::endl;
	return o;
}

