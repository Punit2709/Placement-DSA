#include<bits/stdc++.h>
using namespace std;

int second_large(int arr[], int n){
    int large1 = arr[0];
    int large2 = -1;

    for(int i = 1; i < n; i++){
        // number > large1
        if(arr[i] > large1){
            large2 = large1;
            large1 = arr[i];
        }
        else if(arr[i] > large2 & arr[i] < large1){
            large2 = arr[i];
        }
    }
   return large2;
}

int main(){

    int arr[5] = {1, 2, 4, 5, 6};
    int arr1[8] = {-1, -2, -4, -5, 0, 1, -6};
    cout << second_large(arr1, 8);
    return 0;
}