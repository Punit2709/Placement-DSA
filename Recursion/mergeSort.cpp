#include<bits/stdc++.h>
using namespace std;

void merge(int arr[], int start, int end){
    
    // mid require to calculate 2 new array which will be help full for copy old left and right part
    int mid = ( start + end )/2;

    int lenLeft = mid - start + 1;
    int lenRigth = end - mid;

    int leftArr[lenLeft];
    int rightArr[lenRigth];

    // copy old value to those new Arrays
    int mainArrayIndex = start;
    
    // copying in left arr
    for(int i = 0; i < lenLeft; i++){
        leftArr[i] = arr[mainArrayIndex++];
    }

    // copying in right arr
    for(int i = 0; i < lenRigth; i++){
        rightArr[i] = arr[mainArrayIndex++];
    }

    // merge 2 sorted array
    mainArrayIndex = 0;
    int index1 = 0;
    int index2 = 0;

    while(index1 < lenLeft && index2 < lenRigth){
        if(leftArr[index1] < rightArr[index2]){
            arr[mainArrayIndex++] = leftArr[index1++];
        }
        else{
            arr[mainArrayIndex++] = rightArr[index2++];
        }
    }

    while(index1 < lenLeft){
        arr[mainArrayIndex++] = leftArr[index1++];
    }

    while(index2 < lenRigth){
        arr[mainArrayIndex++] = rightArr[index2++];
    }

}


void mergeSort(int arr[], int start, int end){
    int mid = (end + start )/2;

    // base case
    if(start >= end){
        return; 
    }

    // Sorting left array
    mergeSort(arr, start, mid);

    // Sorting right array
    mergeSort(arr, mid+1, end);

    // merging 2 sorted Array
    merge(arr, start, end); 
}

int main()
{
    int arr[] = {2, 3, 5, 2, 3, 4};
    mergeSort(arr, 0, 5);

    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << " ";
    }
    
    return 0;
}