#include<bits/stdc++.h>
using namespace std;

string decimal_to_binary(int n){
    string binary = "";
    while (n)
    {
        int reminder = n%2;
        char ch = reminder + '0';
        binary = ch + binary;
       n /= 2;
    }
    return binary;
}

int main()
{
    string bin = decimal_to_binary(18);
    cout <<bin << endl;
    return 0;
}