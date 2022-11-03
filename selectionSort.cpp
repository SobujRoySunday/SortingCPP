#include <bits/stdc++.h>
using namespace std;

void selectionSort(int arr[], int n){
    // Sorting the array
    for(int i = 0; i < n - 1; i++){
        int mini = i;
        for(int j = i + 1; j < n; j++){
            if(arr[j] < arr[mini]) mini = j;
        }
        swap(arr[i], arr[mini]);
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

    selectionSort(arr, n);

    // Print Array
    cout<<"Sorted Array:\n";
    for(int i = 0; i < n; i++) cout<<arr[i]<<" ";

    return 0;
}
