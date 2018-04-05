#ifndef PLAYER_HPP
#define PLAYER_HPP

//Kelas Player adalah kelas yang digunakan untuk pemain yang akan memainkan game ini dengan atribut berupa jumlah koin yang digunakan juga sebagai score

class Player {
	private :
		int jumlahkoin;
	public :
		//ctor
		Player();
		//ctor player dengan koin yang didefenisikan
		Player(int);
		//cctor
		Player(const Player&);
		//tidak perlu dtor
		//~Player();
		//operator overloading untuk assignment
		Player& operator=(const Player&);
	
		//Mengembalikan Jumlah koin dari pemain
		int getJumlahKoin() const;
		//Mengubah nilai koin dari pemain
		void tambahkoin(int);
};
#endif
