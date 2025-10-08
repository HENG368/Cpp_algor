#include<iostream>
#include<chrono>
using namespace std;
using clk = chrono::high_resolution_clock;
volatile int sink_int =0;
int main(){
    const int max_cap = 100000;
    int n = max_cap/2;
    int arr[max_cap];
    int insert =10;
    
    auto t1 = clk::now();
    for(int i =0;i<n;i++){
        if(arr[i]==""){
            int shift = arr[i];
            arr[i]=insert;
            insert = shift;
        }
       
        
    }
    arr[n-1] = insert;
    auto t2 = clk::now();
    cout << chrono::duration_cast<chrono::microseconds>(t2-t1).count()<<endl;




    return 0;

}