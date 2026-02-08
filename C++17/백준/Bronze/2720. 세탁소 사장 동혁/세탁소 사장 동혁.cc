#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int testcase;
    cin >> testcase;

    while(testcase--) {
        int money;
        int q = 0;
        int d = 0;
        int n = 0;
        int p = 0;
        cin >> money;
        q = money / 25;
        money %= 25;
        d = money / 10;
        money %= 10;
        n = money / 5;
        money %= 5;
        p = money / 1;
        cout << q << ' ' << d << ' ' << n << ' ' << p << '\n';

    }
}