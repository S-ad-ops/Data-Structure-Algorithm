#include<iostream>
using namespace std;

bool search(int arr[], int n, int key){
    for(int i=0; i<n; i++){
        if(arr[i] == key){
            return true;
        }
    }
    return false;
}

int main(){
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};

    cout << "Enter the key to be searched: ";
    int key;
    cin >> key;
    bool found = search(arr, 10, key);
    if(found){
        cout << "Key is present" << endl;
    } else {
        cout << "Key is not present" << endl;
    }

    return 0;

}