#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    string N;
    long long B;
    long long sum = 0;

    cin >> N >> B;

    int N_size = N.length();

    for(int i=0; i<N_size; i++) {
        long long num;
        if(N[i] >= 65) {
            num = pow(B,N_size - i - 1) * (N[i] - 55);
            sum += num;
        } else {
            num = pow(B,N_size - i - 1) * (N[i] - 48);
            sum += num;
        }
    }
    cout << sum;
}