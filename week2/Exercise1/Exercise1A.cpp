#include<iostream>
#include<chrono>
using namespace std;
using clk = chrono::high_resolution_clock;
volatile int sink_int =0;
int main(){
    const int max_cap = 100000;
    int n = 0;
    int arr[max_cap];
    int insert =10;
    auto t1 = clk::now();
    //direct insert
    arr[n]=insert;

    // //insert with loop
    // for(int i =0;i<n;i++){
    //     int shift = arr[i];
    //     arr[i]=insert;
    //     insert = shift;
        
    //  }

    auto t2 = clk::now();
    cout << chrono::duration_cast<chrono::nanoseconds>(t2-t1).count()<<endl;




    return 0;

}