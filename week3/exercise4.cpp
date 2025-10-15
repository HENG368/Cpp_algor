#include<iostream>
#include"funtion_hub.hpp"
using namespace std;
int main(){
    int data = 8;
    Node* head = nullptr; 
    init_nod(data,head);
    Delete(0,head,data);
    traverseList(head);
    
    
    
    
}