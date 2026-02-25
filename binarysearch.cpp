#include<iostream>
using namespace std;

void binarysearch(int arr[], int size, int key){
    int start = 0;
    int end = size - 1;

    while(start <= end){
        int mid = start + (end - start)/2;

        if(arr[mid] == key){
            cout << "Element found at index " << mid << endl;
            return;
        }
        else if(arr[mid] < key){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
    }
    cout << "Element not found" << endl;
}

int main(){
    int evevn[6] = {2,4,6,8,10,12};
    int odd[5] = {1,3,5,7,9};

    int key;
    cout << "Enter the key to be searched: ";   
    cin >> key;
    binarysearch(evevn, 6, key);
    binarysearch(odd, 5, 5);
    return 0;

}