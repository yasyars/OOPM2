#ifndef POSISI_HPP
#define POSISI_HPP

class Posisi {
//Kelas Posisi ialah kelas yang menyimpan posisi suatu benda di akuarium
  	protected :
      	int x; //Untuk menyimpan kordinat x dari sebuah benda
        int y; //Untuk menyimpan kordinat y dari sebuah benda
    public :
        //Ctor
      	Posisi(); //Menginisiasi nilai x dan y dengan 0 
        Posisi(int, int); //Menginisiasi nilai x dengan parameter int pertama dan nilai y dengan parameter int kedua
        //cctor
        Posisi(const Posisi&);
        //dtor
        ~Posisi();
        
        //operator=
        Posisi& operator=(const Posisi&);

        // sett
        void setX(int); //Untuk mengubah nilai x dengan sebuah parameter
        void setY(int); //Untuk menbubah nilai y dengan integer
        
        //getter
        int getX() const; //Untuk mengembalikan nilai x
        int getY() const; //Untuk mengembalikan nilai y
        
        //method
        friend float hitungjarak(Posisi y, Posisi x); //Untuk menghitung jarak dari 2 posisi
};

#endif