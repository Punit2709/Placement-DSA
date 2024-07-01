#include<bits/stdc++.h>
using namespace std;

bool isSorted(int arr[], int size){
    int  n = size;
    for(int i = 0; i < n-1; i++){
        if(arr[i] > arr[i+1]){
            return false;
        }
    }
    return true;
}

bool isSortedRecursion(int arr[], int size){
    if(size == 0 || size == 1){
        return true;
    }

    if(arr[0] > arr[1]){
        return false;
    }
    else{
        bool ans = isSortedRecursion(arr+1, size-1);
        return ans;
    }
}

int sumOfArray(int arr[], int size){
    if(size == 0){
        return 0;
    }

    if(size == 1){
        return arr[0];
    }
    else{
        int ans = arr[0] + sumOfArray(arr+1, size-1);
        return ans;
    }
}

int binarySearch(int arr[], int low, int high, int key){
    
    // element not found
    if(low > high){
        return -1;
    }

    int mid = ( high + low ) /2;

    // element found
    if(arr[mid] == key){
        return mid;
    }

    if(arr[mid] > key){
        return binarySearch(arr, low, mid-1, key);
    }
    else if (arr[mid] < key){
        return binarySearch(arr, mid+1, high, key);
    }
    return -1;
}
int main()
{
    int arr1[] = {2, 5, 7, 9, 10};
    int arr2[] = {2, 5, 7, 11, 10};

    cout << isSorted(arr1, 5) <<" " << isSorted(arr2, 5) << endl;
    cout << isSortedRecursion(arr1, 5) <<" " << isSortedRecursion(arr2, 5) << endl;
    cout << sumOfArray(arr1, 5) <<" " << sumOfArray(arr2, 5) << endl;
    cout << binarySearch(arr1,0, 5, 7) <<" " << binarySearch(arr2, 0, 4, 11) << endl;

    return 0;
}