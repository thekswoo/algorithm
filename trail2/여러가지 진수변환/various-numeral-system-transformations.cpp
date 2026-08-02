#include <iostream>
using namespace std;
int digits[20];
int main() {
    // Please write your code here.
    int N,B;
    int cnt = 0;

    cin >> N >> B;

    while(1) {
        if(N == 0) break;
        digits[cnt++] = N % B;
        N /= B;
    }

    for(int i = cnt - 1; i >= 0; i--) {
        cout << digits[i];
    }
    return 0;
}