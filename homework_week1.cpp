#include <iostream>

using namespace std;

void push(double *p_array, int inx, double value, int &n, int size){
    if(inx > n || inx > size){
        cout<<"Out of bound!"<<endl;
        return;
    } 
    n = (inx < n)? n+1: n;
    for(int i=n;i>=inx;i--){
        p_array[i]=p_array[i-1];
    }
    p_array[inx] = value;
   
    
}
void pull(double *p_array, int inx, int &n, int size){
    if (inx >n || inx >size){
        cout << "out of bunch!";
        return;
    }
    else{
        n = (inx < n)? n+1: n;
        for(int i=inx;i<=n;i++){
            p_array[i] = p_array[i+1]; 
       }
        
    }

    
}
int main(){

    double array[100] = {5,4,3,2,1};
    int n = 4;
    double *p_array = array;
    
    push(array, 2, 10, n, 100); 
    for(int i = 0; i < n+1; i++){
        cout<<"Value_push: "<<*(p_array+i)<<endl;
    }
    
    pull(array, 50, n, 100);
    for(int i=0; i<n-1 ; i++){
        cout<<"Value_pull:"<<*(p_array+i)<<endl;
    }

    return 0;
}