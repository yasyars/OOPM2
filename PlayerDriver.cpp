#include<iostream>
#include"Player.hpp"

using namespace std;

int main(){
	Player Harry(10000);
	Player Habibi = Harry;
	Player Tony;
	Habibi.tambahkoin(200);
	cout<<"Jumlah Koin Harry: "<<Harry.getJumlahKoin()<<endl;
	cout<<"Jumlah Koin Habibi: "<<Habibi.getJumlahKoin()<<endl;
	cout<<"Jumlah Koin Tony: "<<Tony.getJumlahKoin()<<endl;
	return 0;
}