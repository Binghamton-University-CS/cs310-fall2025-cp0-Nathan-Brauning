#include <iostream>
#include <stdlib.h>
#include "Animal.h"
#include "AnimalsInZoo.h"
using namespace std;

int main() {
   Animal *animal1 = new Animal("African Elephant", 1758);
   Animal animal2("Giant Panda", 1869);
   
   /* My Section */
   Animal animal3("Giraffe", 1757);

   delete animal1;
   animal1 = new Animal("Snow Leopard", 1777);

   /*animal2.display();*/
   animal1->display();
   /* My Section */
   animal3.display();

   delete animal1;
   
   AnimalsInZoo enclosure;
   enclosure.addAnimal(animal2);
   enclosure.display();
}
