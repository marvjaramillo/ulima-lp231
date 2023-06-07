#include <iostream>

using namespace std;

struct Node{
    int value;
    Node* next;
};

int main(){
    //Creamos el nuevo nodo (asignacion dinamica)
    Node* head = new Node();
    
    //Asignamos el valor al nodo
    (*head).value = 12;

    //Otra forma
    head->value = 12;
    
    Node* node1 = new Node();
    node1->value = 18;
    head->next = node1;
    
    Node* node2 = new Node();
    node2->value = 35;
    node1->next = node2;

    node2->next = nullptr;

    Node* ptr = head;

    while(ptr != nullptr){
        cout << ptr->value << endl;    
        ptr = ptr->next;
    }

    return 0;
}