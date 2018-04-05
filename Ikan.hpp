#ifndef IKAN_HPP
#define IKAN_HPP

#include <iostream>
using namespace std;

#include "BendaAkuarium.hpp"
#include "Koin.hpp"

//Kelas ikan adalah kelas yang merupakan derived kelas dari benda akuarium dan merupakan base kelas dari piranha dan guppy
//Ikan sendiri punya atribut berupa koin yang akan di produksi waktu ikan tahan kenyang
//serta waktu yang akan mempertahankan ikan hidup sampai mati ketika sudah masuk fase lapar
//Juga memiliki atribut berupa waktumakan yang berrati menghitung setiap kali ikan makan untuk perubahan level dari ikan
//serta type yang berisi string yang menyimpan type dari ikan sendiri

class Ikan : public BendaAkuarium {
	private :
	  	Koin produksi;
	    bool lapar;
	    const int tahankenyang;
	  	int waktumakan;
	    const int hunger;
	    string type;
		const int radiusmakanan;
		Posisi pointtujuan;

	public :
	//ctor tanpa parameter dengan kondisi default yang akan didefenisikan kedepannya
  	Ikan();
	//cctor
    Ikan(const Ikan&);
	//dtor
    ~Ikan();
	//operator overloading untuk assignment
	Ikan& operator=(const Ikan&);
	
	//Mengembalikan koin yang diproduksi oleh ikan
    Koin getProduksi() const;
    //Mengembalikan kondisi ikan lapar menjadi true else false
	bool getLapar() const;
	//Mengembalikan waktu yang dibutuhkan sampai mencapai kondisi harus memakan/lapar
    int getTahanKenyang() const;
	//Mengembalikan banyak kali ikan makan yang digunakan untuk mengupdate level ikan kedepannya
    int getWaktuMakan() const;
	//Mengembalikan waktu yang dibutuhkan sampai mati karena kelaparan
	int getHunger() const;
	//Mengembalikan nilai point tujuan sebuah ikan
    Posisi getPointTujuan() const;
	//Mengembalikan type ikan apakah guppy atau piranha
    string getType() const;
    
    //prosedur untuk mengubah produksi koin dari ikan
    void setProduksi(Koin);
	//prosedur untuk mengubah kondisi lapar dari ikan
    void setLapar(bool);
	//prosedur untuk mengubah waktu makan dari ikan
    void setWaktuMakan(int);
    //Prosedur untuk mengubah point tujuan dari ikan
    void setPointTujuan(Posisi);
	
  	//virtual method untuk gerak ikan
	virtual void gerak();
	//virtual method untuk ikan makan
	virtual void makan();
	
};

#endif