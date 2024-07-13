#include<bits/stdc++.h>
using namespace std;


vector<int> printLeaders(vector<int> arr, int n) {

  vector<int> ans;

    for(int i = 0; i < n; i++){
        bool isLeader = true;
        for(int j = i; j < n; j++){
            if(arr[j] > arr[i]){
                isLeader = false;
                break;
            }
        }
        if(isLeader){
            ans.push_back(arr[i]);
        }
    }
  return ans;
}

vector<int> printLeaders2(vector<int> arr, int n) {

  vector<int> ans;
  
 int max = arr[n - 1];
 ans.push_back(arr[n-1]);

  for (int i = n - 2; i >= 0; i--)
    if (arr[i] > max) {
      ans.push_back(arr[i]);
      max = arr[i];
    }
  return ans;
}

int main()
{
    vector<int> arr  = {2,3, 4, 1};
    vector<int> l1 = printLeaders(arr, 4);
    for(auto  x: l1){
        cout << x << " ";
    }
    cout << endl;

    vector<int> l2 = printLeaders2(arr, 4);
    for(auto  x: l2){
        cout << x << " ";
    }
    return 0;
}