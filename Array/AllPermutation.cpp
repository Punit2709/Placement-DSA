#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> findAllPermutation(vector<int> &nums)
{
    vector<vector<int>> allPermutation;
    vector<int> numsCopy = nums;
    int n = nums.size();

    for (int i = 0; i < n; i++)
    {
        vector<int> temp;
        for (int j = 0; j < n; j++)
        {
            swap(nums[i], nums[j]);
            temp.push_back(nums[j]);
        }
        allPermutation.push_back(temp);
    }
    return allPermutation;
}

int main()
{   
    vector<int> v = {1, 2, 3};
    vector<vector<int>> ans = findAllPermutation(v);
    for(auto x : ans){
        for(auto y : x){
            cout << y << " ";
        }
        cout << endl;
    }
    return 0;
}