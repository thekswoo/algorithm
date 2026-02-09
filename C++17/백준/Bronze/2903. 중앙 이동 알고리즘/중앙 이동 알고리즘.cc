#include <iostream>
using namespace std;

int N;
int board[16] ={0,9};
int a = 3;
int power = 2;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    for(int i=2;i<=15;i++) {
        a += power;
        board[i] = a*a;
        power *= 2;
    }
    cin >> N;
    cout << board[N];
}