#include <bits/stdc++.h>
using namespace std;

void insertionSort(int arr[], int n){
    for(int i = 1; i < n; i++){
        int current = arr[i];
        int j = i - 1;
        while(j >= 0 && arr[j] > current){
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = current;
    }
}

int main(){
    // Getting size of the array
    int n;
    cout<<"Size of the array: ";
    cin>>n;
    int arr[n], arrCopy[n];
    
    // Storing elements of array
    cout<<"Enter Values:"<<endl;
    for(int i = 0; i < n; i++) cin>>arr[i];

    insertionSort(arr, n);

    // Print Array
    cout<<"Sorted Array:\n";
    for(int i = 0; i < n; i++) cout<<arr[i]<<" ";

    return 0;
}