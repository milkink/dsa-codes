#include<iostream>
using namespace std;

void SelectionSort(int arr[], int n){
    int min_idx, i, j;
    for (i = 0; i < n-1; i++){
        min_idx = i;
        for (j = i+1; j < n; j++){
            if (arr[j] < arr[min_idx]){
                min_idx = j;
            }
        }
        if (min_idx != i){
            swap(arr[min_idx], arr[i]);
        }
    }
}

void PrintArray(int arr[], int n){
    for (int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[] = {64,25,12,22,11};
    int N = sizeof(arr)/sizeof(arr[0]);
    SelectionSort(arr, N);
    cout<<"The sorted array is: ";
    PrintArray(arr, N);

    return 0;
}
