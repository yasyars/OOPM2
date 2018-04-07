#ifndef MOVEMENT_HPP
#define MOVEMENT_HPP

class Movement {
//Kelas Movement ialah kelas yang mengatur pergerakan dari sebuah benda, yang mempunyai 
//nilai kecepatan dan arah
	private :
  		int arah; //Arah gerak dari sebuah benda yang berisi sudut
    		int kecepatan; //Kecepatan dari sebuah benda
  	public :
		//Ctor
		Movement(); //Menginisiasi nilai arah = 0 dan kecepatan = 0
		Movement(int, int); //Menginisiasi nilai arah = x, dan kecepatan = y

		//setter
		void setArah(int); //Untuk mengubah arah dari benda
		void setKecepatan(int); //Untuk mengubah kecepatan dari benda

		//getter
		int getArah() const; //Untuk mengembalikan nilai arah dari benda
		int getKecepatan() const;// Untuk mengembalikan nilai kecepatan dari benda
};

#endif
