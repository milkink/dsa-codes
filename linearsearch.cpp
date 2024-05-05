#include<iostream>
using namespace std;

int LinearSearch(int arr[], int N , int val){
    int i;
    for(i = 0; i < N; i++){
        if(arr[i] == val){
            return i;
        }
    }
    return -1;
}

int main(){
    int arr[] = {23,10,42,61,81,90};
    int val = 23;
    int N = sizeof(arr)/sizeof(arr[0]);
    int res = LinearSearch(arr, N, val);

    cout<<"the elements of the array are: ";
    
    for(int i = 0; i < N; i++){
        cout<<arr[i]<<" ";

    }
    

    cout<<"\nelement to be searched is: "<<val;
    cout<<endl;
    if(res == -1){
        cout<<"element not present in array";
        cout<<endl;
    
    }
    else{
        cout<<"element present at index: "<<res;
    }

    return 0;

}
