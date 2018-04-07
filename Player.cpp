#include <iostream>
#include"Player.hpp"

using namespace std;
//Kelas Player adalah kelas yang digunakan untuk pemain yang akan memainkan game ini dengan atribut berupa jumlah koin yang digunakan juga sebagai score

//ctor
Player::Player(){
	jumlahkoin = 1000;
	banyaktelur = 0;
}
//ctor player dengan koin yang didefenisikan
Player::Player(int koin, int telur){
	jumlahkoin = koin;
	banyaktelur = telur;
}
//cctor
Player::Player(const Player& p){
	jumlahkoin = p.getJumlahKoin();
	banyaktelur = p.getBanyakTelur();
}
//tidak perlu dtor
//Player::~Player();

//operator overloading untuk assignment
Player& Player::operator=(const Player& p){
	jumlahkoin = p.getJumlahKoin();
	banyaktelur = p.getBanyakTelur();
	return *this;
}
//Mengembalikan Jumlah koin dari pemain
int Player::getJumlahKoin() const{
	return jumlahkoin;
}
//Mengubah nilai koin dari pemain
void Player::tambahKoin(int koin){
	jumlahkoin+=koin;
}

//Mengembalikan banyak telur dari pemain
int Player::getBanyakTelur() const{
	return banyaktelur;
}

//Mengubah banyak telur dari pemain
void Player::tambahTelur(){
	if(getJumlahKoin() > 50){
		banyaktelur++;
	}
}
