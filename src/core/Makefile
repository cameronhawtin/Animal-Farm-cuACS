main: Animal.o LinkedList.o
	g++ -o main Animal.o LinkedList.o

Animal: Animal.h Animal.cc
	g++ -c Animal.cc

LinkedList: LinkedList.h LinkedList.cc
	g++ -c LinkedList.cc

clean: 
	rm main Animal.o LinkedList.o
