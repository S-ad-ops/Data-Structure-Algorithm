#include<iostream>
using namespace std;

int factorial(int n){
    // base case
    if(n==0){
        return 1;
    }

    // recursive case
    int smallOutput = factorial(n-1);
    int output = n * smallOutput;
    return output;
}

int main(){

    int n;
    cin>>n;

    int ans = factorial(n);
    cout<<ans<<endl;

    return 0;
}