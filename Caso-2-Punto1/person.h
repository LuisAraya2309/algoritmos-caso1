#ifndef _person_
#define _person_

#include<iostream>

using namespace std;

class Person {
    private:
        int age;
        string name;

    public: 
        Person(int pAge, string pName) {
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