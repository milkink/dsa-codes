#include<iostream>
using namespace std;

int iterativeBS(int arr[], int key, int right, int left){
    while(left <= right){
        int mid = left + (right - left)/2;

        if (arr[mid] == key){
            return mid;
        }

        if (arr[mid] < key){
            left = mid + 1;
        }
        else{
            right = mid - 1;
        }
    }
    return -1;
    
}


int main(){
    int arr[] = {2,5,6,8,11,21,23,42,48,84};
    int n = sizeof(arr)/sizeof(arr[0]);
    int key = 23;
    int result = iterativeBS(arr, key, n-1, 0);
    (result == -1)
        ? cout<<"given element not present in array"
        : cout<<"element is present at index "<<result;
    return 0;
}
