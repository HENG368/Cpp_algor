#include<iostream>
#include"funtion_hub.hpp"
using namespace std;
int main(){
    int data = 4;
    Node* head = nullptr;
    init_nod(data,head);
    search(head,3);
    traverseList(head);
    
}