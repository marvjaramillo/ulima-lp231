#include "util/tmp/linkedlist_full.hpp"
#include <iostream>
#include <cmath>
using namespace std;

/*
Node* power(Node* head, int exponent){
    Node* ptr = head;
    Node* ans = nullptr; //Lista de respuesta
    while (ptr != nullptr) {
        int element = ptr -> value;
        addLast(ans, pow(element, exponent));
        ptr = ptr next;
    }
    return ans;
}
*/

void power(Node* head, int exponent){
    Node* ptr = head;
    while (ptr != nullptr) {
        ptr->value = pow(ptr->value, exponent);
        ptr = ptr->next;
    }
}

int main(){
    Node* head = nullptr;
    addLast(head, 1);
    addLast(head, 2);
    addLast(head, 3);
    print(head);
    //print(power(head,2));
    power(head, 2);
    print(head);
    return 0;
}