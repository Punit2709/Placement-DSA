#include <bits/stdc++.h>
using namespace std;

void reverse(vector<int> &arr, int start, int end)
{
    while (start <= end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

// method 1
void rotate(vector<int> &arr, int k)
{
    int n = arr.size();
    k = k % n;

    if (k == 0)
    {
        return;
    }

    vector<int> last_k(n);
    // copy last k term to and transfer at beginning of array
    for (int i = n - k; i < n; i++)
    {
        last_k[i - n + k] = arr[i];
    }

    // trensfer first element to kth pos
    for (int i = 0; i < n - k; i++)
    {
        last_k[i + k] = arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        arr[i] = last_k[i];
    }
}

// method 2
void reversal_rotate(vector<int> &arr, int k)
{
    // step 1: reverse last k ele
    // step 2: reverse first (n - k) ele
    // step 3: reverse whole array
    int n = arr.size();
    reverse(arr, n - k, n - 1);
    reverse(arr, 0, n - k - 1);
    reverse(arr, 0, n - 1);
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7};
    rotate(arr, 3);

    for (auto x : arr)
    {
        cout << x << " ";
    }
    return 0;
}