void swapAlternate(int *arr, int size)
{
    //Write your code here
    for(int i=0; i<size-1; i+=2){
        swap(arr[i], arr[i+1]);
    }
}