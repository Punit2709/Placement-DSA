#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(int n){
    int x = 0;
    int temp = n;
    while(temp){
        x = (x*10)+ temp%10;
        temp /= 10;
    }
    if(x == n){
        return true;
    }
    else{
        return false;
    }
}

vector<int> allPalindrome(int a, int b){
    vector<int> ans;
    for(int i = a; i <= b; i++){
        if(isPalindrome(i)){
            ans.push_back(i);
        }
    }
    return ans;
}

int main()
{
    vector<int> ans = allPalindrome(10, 60);
    for(auto x: ans){
        cout << x << " ";
    }
    return 0;
}