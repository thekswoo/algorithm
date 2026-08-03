#include <iostream>
using namespace std;
int arr[20];
int main() {
    // Please write your code here.
    string binary;
    int sum = 0;

    cin >> binary;

    for(int i=0; i<binary.length(); i++) {
        sum = sum * 2 + binary[i] - '0';
    }

    sum *= 17;
    int cnt = 0;

    while(1) {
        if(sum == 0) break;

        arr[cnt++] = sum % 2;
        sum /= 2;
    }

    for(int i = cnt - 1; i >= 0; i--) {
        cout << arr[i];
    }

    return 0;
}