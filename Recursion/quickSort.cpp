#include<bits/stdc++.h>
using namespace std;

void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

int partition(int arr[], int start, int end){

    int pivot = arr[start];

    int count = 0;
    for(int i = start+1; i<=end; i++){
        if(arr[i] <= pivot)
            count++;
    }

    // right place for pivot
    int pivotIndex = start + count;

    // transfer pivot to its right Index
    swap(arr[pivotIndex], arr[start]);

    // small element at left and large element at right
    int i = start;
    int j = end;

    while(i < pivotIndex && j > pivotIndex){

        while(arr[i] <= pivot){
            i++;
        }

        while(arr[j] > pivot){
            j--;
        }

        if(i < pivotIndex && j > pivotIndex){
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }

    return pivotIndex;
}

void quickSort(int arr[], int start, int end){

    // base case
    if (start >= end){
        return;
    }

    // partiting array in 2 parts
    int p = partition(arr, start, end);

    //
    quickSort(arr, start, p-1);
    quickSort(arr, p+1, end);
}

int main()
{

    int arr[] = {9, 8, 8, 3, 0};
    int arr1[] = {9, 8, 7, 6, 0};
    quickSort(arr, 0, 4);
    quickSort(arr1, 0, 4);

    for(int i = 0; i < 5; i++){
        cout << arr[i] << " ";
    }  
    cout << endl;

    for(int i = 0; i < 5; i++){
        cout << arr1[i] << " ";
    } 
    return 0;
}