#ifndef CUACSAPI_H
#define CUACSAPI_H

class cuacsApi
{
	public:
		void int();
		list<Profile> getAnimals();
		bool addAnimal(string name, string animalType, string breed, int age, Gender gender, string color, Size size);
		void end();
	
	
	private:
		list<Profile> animals;
}