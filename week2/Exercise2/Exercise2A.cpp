#include<iostream>
#include<chrono>
using namespace std;
using clk = chrono::high_resolution_clock;
volatile int sink_int =0;
int main(){
    const int max_cap = 100000;
    int n = max_cap/2;
    int arr[max_cap];
    for(int i=0;i<n;i++) {
        arr[i] = i;
    }
    int indx_rem = n/2;
    auto t1 = clk::now();
    
    arr[indx_rem];
    for(int i=indx_rem;i<n;i++){
        int shift = arr[i+1];
        arr[i] = arr[i+1];
    } 
    auto t2 = clk::now();
    cout << chrono::duration_cast<chrono::microseconds>(t2-t1).count()<<endl;




    return 0;

}