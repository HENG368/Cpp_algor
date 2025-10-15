#include <iostream>
#include"funtion_hub.hpp"
using namespace std;


int main() {
    int n = 10;
    Node* head = nullptr;
    init_nod(n,head);
    ins_front(10,head);
    traverseList(head);
    return 0;
}