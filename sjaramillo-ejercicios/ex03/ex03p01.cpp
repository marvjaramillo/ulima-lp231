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
/*------------------------------------------*/


//a
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

//b
void showAllProcessSamePriority(OSprocess* head, int searchpriority){
    OSprocess* ptr = head;
    bool found = false;
    while (ptr != nullptr){
        if (ptr -> prioridad == searchpriority){
            found = true;
            cout << endl;
            cout << "PROCESO(S) CON PRIORIDAD " << searchpriority << ":" << endl;
            printProcess(ptr);
        }
        ptr = ptr -> next;
    }
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


    showAllProcess(head);
    showAllProcessSamePriority(head, 1);
}



