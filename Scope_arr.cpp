#include<iostream>
using namespace std;  

void update(int arr[], int n){

    cout << "In the function before updating: " << endl;

    //updating first element of array
    arr[0] = 120;

    for(int i=0; i<3; i++){
        cout << arr[i] << " ";
    } cout << endl;

    cout << "Going to main Function " << endl;
}

int main(){

    int arr[3] = {10,20,30};    

    update(arr, 3);

    for(int i=0; i<3; i++){
        cout << arr[i] << " ";
    } cout << endl; 

    return 0;
}