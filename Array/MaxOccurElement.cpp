#include <bits/stdc++.h>
using namespace std;

int majorityElement(vector<int> &nums)
{
    sort(nums.begin(), nums.end());
    int count = 1;
    int n = nums.size();
    for (int i = 1; i < n; i++)
    {
        if (nums[i] == nums[i - 1])
        {
            count++;
            if (count > n / 2)
                return nums[i];
        }
        else
        {
            count = 1;
        }
    }
    return nums[0];
}

// leetcode: 169
int main()
{

    return 0;
}