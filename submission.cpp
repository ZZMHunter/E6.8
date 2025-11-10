/*
    Author: Zhao Zhang
    Course: CSCI-135
    Instructor: Tong Yi
    Assignment: E6.8

    Write a function
    bool equals(int a[], int a_size, int b[], int b_size)
    that checks whether two arrays have the same elements in the same order.
*/
#include <iostream>

bool equals(int a[], int a_size, int b[], int b_size){
    bool isTrue;
    if (a_size != b_size){
        return false;
    }
    for(int i = 0; i < a_size;i++){
        if(a[i]!=b[i]){
            return false;
        }
    }
    return true;
}

int main(){
    int a[3] = {1, 2, 3};
    int b[4] = {1, 2, 3};
    std::cout << equals(a, 3, b, 3) << std::endl;
    return 0;
}