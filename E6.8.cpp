/*
    Author: Zhao Zhang
    Course: CSCI-135
    Instructor: Tong Yi
    Assignment: E6.8

    Write a function
    bool equals(int a[], int a_size, int b[], int b_size)
    that checks whether two arrays have the same elements in the same order.
*/

bool equals(int a[], int a_size, int b[], int b_size){
    bool isTrue;
    if (a_size < b_size){
        for(int i = 0; i < b_size-a_size;i++){
            bool isTrue = true;
            for(int j = i; j < i+a_size;j++){
                if(a[j] != b[j]){
                    isTrue = false;
                }
            }
        }
        return isTrue;
    }else if(b_size < a_size){
        for(int i = 0; i < a_size-b_size;i++){
            bool isTrue = true;
            for(int j = i; j < i+b_size;j++){
                if(b[j] != a[j]){
                    isTrue = false;
                }
            }
        }
        return isTrue;
    }else{
        for(int i = 0; i < a_size;i++){
            if(a[i]!=b[i]){
                return false;
            }
        }
    }
}