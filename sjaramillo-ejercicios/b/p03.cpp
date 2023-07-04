#include <iostream>
#include <cmath>
using namespace std;

class Triangle{
    private:
        float x1, x2, x3;
        float y1, y2, y3;

    public:
        Triangle(float x1, float y1, float x2, float y2, float x3, float y3){
            this->x1 = x1;
            this->y1 = y1;
            this->x2 = x2;
            this->y2 = y2;
            this->x3 = x3;
            this->y3 = y3;
        }
        float getPerimeter(float x1, float y1, float x2, float y2, float x3, float y3){
            float AB = sqrt(pow((x2-x1),2) + pow((y2-y1),2));
            float BC = sqrt(pow((x3-x2),2) + pow((y3-y2),2));
            float CA = sqrt(pow((x1-x3),2) + pow((y1-y3),2));
            return AB + BC + CA;
        }
        void print(){
            cout << "Perimetro del triangulo: " << getPerimeter(x1, y1, x2, y2, x3, y3) << " cm"<< endl;
        }
};

int main(){
    Triangle* t1 = new Triangle(-4,2,0,-1,3,3);
    t1->print();
    return 0;
}