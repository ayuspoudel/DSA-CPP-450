#include<iostream>
#include<cstdlib>

struct pair {
    int min;
    int max;
    void print(){
        std::cout<<this->min<<" "<<this->max<<" ";
    }
};

pair* getminmax(int* arr, int size){

    int max1 = INT_MIN;
    int min1 = INT_MAX;
    for(int i = 0; i<size; i++){
        if(max1<arr[i]){
            max1 = arr[i];
        }
        if(min1>arr[i]){
            min1 = arr[i];
        }
    }
    struct pair* minmax = new pair;
    minmax->min = min1;
    minmax->max = max1;
    return minmax;
}


int main(){
    int arr[] = {44,2,55,-11,20};
    int size = sizeof(arr)/sizeof(arr[0]);
    pair* minmax = new pair;
    minmax = getminmax(arr, size); 
    minmax->print();
    return 0;
}