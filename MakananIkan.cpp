#include "MakananIkan.hpp"
#include "oop.hpp"

//Ctor
MakananIkan::MakananIkan(int x){
	this->x = x;
	this->y = 0;
}


void MakananIkan::gerak(){ //Update attribut ketika makanan ikan bergerak
	if(y<=SCREEN_HEIGHT){
		y += speed*sec_since_last;
	}
}