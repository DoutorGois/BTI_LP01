#ifndef _SAPO_H_
#define _SAPO_H_

#include<random>

class Sapo{
	private:
		
		int nof_hops;
		int distance;
		int max_hop;

		std::random_device rd;
		std::default_random_engine gen;
		std::uniform_int_distribution<int> dis;

	public:
		Sapo();
		Sapo(int mh);
		Sapo(Sapo& s);
		//~Sapo();
		
		void hop2();
		int hop();
		int getDistance();
		int getNofHops();
		int getMaxHop();
		friend std::ostream& operator<<(std::ostream& o, Sapo const s);
};
#endif
