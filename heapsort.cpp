#include<iostream>
using namespace std;

void heapify(int arr[], int n, int i){
    int largest = i;

    int left = 2*i + 1;

    int right = 2*i + 2;

    if (left < n && arr[left] > largest){
        largest = left;
    }

    if (right < n && arr[right] > largest){
        largest = right;
    }

    if (largest != i){
        swap (arr[i], arr[largest]);

        heapify(arr, n, largest);
    }
}

void heapSort(int arr[], int n){
    //build heap (rearrange array)
    for (int i = n/2 - 1; i >= 0; i--){
        heapify(arr, n, i);
    }

    //one by one extract an element
    //from heap
    for (int i = n - 1; i > 0; i--){
        //moves current root to end
        swap(arr[0], arr[i]);

        //call max heapify on reduced heap
        heapify(arr, i, 0);

    }


}

void printArray(int arr[], int n){
    for (int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
}

int main(){
    int arr[] = {12,11,13,5,6,7};
    int N = sizeof(arr)/sizeof(arr[0]);
    heapSort(arr, N);

    cout<<"\nsorted array is: ";
    printArray(arr, N);

    return 0;
}
