#include <bits/stdc++.h>
using namespace std;

int findMaxConsecutiveOnes(vector<int> &nums){
    int count = 0;
    int currentCount = 0;
    int n = nums.size();

    for (int i = 0; i < n; i++){
        if (nums[i] == 1){
            currentCount++;
        }
        else{
            if (currentCount > count){
                count = currentCount;
            }
            currentCount = 0;
        }
    }
    if (currentCount > count){
        count = currentCount;
    }
    return count;
}

int main()
{
    vector<int> nums = {1, 1, 0, 1, 1, 1};
    int n = findMaxConsecutiveOnes(nums);
    cout << n << " ";
    return 0;
}