#include <iostream>
using namespace std;

class SistemaArchivos{
    private:
        string directorioRaiz;
        int espacioTotal;
        int espacioUtilizado;
        int espacioDisponible;
        int cantidadArchivos;
        int cantidadCarpetas;
        int tamanoMaximoArchivo;

    public:
        SistemaArchivos(string directorioRaiz, int espacioTotal, int tamanoMaximoArchivo){
            this-> directorioRaiz = directorioRaiz;
            this-> espacioTotal = espacioTotal;
            this-> tamanoMaximoArchivo = tamanoMaximoArchivo;
            this-> espacioDisponible = espacioTotal;
            this-> espacioUtilizado= 0;
            this-> cantidadArchivos = 0;
            this-> cantidadCarpetas = 0;
        }
    
    void print() {
        cout << "Directorio raiz: " << directorioRaiz << endl;
        cout << "Espacio total: " << espacioTotal << endl;
        cout << "Espacio utilizado: " << espacioUtilizado << endl;
        cout << "Espacio disponible: " << espacioDisponible << endl;
        cout << "Cantidad de archivos: " << cantidadArchivos << endl;
        cout << "Cantidad de carpetas: " << cantidadCarpetas << endl;
        cout << "Tamano maximo de archivo: " << tamanoMaximoArchivo << endl;
    }
};

int main() {
    SistemaArchivos* A1 = new SistemaArchivos("Directorio Raiz 1", 1000, 100);
    A1->print();
    return 0;
}
