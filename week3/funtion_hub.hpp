#ifndef Funt_Hub
#define Funt_Hub
#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node(int new_data ) {
        this->data = new_data;
        this->next = nullptr;
    }
};

void traverseList(Node* head) {
    while (head != nullptr) {
        cout << head->data;
        if (head->next != nullptr)  
            cout << " -> ";
        head = head->next;
    }
    cout << endl;
}


void init_nod(int n, Node*& head) {
    head = nullptr;
    Node* tail = nullptr;
    for (int i = 0; i < n; i++) {
        Node* cur = new Node(i);
        if (head == nullptr) {
            head = cur;      
            tail = cur;      
        } else {
            tail->next = cur; 
            tail = cur;       
        }
    }
}
void ins_front(int val,Node*& head){
    Node* Newnode = new Node(val);
    Newnode->next = head;
    head = Newnode;
}

void ins_back(int val,Node*& head){
    Node* cur = head;
    while(cur!=nullptr && cur->next != nullptr){
        cur = cur->next;
    }
    Node* ne_node = new Node(val);
    cur->next = ne_node;
    
}

void ins_at(int val,Node*& head,int inx){
    Node* prv = head;
    if(prv == nullptr) return;
    for(int i=0;i<inx-1;i++){
        prv= prv->next;
    }
    Node* New_ins = new Node(val);
    
    New_ins->next = prv->next;
    prv->next = New_ins;
}

void Delete(int inx,Node*& head,int n){
    Node* cur = head;
    //delete front
    if(inx == 0){
        head = head->next;
        delete cur;
    }
    // delete back
    else if (inx == n)
    {
        for (int i=0 ;i<inx-2;i++){
            cur = cur->next;
        }
        delete cur->next;
        cur->next = nullptr;
    }
    // delete at spacifice index
    else if(inx>0 && inx<n){
        for(int i = 0; i<inx-2;i++){
            cur =cur->next;
        }
        Node* temp = cur->next;
        cur->next = temp->next;
        delete temp;
    }
    else{
        cout << "out of range";
    }
}
void swape(int fir, int sec,int data, Node*& head){
    Node* fir_sear = head ;
    for(int i= 0;i<fir-2;i++){
        fir_sear = fir_sear->next;
    }
    Node* permi1 = fir_sear->next;
    fir_sear->next = permi1->next;
    for(int i = 0;i<sec-3;i++){
        fir_sear = fir_sear->next;
    }
    Node* permi2 = fir_sear->next;
    fir_sear->next = permi2->next;
    Node* sec_sear = head;
    ins_at(permi2->data,sec_sear,fir-1);
    ins_at(permi1->data,sec_sear,sec);
}
void fina_swape(int fir_num,int sec_num,int data,Node*& head){
    if((fir_num&&sec_num)>=0 && (fir_num &&sec_num)<=data){
        if(fir_num<=sec_num){
            swape(fir_num,sec_num,data,head);
        }
        else if(fir_num>sec_num){
            swape(sec_num,fir_num,data,head);
        }
    }
    else{
        cout << "out of range";
    }
}

void search(Node*& head,int obj){
    Node* sear = head;
    int inx=0;
    while(sear!=nullptr){
        if(sear->data == obj){
            cout<<"Number"<<obj<<"is in index"<<inx<<endl;
            break;
        }
        sear = sear->next;
        inx++;
    }
}







#endif
