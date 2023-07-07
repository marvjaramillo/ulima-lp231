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

    bool verified(int* array, int size){
        int total = 0;
        for (int i = 0; i < size; i++){
            if (array[i] > tamanoMaximoArchivo){
                return false;
            }
            total += array[i];
            if (total > espacioDisponible){
                return false;
            }
        }
        return true;
    }   
    
    void print() {
        cout << endl;
        cout << "Directorio raiz: " << directorioRaiz << endl;
        cout << "Espacio total: " << espacioTotal << endl;
        cout << "Espacio utilizado: " << espacioUtilizado << endl;
        cout << "Espacio disponible: " << espacioDisponible << endl;
        cout << "Cantidad de archivos: " << cantidadArchivos << endl;
        cout << "Cantidad de carpetas: " << cantidadCarpetas << endl;
        cout << "Tamano maximo de archivo: " << tamanoMaximoArchivo << endl;
        cout << endl;
    }
};

int main() {
    SistemaArchivos* A1 = new SistemaArchivos("Directorio Raiz 1", 1000, 100);
    A1->print();
    SistemaArchivos* A2 = new SistemaArchivos("Directorio Raiz 2", 10240, 1024);
    A2->print();
    

    int archivos[] = {1800, 1200, 9800};
    int size = sizeof(archivos) / sizeof(archivos[0]);
    bool result = A2 -> verified(archivos, size);

    if (result == 0) {
        cout << "Falso, no es posible almacenar todos los archivos del array en el sistema de archivos mencionado" << endl;
        cout << endl;
    } else {
        cout << "Verdadero, si es posible almacenar todos los archivos del array en el sistema de archivos mencionado" << endl;
        cout << endl;
    }

    return 0;
}





