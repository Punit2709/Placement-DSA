#include <bits/stdc++.h>
using namespace std;

unordered_map<int, int> countFreq(vector<int> arr)
{
    unordered_map<int, int> map;
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        map[arr[i]]++;
    }
    return map;
}

int main()
{
    vector<int> arr = {1, 2, 1, 2, 3, 4, 1, 3, 4, 5};
    unordered_map<int, int> map = countFreq(arr);
    for(auto x : map){
        cout << x.first << " " << x.second << endl;
    }
    return 0;
}