#include <iostream>
#include <cmath>
using namespace std;
#define PI 3.141

class Circle{
    private:
        float r;

    public:
        Circle(float r){
            this->r = r;
        }
        float getArea(float r){
            return PI * r * r;
        }
        float getCircumference(float r){
            return 2 * PI * r;
        }
        void print(){
            cout << getArea(r) << endl;
            cout << getCircumference(r) << endl;
        }
};

int main(){
    Circle* c1 = new Circle(7);
    c1->print();
    return 0;
}