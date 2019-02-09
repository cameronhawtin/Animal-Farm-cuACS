main: Animal.o CuacsAPI.o FileOpenException.o FileStorageManager.o PathFinder.o PersistentStorageAPI.o Serializer.o
	g++ -o -lstdc++fs -std=c++17 main Animal.o CuacsAPI.o FileOpenException.o FileStorageManager.o PathFinder.o PersistentStorageAPI.o Serializer.o

CXXFLAGS = -lstdc++fs -std=c++17

Animal: Animal.h Profile.h Animal.cc
	g++ -c -lstdc++fs -std=c++17 Animal.cc

CuacsAPI: CuacsAPI.h Profile.h Animal.h PersistentStorageAPI.h CuacsAPI.cc
	g++ -c -lstdc++fs -std=c++17 CuacsAPI.cc

FileOpenException: FileOpenException.h FileOpenException.cc
	g++ -c -lstdc++fs -std=c++17 FileOpenException.cc

FileStorageManager: FileStorageManager.h FileOpenException.cc FileStorageManager.cc
	g++ -c -lstdc++fs -std=c++17 FileStorageManager.cc

PathFinder: PathFinder.h PathFinder.cc
	g++ -c -lstdc++fs -std=c++17 PathFinder.cc

PersistentStorageAPI: PersistentStorageAPI.h Serializer.h PathFinder.h StorageAdapter.h FileStorageManager.h Profile.h Animal.h PersistentStorageAPI.cc
	g++ -c -lstdc++fs -std=c++17 PersistentStorageAPI.cc

Serializer: Serializer.h Serializer.cc
	g++ -c -lstdc++fs -std=c++17 Serializer.cc
