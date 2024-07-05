#include <bits/stdc++.h>
using namespace std;

void sortColors(vector<int> &nums)
{
    int n = nums.size();
    int zeroCount = 0;
    int oneCount = 0;
    int twoCount = 0;
    for (int i = 0; i < n; i++)
    {
        if (nums[i] == 0)
            zeroCount++;
        else if (nums[i] == 1)
            oneCount++;
        else
            twoCount++;
    }

    int index = 0;
    while (zeroCount--)
    {
        nums[index] = 0;
        index++;
    }

    while (oneCount--)
    {
        nums[index] = 1;
        index++;
    }

    while (twoCount--)
    {
        nums[index] = 2;
        index++;
    }
}

// second method
// dutch flag algorithm

void sortDutchAlgo(vector<int> &nums){
    int n = nums.size();
    int low = 0;
    int mid = 0;
    int high = n - 1;

    while (mid <= high)
    {
        if (nums[mid] == 0)
        {
            swap(nums[low], nums[mid]);
            low++;
            mid++;
        }
        else if (nums[mid] == 1)
        {
            mid++;
        }
        else
        {
            swap(nums[high], nums[mid]);
            high--;
        }
    }
}

int main()
{

    vector<int> nums = {0, 0, 1, 2, 1, 0, 2};
    sortColors(nums);
    for (auto x : nums)
    {
        cout << x << " ";
    }
    cout << endl;

    vector<int> nums2 = {0, 0, 1, 2, 1, 0, 2};
    sortDutchAlgo(nums2);
    for(auto x : nums2){
        cout << x << " ";
    }
    return 0;
}