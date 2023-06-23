#include <iostream>
using namespace std;

/*------------------------------------------*/
struct OSprocess {
    int identificador;
    string descripcion;
    int prioridad;
    float tiempoCPU;
    OSprocess* next;
};

void printProcess(OSprocess* proc){
    cout << endl;
    cout << "Identificador del proceso: " << proc -> identificador << endl;
    cout << "Descripcion del proceso: " << proc -> descripcion << endl;
    cout << "Prioridad del proceso: " << proc -> prioridad << endl;
    cout << "Tiempo de CPU: " << proc -> tiempoCPU << " min"<< endl; 
    cout << "-----------------------" << endl;
}

void showAllProcess(OSprocess* head){
    OSprocess* ptr = head;
    while (ptr != nullptr){
            printProcess(ptr);
            ptr = ptr -> next;
        }
}

void addProcess(OSprocess* &head, OSprocess* newProc){
    if (head != nullptr){
        OSprocess* ptr = head;
        while (ptr -> next != nullptr){
            ptr = ptr -> next;
        }
        ptr -> next = newProc;
    } else {
        head = newProc;
    }
    newProc -> next = nullptr;
}
/*------------------------------------------*/

//c
//Considerando que 1 es de mayor prioridad
void sortByMinorPriority(OSprocess* &head){
    OSprocess* ptr = head;
    OSprocess* prev = nullptr;
    OSprocess* nextNode = nullptr;
    bool isSorted = false;

    while (!isSorted) {
        isSorted = true;
        ptr = head->next;
        prev = head;

        while (ptr != nullptr && ptr->next != nullptr) {
            nextNode = ptr->next;    
            if (ptr->prioridad < nextNode->prioridad) {
                ptr->next = nextNode->next;
                nextNode->next = ptr;
                prev->next = nextNode;
                isSorted = false;
            }
            prev = ptr;
            ptr = ptr->next;
        }
    }

    cout << endl;
    cout << "ORDEN DE MENOR A MAYOR PRIORIDAD: " << endl;
    cout << "(Donde el mayor valor es 1)" << endl;
}

//d
void addProcessSorted(OSprocess* &head, OSprocess* newProc) {
    if (newProc->prioridad > head->prioridad) {
        newProc->next = head;
        head = newProc;
    } else {
        addProcess(head, newProc);
    }
    cout << endl;
    cout << "PROCESO " << newProc -> identificador << " EN LISTA ORDENADA DE MENOR A MAYOR PRIORIDAD: " << endl;
}

int main(){
    OSprocess* head = new OSprocess();
    head -> identificador = 101;
    head -> descripcion = "Proceso 101";
    head -> prioridad = 3;
    head -> tiempoCPU = 3.2;

    OSprocess process2 = {303, "Proceso 303", 1, 2.0, nullptr};
    OSprocess process3 = {210, "Proceso 210", 2, 2.4, nullptr};
    OSprocess process4 = {129, "Proceso 129", 3, 1.5, nullptr};

    addProcess(head, &process2);
    addProcess(head, &process3);
    addProcess(head, &process4);

    //showAllProcess(head);

    sortByMinorPriority(head);
    showAllProcess(head);

    OSprocess process5 = {678, "Proceso 678", 4, 1.1, nullptr};
    addProcessSorted(head, &process5);
    showAllProcess(head);
}