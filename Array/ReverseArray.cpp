#include<bits/stdc++.h>
using namespace std;

void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

void reverse_array(int arr[], int n){
    int i = 0;
    int j = n - 1;

    while (i < j)
    {
        swap(arr[i], arr[j]);
        i++;
        j--;
    }
}

int main()
{
    
    int a[6] = {1, 2, 3, 4, 5, 6};
    reverse_array(a, 6);
    for (int i = 0; i < 6; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}