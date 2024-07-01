// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

void merge(int arr[], int s, int e){
    if(s >= e){
        return;
    }
    
    int m = ( s + e ) /2;
    int len1 = m - s + 1;
    int len2 = e - m;
    
    int left[len1];
    int right[len2];
    int mainIndex = s;
    
    // copy items in array
    for(int i = 0; i < len1; i++){
        left[i] = arr[mainIndex++];
    }
    
    for(int i = 0; i < len2; i++){
        right[i] = arr[mainIndex++];
    }
    
    // merging 2 sorted Array
    int index1 = 0;
    int index2 = 0;
    mainIndex = s;
    
    while(index1 < len1 && index2 < len2){
        if(left[index1] < right[index2]){
            arr[mainIndex++] = left[index1++];
        }
        else{
            arr[mainIndex++] = right[index2++];
        }
    }
    
    while(index1 < len1){
         arr[mainIndex++] = left[index1++];
    }
    
     while(index2 < len2){
         arr[mainIndex++] = right[index2++];
    }

}

void mergeSort(int arr[], int start, int end){
    if(start >= end){
        return;
    }
    
    int mid = ( start + end ) /2;
    
    // mergeSort for left part
    mergeSort(arr, start , mid);
    mergeSort(arr, mid+1 , end);
    
    // now merge two sorted array
    merge(arr, start, end);
}

int main() {
    // Write C++ code here

    int arr[] = {9, 7, 6, 5, 4, 3, 2};
    mergeSort(arr, 0, 6);
    
    for(int i = 0; i < 7; i++){
        cout << arr[i] << " ";
    }
    return 0;
}