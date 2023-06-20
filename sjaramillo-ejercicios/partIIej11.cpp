#include "C:\Users\marvj\OneDrive\Documentos\ULIMA\ulima-lp231-1\s102-ejercicios\util\tmp\linkedlist_full.hpp"
#include <iostream>
using namespace std;

void combinelist(Node* head, Node* head1){
    bool duplicate = false;
    Node* ptr = head;
    Node* ptr1 = head1;
    
    while (ptr1 != nullptr) {
        bool duplicate = false;
        
        while (ptr != nullptr) {
            if (ptr1->value == ptr->value) {
                duplicate = true;
                break;
            }
            ptr = ptr->next;
        }
        if (!duplicate) {
            addLast(head, ptr1->value);
        }
        ptr1 = ptr1->next;
    }
}

int main(){
    Node* head = nullptr;
    addLast(head, 1);
    addLast(head, 2);
    addLast(head, 3);
    print(head);

    Node* head2 = nullptr;
    addLast(head2, 2);
    addLast(head2, 4);
    addLast(head2, 5);
    print(head2);

    combinelist(head,head2);
    print(head);
    return 0;
}