#include<iostream>
using namespace std;

void printarray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

void swapalt(int arr[], int n){
    for(int i=0; i<n-1; i+=2){
        swap(arr[i], arr[i+1]);
    }
}

int main(){

    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int n = 10;
    printarray(arr, n);
    swapalt(arr, n);


    return 0;
}