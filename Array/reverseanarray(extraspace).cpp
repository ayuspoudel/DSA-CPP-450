#include<iostream>
#include<cstdlib>
void print(int arr[], int n){
    for(int i = 0;i<n;i++){
        std::cout<<arr[i]<<std::endl;
    }
    return;
}

int main(){
    int arr[] = {1,2,3,4,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    int* rev_arr =new int[size]; 
    int* pointer = rev_arr;
    for(int i = size-1; i>=0;i--){
        *pointer = arr[i];
        pointer++;
    }
    print(rev_arr, size);
    return 0;
}