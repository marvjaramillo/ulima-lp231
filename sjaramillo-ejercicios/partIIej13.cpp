#include "C:\Users\marvj\OneDrive\Documentos\ULIMA\ulima-lp231-1\s102-ejercicios\util\tmp\linkedlist_full.hpp"
#include <iostream>
using namespace std;

Node* reverseLinkedlist(Node* head) {
    if (head == nullptr || head->next == nullptr) {
        return head;
    }
    
    Node* reversed = reverseLinkedlist(head->next);
    
    head->next->next = head;
    head->next = nullptr;
    
    return reversed;
}



int main(){ 
    Node* head = nullptr;
    addLast(head, 31);
    addLast(head, 22);
    addLast(head, 73);
    print(head);

    head = reverseLinkedlist(head);
    print(head);

    return 0;
}