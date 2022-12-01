#include <bits/stdc++.h>
using namespace std;

int partition(int arr[], int low, int high){
    int pivot = arr[low];
    int i = low;
    int j = high;
    
    while(i < j){
        while(arr[i] <= pivot && i <= high-1){
            i++;
        }
        while(arr[j] > pivot && j >= low){
            j--;
        }
        if(i < j) swap(arr[i], arr[j]);
    }
    swap(arr[j], arr[low]);
    return j;
}

void quickSort(int arr[], int low, int high){
    if(low < high){
        int pivot = partition(arr, low, high);
        quickSort(arr, low, pivot-1);
        quickSort(arr, pivot+1, high);
    }
}

int main(){
    int arr[] = {5, 6, 2, 1, 4, 10, 11, 9};
    quickSort(arr, 0, 7);
    for(int i = 0;i <= 7;i++){
        cout<<arr[i]<<" ";
    }
}