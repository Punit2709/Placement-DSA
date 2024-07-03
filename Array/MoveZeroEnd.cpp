#include <bits/stdc++.h>
using namespace std;

void moveZeroes(vector<int> &nums){
    int zeroCount = 0;
    vector<int> temp;
    int n = nums.size();

    for (int i = 0; i < n; i++)
    {
        if (nums[i] == 0)
        {
            zeroCount++;
        }
        else
        {
            temp.push_back(nums[i]);
        }
    }

    int n2 = temp.size();
    for (int i = 0; i < zeroCount; i++)
    {
        temp.push_back(0);
    }
    nums = temp;
}

// method 2
void moveZeroes2(vector<int> &nums){
    int n = nums.size();
    int j  = 0;

    for (int i = 0; i < n; i++)
    {
        if(nums[i] != 0){
            nums[j] = nums[i];
            j++;
        }
    }

    while (j < n)
    {
        nums[j] = 0;
        j++
    }
    
}

int main()
{

    return 0;
}