#include<iostream>
#include"Player.hpp"

using namespace std;
//Kelas Player adalah kelas yang digunakan untuk pemain yang akan memainkan game ini dengan atribut berupa jumlah koin yang digunakan juga sebagai score

//ctor
Player::Player(){
	jumlahkoin = 1000;
}
//ctor player dengan koin yang didefenisikan
Player::Player(int koin){
	jumlahkoin = koin;
}
//cctor
Player::Player(const Player& p){
	jumlahkoin = p.getJumlahKoin();
}
//tidak perlu dtor
//Player::~Player();
//operator overloading untuk assignment
Player& Player::operator=(const Player& p){
	jumlahkoin = p.getJumlahKoin();
}
//Mengembalikan Jumlah koin dari pemain
int Player::getJumlahKoin() const{
	return jumlahkoin;
}
//Mengubah nilai koin dari pemain
void Player::tambahkoin(int koin){
	jumlahkoin+=koin;
}