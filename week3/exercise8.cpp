#include<iostream>
#include"funtion_hub.hpp"
using namespace std;
int main(){
    int data = 4;
    Node* head = nullptr;
    init_nod(data,head);
    fina_swape(1,3,data,head);
    traverseList(head);
    
}