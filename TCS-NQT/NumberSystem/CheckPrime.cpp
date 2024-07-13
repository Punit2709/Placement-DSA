#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n){
    bool ans = true;
    for(int i = 2; i <= n/2; i++){
        if(n % i == 0){
            ans =  false;
            break;
        }
    }
    return ans;
}

bool isPrimeBetter(int n){
    int count = 0; // counting the factors
    for(int i = 1; i <= sqrt(n); i++){
        if(n % i == 0){
            count++;
            if(n / i % i != 0){
                count++;
            }
        }
    }
    if(count <= 2){
        return true;
    }
    else return false;
}

int main()
{
    bool prime = isPrime(43);
    cout << prime;
    return 0;
}