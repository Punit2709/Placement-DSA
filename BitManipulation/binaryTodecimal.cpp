#include<bits/stdc++.h>
using namespace std;

int binary_to_decimal(string binary){
    int len = binary.length();
    int index = len - 1;
    int num = 0;
    while(index >= 0){
        if(binary[index] == '1'){
            num += pow(2, len-index-1);
        }
        index--;
    }
    return num;
}
int main()
{
    int num = binary_to_decimal("100110011");
    cout << num;
    return 0;
}