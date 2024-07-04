#include<bits/stdc++.h>
using namespace std;

// use xor property 
// a ^ b ^ b ^ c ^ a = c

int singleElemet(vector<int> &nums){
    int n = nums.size();
    int ans = nums[0];
    for(int i = 1; i < n; i++){
        ans = ans ^ nums[i];
    }
    return ans;
}

int main()
{
    vector<int> nums = {1,2,3,3,4,2,1};
    int single = singleElemet(nums);
    cout << single << " ";
    return 0;
}