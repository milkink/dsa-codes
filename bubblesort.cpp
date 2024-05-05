#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void BubbleSort(int arr[], int n){
    bool swapped;
    int i, j;
    for (i = 0; i < n-1; i++){
        swapped = false;
        for (j = 0; j < n-i-1; j++){
            if (arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
                swapped = true;
            }
        }
        //This is an optimized form of bubble sort
        //since if no swaps take place in an iteration 
        //it can be concluded that the array has been sorted
        if (swapped == false){
            break;
        }
    }
}

void printArray(int arr[], int size){
    for (int i = 0; i < size; i++){
        cout<<" "<<arr[i];
    }
}

int main(){
    int arr[] = {16,10,9,8,7};
    int N = sizeof(arr)/sizeof(arr[0]);
    BubbleSort(arr, N);
    cout<<"the sorted array is: ";
    printArray(arr, N);

    return 0;
}
