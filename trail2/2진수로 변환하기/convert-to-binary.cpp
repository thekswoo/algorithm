#include <iostream>
using namespace std;
int digits[20];
int cnt = 0;
int main() {
    // Please write your code here.
    int n;
    cin >> n;

    while(1) {
        if(n < 2) {
            digits[cnt++] = n;
            break;
        }

        digits[cnt++] = n % 2;
        n /= 2;
    }

    for(int i=cnt - 1; i >= 0; i--) {
        cout << digits[i];
    }
    return 0;
}