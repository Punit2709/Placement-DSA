#include<bits/stdc++.h>
using namespace std;


//Method 1
vector<int> remove_dupli(vector<int> &arr, int n){
    vector<int> temp;
    temp.push_back(arr[0]);

    for(int i = 1; i < n; i++){
        if(arr[i] != arr[i -1]){
            temp.push_back(arr[i]);
        }
    }
    return temp;
}

// Method 2
unordered_set<int> remove_dupli2(vector<int> &arr, int n){
    unordered_set<int> s;
    for (int i = 0; i < n; i++)
    {
        s.insert(arr[i]);
    }
    
    return s;
}

// find dupliates
vector<int> find_dupli(vector<int> &arr, int n){
    vector<int> temp;
    int lastDuplicate;

    for(int i = 0; i < n; i++){
        if(arr[i] == arr[i -1] && arr[i] != lastDuplicate){
            lastDuplicate = arr[i];
            temp.push_back(arr[i]);
        }
    }
    return temp;
}
int main()
{

    vector<int> a = {1, 2, 3, 3, 3, 3, 4, 4, 5};  
    vector<int> ans = remove_dupli(a, 9);
    for (int i = 0; i < 5; i++)
    {
        cout << ans[i] << " ";
    } 
    cout << endl;

    vector<int> dulpicateEle = find_dupli(a, 9);
    for(int i = 0; i < 2; i++){
        cout << dulpicateEle[i] << " ";
    }
    cout << endl;

    unordered_set<int> s = remove_dupli2(a, 9);
    for (auto x : s){
        cout << x << " ";
    }
    return 0;
}