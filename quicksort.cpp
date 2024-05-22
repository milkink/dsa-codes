#include<iostream>
using namespace std;

int partition(int arr[], int low, int high){

    int pivot = arr[low];
    int k = high;
    for (int i = high; i > low; i--){
        if (arr[i] > pivot){
            swap(arr[i], arr[k--]);
        }
    }
    swap(arr[low], arr[k]);
    return k;
    
}

void quickSort(int arr[], int low, int high){
    if (low < high){
        int pi = partition(arr, low, high);

        quickSort(arr, low, pi-1);
        quickSort(arr, pi+1, high);
    }
}

void printArray(int arr[], int n){
    for (int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[] = {10,9,8,7,6,5,4,3,2,1};
    int N = sizeof(arr)/sizeof(arr[0]);
    quickSort(arr, 0, N-1);
    cout<<"Sorted array: ";
    printArray(arr, N);
    
    return 0;
}
