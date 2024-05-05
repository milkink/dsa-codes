#include<iostream>
using namespace std;

int recursiveBS(int arr[], int key, int right, int left){
    if (left > right){
        return -1;
    }
    int mid = left + (right - left)/2;
    if (arr[mid] == key){
        return mid;
    }
    else if (arr[mid] > key){
        return recursiveBS(arr, key, mid - 1, left);
    }
    else{
        return recursiveBS(arr, key, right, mid + 1);
    }
}

int main(){
    int arr[] = {2,3,5,8,10,29,31,69,80,81};
    int key = 69;
    int n = sizeof(arr)/sizeof(arr[0]);
    int result = recursiveBS(arr, key, n-1, 0);
    (result == -1)
    ? cout<<"element not present in array"
    : cout<<"element present in array at index: "<<result;

    return 0;
}
