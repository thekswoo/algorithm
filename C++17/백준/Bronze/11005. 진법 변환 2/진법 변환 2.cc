#include <iostream>
#include <cmath>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    long long N,B;
    cin >> N >> B;
    long long power = B;
    long long cnt = 0;
    
    while(1) {
        if(N / power == 0) {
            break;
        }
        cnt++;
        power *= B;
    }

    while(cnt >= 0) {
        long long a = pow(B,cnt); 
        long long digit = N / a; // 현재 자릿수 값
        if(digit >=10) {
            cout << (char)(digit - 10 + 'A');
        } else {
            cout << digit;
        }
        N %= a;
        cnt--;
    }
    
}