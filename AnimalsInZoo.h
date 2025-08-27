#pragma once
#include <iostream>
#include <stdlib.h>
#include "Animal.h"

using namespace std;

class AnimalsInZoo {
   private:
   
        int numAnimals;
        Animal animal;
        
   public:
   
   	void display();
   	
   	void addAnimal(Animal a);
   
      	AnimalsInZoo(Animal animalName, int number);
      	AnimalsInZoo();

};

