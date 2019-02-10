adopt: Animal.o CuacsAPI.o FileOpenException.o FileStorageManager.o PathFinder.o PersistentStorageAPI.o Serializer.o addanimal.o MainWindow.o PostLoginClient.o PostLoginStaff.o ViewAnimals.o main.o
	g++ -std=c++17 -o adopt Animal.o CuacsAPI.o FileOpenException.o FileStorageManager.o PathFinder.o PersistentStorageAPI.o Serializer.o addanimal.o MainWindow.o PostLoginClient.o PostLoginStaff.o ViewAnimals.o main.o -lstdc++fs

CXXFLAGS = -lstdc++fs -std=c++17

Animal: Animal.h Profile.h Animal.cc
	g++ -c -lstdc++fs -std=c++17 Animal.cc

CuacsAPI: CuacsAPI.h Profile.h Animal.h PersistentStorageAPI.h CuacsAPI.cc
	g++ -c -lstdc++fs -std=c++17 CuacsAPI.cc

FileOpenException: FileOpenException.cc
	g++ -c -lstdc++fs -std=c++17 FileOpenException.cc

FileStorageManager: FileStorageManager.h FileOpenException.cc FileStorageManager.cc
	g++ -c -lstdc++fs -std=c++17 FileStorageManager.cc

PathFinder: PathFinder.h PathFinder.cc
	g++ -c -lstdc++fs -std=c++17 PathFinder.cc

PersistentStorageAPI: PersistentStorageAPI.h Serializer.h PathFinder.h StorageAdapter.h FileStorageManager.h Profile.h Animal.h PersistentStorageAPI.cc
	g++ -c -lstdc++fs -std=c++17 PersistentStorageAPI.cc

Serializer: Serializer.h Serializer.cc
	g++ -c -lstdc++fs -std=c++17 Serializer.cc

addanimal: addanimal.h ui_addanimal.h addanimal.cpp
	g++ -c -lstdc++fs -std=c++17 addanimal.cpp

MainWindow: mainwindow.h ui_mainwindow.h mainwindow.cpp
	g++ -c -lstdc++fs -std=c++17 mainwindow.cpp

PostLoginClient: postloginclient.h ui_postloginclient.h postloginclient.cpp
	g++ -c -lstdc++fs -std=c++17 postloginclient.cpp

PostLoginStaff: postloginstaff.h ui_postloginstaff.h postloginstaff.cpp
	g++ -c -lstdc++fs -std=c++17 postloginstaff.cpp

ViewAnimals: viewanimals.h ui_viewanimals.h viewanimals.cpp
	g++ -c -lstdc++fs -std=c++17 viewanimals.cpp

main: mainwindow.h main.cpp
	g++ -c -lstdc++fs -std=c++17 main.cpp


