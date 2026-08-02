#include <iostream>
#include <string>

using namespace std;

int cnt;

int main() {
    // Please write your code here.
    string num;
    cin >> num;
    int sum = 0;
    for(int i=0; i<num.length(); i++) {
        int digit = num[i] - '0';
        sum = sum * 2 + digit;
    }
    cout << sum;
    return 0;
}