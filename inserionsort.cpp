#include<iostream>
using namespace std;

void InsertionSort(int arr[], int n){
    int i, j , key;
    for(i = 1; i < n; i++){
        key = arr[i];
        j = i - 1;

        while(j >= 0 && arr[j] > key){
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

void Print(int arr[], int n){
    for(int i = 0; i < n; i++){
        cout<< arr[i] << " ";
    }
}

int main(){
    int arr[] = {23, 1, 10, 5, 2};
    int N = sizeof(arr)/sizeof(arr[0]);
    InsertionSort(arr, N);
    Print(arr, N);
}
