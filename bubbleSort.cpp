  #include <bits/stdc++.h>
using namespace std;

void bubbleSort(int arr[], int n){
    // Sorting the array
    for(int i = 0; i < n - 1; i++){
        for(int j = 0; i < n - j - 1; j++){
            if(arr[j] > arr[j + 1]) swap(arr[j], arr[j + 1]);
        }
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

    bubbleSort(arr, n);

    // Print Array
    cout<<"Sorted Array:\n";
    for(int i = 0; i < n; i++) cout<<arr[i]<<" ";

    return 0;
}