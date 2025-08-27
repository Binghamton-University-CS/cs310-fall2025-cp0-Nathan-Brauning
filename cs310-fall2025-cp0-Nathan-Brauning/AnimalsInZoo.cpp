#include <iostream>
#include <stdlib.h>
#include "AnimalsInZoo.h"
using namespace std;

AnimalsInZoo::AnimalsInZoo() : numAnimals(0), animal() {}

AnimalsInZoo::AnimalsInZoo(Animal animalName, int number){
	animal = animalName;
	numAnimals = number;
}



void AnimalsInZoo::display() {
	if( numAnimals == 1){
		animal.display();
	}
	cout << Animal << " [" << numAnimals << "]" << endl;
}

void AnimalsInZoo::addAnimal(Animal a){
	numAnimals = 1;
	animal = a;
}
