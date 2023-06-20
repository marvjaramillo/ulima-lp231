#include "C:\Users\marvj\OneDrive\Documentos\ULIMA\ulima-lp231-1\s102-ejercicios\util\tmp\linkedlist_full.hpp"
#include <iostream>
using namespace std;

Node* arrtolist(int arr[], int size) {
    Node* head = nullptr;
    for (int i = 0; i < size; i++) {
        addLast(head, arr[i]);
    }

    return head;
}

int main(){ 
    int arr[] = {1, 2, 3, 4, 500, 5};
    //datatype size = sizeof(array_name) / sizeof(array_name[index]);
    int size = sizeof(arr) / sizeof(arr[0]);
    Node* head = arrtolist(arr, size);
    print(head);

    return 0;
}