#ifndef _animal_
#define _animal_

#include<iostream>

using namespace std;

struct Animal {
		int age;
        string name; 
        Animal(int pAge, string pName) {
            this->age = pAge;
            this->name = pName;
        }

        void setAge(int pAge) {
            this->age = pAge;
        }
        
        void setName(string pName) {
            this->name = pName;
        }

        int getAge() {
            return this->age;
        }

        string getName() {
            return this->name;
        }
};

#endif
