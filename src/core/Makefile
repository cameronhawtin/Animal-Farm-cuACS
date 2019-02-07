main: Animal.o cuacsApi.o FileOpenException.o FileStorageManager.o PathFinder.o PersistantStorageAPI.o Profile.o Serializer.o
	g++ -o main Animal.o cuacsApi.o FileOpenException.o FileStorageManager.o PathFinder.o PersistantStorageAPI.o Profile.o Serializer.o

Animal: Animal.h Profile.h Animal.cc
	g++ -c Animal.cc
	
cuacsApi: cuacsApi.h Profile.h Animal.h PersistentStorageAPI.h cuacsApi.cc
	g++ -c -std=c++17 cuacsApi.cc
	
FileOpenException: FileOpenException.h FileOpenException.cc
	g++ -c FileOpenException.cc
	
FileStorageManager: FileStorageManager.h FileOpenException.cc FileStorageManager.cc
	g++ -c FileStorageManager.cc

PathFinder: PathFinder.h PathFinder.cc
	g++ -c PathFinder.cc

PersistentStorageAPI: PersistentStorageAPI.h Serializer.h PathFinder.h StorageAdapter.h FileStorageManager.h Profile.h Animal.h PersistentStorageAPI.cc
	g++ -c PersistentStorageAPI.cc

Profile: Profile.h Profile.cc
	g++ -c Profile.cc
	
Serializer: Serializer.h Serializer.cc
	g++ -c Serializer.cc
