#include<iostream>
#include"main_header.hpp"
 
void insert(int Num_ins,int size_cont,int ind_ins,int* arr){
    for(int i =ind_ins;i<size_cont;i++){
        int shift = arr[i];
        arr[i]=Num_ins;
        Num_ins = shift;
        
    }
    
}