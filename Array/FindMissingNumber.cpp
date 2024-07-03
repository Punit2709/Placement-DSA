#include <bits/stdc++.h>
using namespace std;

int missingNumber(vector<int> &nums)
{
    // sort(nums.begin(), nums.end());

    // int i = 0;
    // for(i = 0; i < nums.size(); i++){
    //     if(i != nums[i]){
    //         break;
    //     }
    // }
    // return i;

    // second method
    // 0 to n number ka sum
    // minus array total sum

    int n = nums.size();
    int actualSum = (n * (n + 1)) / 2;
    int arrSum = 0;
    for (auto i : nums)
    {
        arrSum += i;
    }
    return actualSum - arrSum;
}

int main()
{
    vector<int> nums = {0, 1, 2, 3, 5, 6};
    int miss = missingNumber(nums);
    cout << miss << endl;
    return 0;
}