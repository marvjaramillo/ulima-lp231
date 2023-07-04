#include <iostream>
using namespace std;

class Rectangle{
    private:
        int x;
        int y;
        float width;
        float height;

    public:
        Rectangle(int x, int y, float w, float h){
            this->x = x;
            this->y = y;
            this->width = w;
            this->height = h;
        }
        float getArea(float w, float h){
            return w * h;
        }
        float getPerimeter(float w, float h){
            return 2 * (w + h);
        }
        void print(){
            cout << "Punto de origen: (" << x << "," << y << ")" << endl;
            cout << "Area del rectangulo: " << getArea(width,height) << " cm" << endl;
            cout << "Perimetro del rectangulo: " << getPerimeter(width,height) << " cm^2" << endl;
        }
};

int main(){
    Rectangle* r1 = new Rectangle(2,5,5.5,2.3);
    r1->print();
    return 0;
}