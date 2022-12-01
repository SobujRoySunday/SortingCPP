#include <bits/stdc++.h>
using namespace std;

void merge(int arr[], int l, int mid, int r){
    int i = l;
    int j = mid + 1;
    int f = l;
    int temp[100000];

    while(i <= mid && j <= r){
        if(arr[i] < arr[j]){
            temp[f] = arr[i];
            i++;
        } else{
            temp[f] = arr[j];
            j++;
        }
        f++;
    }

    if(i > mid){
        while(j <= r){
            temp[f] = arr[j];
            f++;
            j++;
        }
    } else{
        while(i <= mid){
            temp[f] = arr[i];
            f++;
            i++;
        }
    }

    for(int f = l; f <= r;f++){
        arr[f] = temp[f];
    }
}

void mergeSort(int arr[], int i, int r){
    if(i < r){
        int mid = (i+r)/2;
        mergeSort(arr, i, mid);
        mergeSort(arr, mid+1, r);
        merge(arr, i, mid, r);
    }
}

int main(){
    int arr[] = {5, 6, 2, 1, 4, 10, 11, 9};
    mergeSort(arr, 0, 7);
    for(int i = 0;i <= 7;i++){
        cout<<arr[i]<<" ";
    }
}