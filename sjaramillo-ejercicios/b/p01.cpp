#include <iostream>
using namespace std;

class Person{
    private:
        string nombre;
        int edad;
    public:
        Person(string nombre, int edad){
            this->nombre = nombre;
            this->edad = edad;
        }
        void print(){
            cout << "Nombre: " << this->nombre << endl;
            cout << "Edad: " << this->edad << endl;
        }
};


int main(){
    Person* p1 = new Person("Sebastian", 22);
    Person* p2 = new Person("Juan Diego", 21);
    p1->print();
    p2->print();
    return 0;
}