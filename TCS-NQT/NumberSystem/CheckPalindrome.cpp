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

int main()
{
    bool yes = isPalindrome(455);
    cout << yes;
    return 0;
}