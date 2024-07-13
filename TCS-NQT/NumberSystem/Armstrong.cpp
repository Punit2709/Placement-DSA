#include<bits/stdc++.h>
using namespace std;

bool isArmStrong(int n) {
    int sumOfPowers = 0;
    int temp = n;
    int digitCount = 0;

    // Calculate the number of digits
    while (temp) {
        digitCount++;
        temp /= 10;
    }
    
    temp = n;

    // Calculate the sum of the powers of the digits
    while (temp) {
        int digit = temp % 10;
        sumOfPowers += pow(digit, digitCount);
        temp /= 10;
    }

    return (sumOfPowers == n);
}

int main()
{
    bool ans = isArmStrong(8208);
    cout << ans;
    return 0;
}