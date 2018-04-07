#include <iostream>
#include <cmath>
#include "Posisi.hpp"

using namespace std;

//Ctor
//Menginisiasi nilai x dan y dengan 0
Posisi::Posisi(){
    x = 0;
    y = 0;
}
//Menginisiasi nilai x dengan parameter int pertama dan nilai y dengan parameter int kedua
Posisi::Posisi(int a, int b){
    x = a;
    y = b;
}

// set
//Untuk mengubah nilai x dengan sebuah parameter
void Posisi::setX(int temp){
    x = temp;
}
//Untuk menbubah nilai y dengan integer
void Posisi::setY(int temp){
    y = temp;
}

//getter
//Untuk mengembalikan nilai x
int Posisi::getX() const{
    return x;
}
//Untuk mengembalikan nilai y
int Posisi::getY() const{
    return y;
}

//method
//Untuk menghitung jarak dari 2 posisi
float hitungjarak(Posisi p1, Posisi p2){
    return sqrt( pow(p1.getX()-p2.getX(), 2) + pow(p1.getY()-p2.getY(), 2) );
}
