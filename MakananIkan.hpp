#ifndef MAKANANIKAN_HPP
#define MAKANANIKAN_HPP

#include "BendaAkuarium.hpp"

class MakananIkan : public BendaAkuarium {
//Kelas Makanan Ikan ialah turunan dari kelas benda akuarium yang menyimpan 
//nilai nilai yang dimiliki oleh sebuah makanan ikan
	private :
  	static int jumlahmakananikan; //Mengembalikan jumlah makanan ikan yang ada pada akuarium
  public :
  	//Ctor
  	MakananIkan();

  	//Ctor
    MakananIkan(const MakananIkan&);
  	
    //Dtor
  	~MakananIkan();
    
	void gerak(); //Update attribut ketika makanan ikan bergerak
};

#endif