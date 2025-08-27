#pragma once
#include <iostream>
#include <stdlib.h>
using namespace std;

class Animal {
   private:
   
        string species = "";
        unsigned int year_discovered = 0;
        
   public:
   
   	void display();
   	/* DEFINITION - GO TO .cpp FILE */
      	Animal(string speciesName, unsigned int discoveryYear);
      	Animal();

};
