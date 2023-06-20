#include "C:\Users\marvj\OneDrive\Documentos\ULIMA\ulima-lp231-1\s102-ejercicios\util\tmp\linkedlist_full.hpp"
#include <iostream>
using namespace std;

void onlyEndFour (Node* &head){
    Node* ptr = head;
    Node* prev = nullptr;
    
    while(ptr != nullptr ){
        if(ptr->value % 10 != 4){
            if(ptr == head){
                head = head -> next;
                delete ptr;
                ptr = head;
            } else {
                prev->next = ptr->next;
                delete ptr;
                ptr = prev->next;
            }
        } else {
            prev = ptr;
            ptr = ptr->next;
        }
    }
}

int main(){
    Node* head = nullptr;
    addLast(head, 1);
    addLast(head, 2);
    addLast(head, 14);
    addLast(head, 4);
    addLast(head, 5);
    print(head);
    onlyEndFour(head);
    print(head);

    return 0;
}