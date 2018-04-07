#include <iostream>
#include "Koin.cpp"

using namespace std;

//Mengembalikan nilai jumlah koin
static Koin::int getJumlahKoin(){
	return jumlahkoin;
}

//Mengembalikan nilai dari sebuah koin
int Koin::getNilai(){
	return nilai;
}

//Untuk pergerakan dari sebuah koin
void Koin::gerak(){
	// will be done as soon as possible
}
