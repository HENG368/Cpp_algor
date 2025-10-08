#include<iostream>
#include<chrono>
using namespace std;
using clk = chrono::high_resolution_clock;
volatile int sink_int =0;
int main(){
    const int max_cap = 100000;
    int n = max_cap/2;
    int arr[max_cap];
    int indx_rem = 0;
    for(int i=0;i<n;i++) {
        arr[i] = i;
    }
    
    auto t1 = clk::now();

    //remove element
    for(int i=0;i<max_cap-indx_rem;i++){
        int shift = arr[indx_rem+i+1];
        arr[indx_rem+i] = arr[indx_rem+i+1];
    } 
    

    

    
    auto t2 = clk::now();
    cout << chrono::duration_cast<chrono::microseconds>(t2-t1).count()<<endl;




    return 0;


}
// for(int i=indx_rem;i<max_cap;i++){
//         int shift = arr[i+1];
//         arr[i] = arr[i+1];
//     } 