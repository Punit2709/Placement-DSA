#include<iostream>
#include<string> 

using namespace std; 

void sayCount(int n, string arr[]) {
    if (n == 0) {
        return;
    }
    int digit = n % 10;
    n = n / 10;
    sayCount(n, arr); 
    cout << arr[digit] << " "; 
}

int main() {
    string arr[10] = {"Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
    sayCount(5123, arr);
    return 0;
}
