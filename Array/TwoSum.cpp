#include <bits/stdc++.h>
using namespace std;

// give index
vector<int> twoSum(vector<int> &nums, int target)
{
    int n = nums.size();
    vector<int> ans;

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (nums[i] + nums[j] == target)
            {
                ans.push_back(i);
                ans.push_back(j);
                return ans;
            }
        }
    }
    return ans;
}

// second method


int main()
{
    vector<int> nums = {1, 2, 4, 3};
    vector<int> ans = twoSum(nums, 5);
    for(auto x : ans)
        cout << x << " ";
    
    return 0;
}