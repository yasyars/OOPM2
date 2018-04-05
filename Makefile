# Masukkan semua file cpp Anda
OBJS = main.cpp oop.cpp

CC = g++
COMPILER_FLAGS = -std=c++11 -Wall -O2
LINKER_FLAGS = -lSDL2 -lSDL2_image -lSDL2_ttf
OBJ_NAME = oopquarium
libc = MakananIkan.cpp BendaAkuarium.cpp

all : $(OBJS)
	$(CC) $(OBJS) $(COMPILER_FLAGS) $(LINKER_FLAGS) -o $(OBJ_NAME)

makananikan : driver.cpp $(libc)
	$(CC) driver.cpp $(libc) $(COMPILER_FLAGS) -o driver

clean :
	rm -rf *.o $(OBJ_NAME)
