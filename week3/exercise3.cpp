#include<iostream>
#include"funtion_hub.hpp"
using namespace std;
int main(){
    int data = 4;
    Node* head = nullptr; 
    init_nod(data,head);
    ins_at(9,head,2);
    traverseList(head);
    
}