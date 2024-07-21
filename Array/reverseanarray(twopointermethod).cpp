#include<iostream>
#include<cstdlib>
#include <cassert>
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout<<std::endl;
}

void reverseArray(int* array, int n){
    int* start = array;
    int* end = array+n-1;
    while(start<end){
        int temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
    return;
}


int main() {
    // Test Case 1: Basic Test Case
    int arr1[] = {1, 2, 3, 4, 5};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    reverseArray(arr1, size1);
    std::cout << "Test Case 1: ";
    printArray(arr1, size1);
    assert((arr1[0] == 5 && arr1[1] == 4 && arr1[2] == 3 && arr1[3] == 2 && arr1[4] == 1));

    // Test Case 2: Single Element Array
    int arr2[] = {42};
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    reverseArray(arr2, size2);
    std::cout << "Test Case 2: ";
    printArray(arr2, size2);
    assert((arr2[0] == 42));

    // Test Case 3: Array with Duplicate Elements
    int arr3[] = {10, 20, 20, 10};
    int size3 = sizeof(arr3) / sizeof(arr3[0]);
    reverseArray(arr3, size3);
    std::cout << "Test Case 3: ";
    printArray(arr3, size3);
    assert((arr3[0] == 10 && arr3[1] == 20 && arr3[2] == 20 && arr3[3] == 10));

    // Test Case 4: Array with All Elements the Same
    int arr4[] = {7, 7, 7, 7, 7};
    int size4 = sizeof(arr4) / sizeof(arr4[0]);
    reverseArray(arr4, size4);
    std::cout << "Test Case 4: ";
    printArray(arr4, size4);
    assert((arr4[0] == 7 && arr4[1] == 7 && arr4[2] == 7 && arr4[3] == 7 && arr4[4] == 7));

    // Test Case 5: Empty Array
    int arr5[] = {};
    int size5 = sizeof(arr5) / sizeof(arr5[0]);
    reverseArray(arr5, size5);
    std::cout << "Test Case 5: ";
    printArray(arr5, size5);
    assert((size5 == 0)); // No output expected for empty array

    // Test Case 6: Array with Negative and Positive Values
    int arr6[] = {-5, 0, 3, 7, -2};
    int size6 = sizeof(arr6) / sizeof(arr6[0]);
    reverseArray(arr6, size6);
    std::cout << "Test Case 6: ";
    printArray(arr6, size6);
    assert((arr6[0] == -2 && arr6[1] == 7 && arr6[2] == 3 && arr6[3] == 0 && arr6[4] == -5));

    // Test Case 7: Array with Only Negative Values
    int arr7[] = {-1, -2, -3, -4};
    int size7 = sizeof(arr7) / sizeof(arr7[0]);
    reverseArray(arr7, size7);
    std::cout << "Test Case 7: ";
    printArray(arr7, size7);
    assert((arr7[0] == -4 && arr7[1] == -3 && arr7[2] == -2 && arr7[3] == -1));

    // Test Case 8: Large Array
    int arr8[1000];
    for (int i = 0; i < 1000; ++i) arr8[i] = i + 1;
    reverseArray(arr8, sizeof(arr8) / sizeof(arr8[0]));
    std::cout << "Test Case 8: ";
    for (int i = 0; i < 10; ++i) std::cout << arr8[i] << " "; // Print only first 10 elements for brevity
    std::cout << " ... "; // Indicate that the array is long
    std::cout << arr8[999] << std::endl; // Print last element for completeness
    assert((arr8[0] == 1000 && arr8[999] == 1));

    return 0;
}