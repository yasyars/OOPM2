#ifndef BENDAAKUARIUM_HPP
#define BENDAAKUARIUM_HPP

#include "Movement.hpp"
#include "Posisi.hpp"

class BendaAkuarium : public Movement, public Posisi {
//Kelas Benda Akuarium ialah benda yang dapat berada pada aquarium
	public :
		BendaAkuarium(int x, int y, int arah, int kec);
    	virtual void gerak() = 0; //Prosedur ketika sebuah benda aquarium bergerak
};

#endif