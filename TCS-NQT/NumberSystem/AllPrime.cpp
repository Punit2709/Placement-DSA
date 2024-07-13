#include<bits/stdc++.h>
using namespace std;

bool isPrime(int num){
  if (num == 1)
    return false;
  int i = 2;
  for (i = 2; i <= sqrt(num); i++)
  {
    if (num % i == 0)
      return false;
  }
  return true;
}

vector<int> allPrime(int a, int b){
    vector<int> ans;
    for(int i = a; i <= b; i++){
        if(isPrime(i)){
            ans.push_back(i);
        }
    }
    return ans;
}

int main()
{
    vector<int> ans = allPrime(5, 50);
    for(auto x : ans){
        cout << x << " ";
    }
    return 0;
}