#include<iostream>
#include<chrono>
using namespace std;
using clk = chrono::high_resolution_clock;
volatile int sink_int =0;
int main(){
    const int max_cap = 100000;
    int n = max_cap;
    int arr[n];
    for(int i=1;i<=n;i++) {
        arr[i-1] = i;
    }
    int insert =10;
    int condit = n/2;
    auto t1 = clk::now();

    int copy_arr[2*n];          //allocate new array
    for(int i=0;i<n;i++){

        copy_arr[i]=arr[i];
    }                           //copy array

    for(int i =condit;i<max_cap;i++){
        int shift = copy_arr[i];
        copy_arr[i]=insert;
        insert = shift;
        
    }                             //insert into the copy array
    auto t2 = clk::now();
    cout << chrono::duration_cast<chrono::microseconds>(t2-t1).count()<<endl;




    return 0;

}