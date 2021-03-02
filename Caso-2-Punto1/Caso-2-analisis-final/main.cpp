/*
Instituto Tecnol�gico de Costa Rica
Escuela de Computaci�n
An�lisis de Algortimos
Profesor: Rodrigo N��ez N��ez
Estudiantes: 
Luis Carlos Araya Mata Carn�: 2020205005
Kendall Cascante Mesén Carnet: 2019039628
Guillermo Coto �lvarez Carnet: 2016134133
------
------
Grupo: 1
I Semestre
2021
Martes 2 de marzo de 2021
2/03/2021
*/

//Includes
#include <iostream>
#include "node.h"
#include "list.h"
#include "person.h"
#include "queue.h"
#include "stack.h"
#include "animal.h"

using namespace std;

//Main Function
int main() {
    //Creating objects to fill our data structures
    Person p1(19, "Luis");
    Person p2(5, "Rodrigo");
    Person p3(19, "Arturo");
    Person p4(30, "Juan José");
    Person p5(19, "Carlos");
    
    //Creating our data structures
    List<Person> list;
    Queue<Person> queue; 
    Stack<Person> stack;

    //Filling the data structures
    
    //List
    list.addToBeginning(p1);
    list.addToBeginning(p2);
    list.addToBeginning(p2);
    list.addToBeginning(p3);
    list.addToBeginning(p4);
    list.addToBeginning(p5);
    list.addToEnd(p5);
    list.addToEnd(p3);
    list.addToEnd(p1);
    
    //Queue
    queue.enqueue(p1);
    queue.enqueue(p2);
    queue.enqueue(p3);
    queue.enqueue(p4);
    
    //Stack
    stack.push(p1);
    stack.push(p2);
    stack.push(p3);
    stack.push(p4);
	
	cout<<"\nList before removing elements: "<<endl;
    while(list.hasMore()) {
        Person persona = list.getNext();
        cout << "Nombre: " << persona.getName() << "- Edad: " <<persona.getAge() << endl;
    }
    list.removeFirstElement();
    list.removeLastElement();
    cout << "\nList after removing elements: " << endl;
    while(list.hasMore()) {
        Person persona = list.getNext();
        cout << "Nombre: " << persona.getName() << "- Edad: " <<persona.getAge() << endl;
    }
    cout << "----------------" << endl; 

    cout<<"\nQueue before using the dequeue method: "<<endl;
    while(queue.hasMore()){
    	Person persona = queue.getNext();
    	cout << "Nombre: " << persona.getName() << "- Edad: " <<persona.getAge() << endl;
	}
	cout << "----------------" << endl; 
    cout<<"Dequeued element: "<<endl;
    queue.dequeue();
    cout << "----------------" << endl; 
    cout<<"Queue after using the dequeue method: "<<endl;
    while(queue.hasMore()){
    	Person persona = queue.getNext();
    	cout << "Nombre: " << persona.getName() << "- Edad: " <<persona.getAge() << endl;
	}
	cout << "----------------" << endl; 

    cout<<"\nStack before using the pop method: "<<endl;
    while(stack.hasMore()){
    	Person persona = stack.getNext();
    	cout << "Nombre: " << persona.getName() << "- Edad: " <<persona.getAge() << endl;
	}
	cout << "----------------" << endl; 
    cout<<"Popped element: "<<endl;
    stack.pop();
    cout << "----------------" << endl; 
    cout<<"Stack after using the pop method: "<<endl;
    while(stack.hasMore()){
    	Person persona = stack.getNext();
    	cout << "Nombre: " << persona.getName() << "- Edad: " <<persona.getAge() << endl;
	}
    cout << "----------------" << endl; 
    
    cout << "Final" << endl;
    cout<<"Now we are going to test it with structs----------------------------------------------------------"<<endl;
    
    //Creating objects to fill our data structures
    Animal a1(19, "Scott");
    Animal a2(5, "Maddy");
    Animal a3(19, "Carter");
    Animal a4(30, "Moon");
    Animal a5(19, "Ibai");
    
    //Creating our data structures
    List<Animal> list2;
    Queue<Animal> queue2; 
    Stack<Animal> stack2;

    //Filling the data structures
    
    //List
    list2.addToBeginning(a1);
    list2.addToBeginning(a2);
    list2.addToBeginning(a2);
    list2.addToBeginning(a3);
    list2.addToBeginning(a4);
    list2.addToBeginning(a5);
    list2.addToEnd(a5);
    list2.addToEnd(a3);
    list2.addToEnd(a1);
    
    //Queue
    queue2.enqueue(a1);
    queue2.enqueue(a2);
    queue2.enqueue(a3);
    queue2.enqueue(a4);
    
    //Stack
    stack2.push(a1);
    stack2.push(a2);
    stack2.push(a3);
    stack2.push(a4);
	
	cout<<"\nList before removing elements: "<<endl;
    while(list2.hasMore()) {
        Animal persona = list2.getNext();
        cout << "Nombre: " << persona.getName() << "- Edad: " <<persona.getAge() << endl;
    }
    list2.removeFirstElement();
    list2.removeLastElement();
    cout << "\nList after removing elements: " << endl;
    while(list2.hasMore()) {
        Animal persona = list2.getNext();
        cout << "Nombre: " << persona.getName() << "- Edad: " <<persona.getAge() << endl;
    }
    cout << "----------------" << endl; 

    cout<<"\nQueue before using the dequeue method: "<<endl;
    while(queue2.hasMore()){
    	Animal persona = queue2.getNext();
    	cout << "Nombre: " << persona.getName() << "- Edad: " <<persona.getAge() << endl;
	}
	cout << "----------------" << endl; 
    cout<<"Dequeued element: "<<endl;
    queue2.dequeue();
    cout << "----------------" << endl; 
    cout<<"Queue after using the dequeue method: "<<endl;
    while(queue2.hasMore()){
    	Animal persona = queue2.getNext();
    	cout << "Nombre: " << persona.getName() << "- Edad: " <<persona.getAge() << endl;
	}
	cout << "----------------" << endl; 

    cout<<"\nStack before using the pop method: "<<endl;
    while(stack2.hasMore()){
    	Animal persona = stack2.getNext();
    	cout << "Nombre: " << persona.getName() << "- Edad: " <<persona.getAge() << endl;
	}
	cout << "----------------" << endl; 
    cout<<"Popped element: "<<endl;
    stack2.pop();
    cout << "----------------" << endl; 
    cout<<"Stack after using the pop method: "<<endl;
    while(stack2.hasMore()){
    	Animal persona = stack2.getNext();
    	cout << "Nombre: " << persona.getName() << "- Edad: " <<persona.getAge() << endl;
	}
	
    cout << "Final" << endl; 
    

    
    
    
    return 0;
}
