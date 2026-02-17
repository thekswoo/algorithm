#include <iostream>
using namespace std;

int board[30][30];

void pascal() {
    for(int i=0; i<30; i++) {
        board[i][0] = 1;
        board[i][i] = 1;
        for(int j=1; j<i; j++) {
            board[i][j] = board[i-1][j-1] + board[i-1][j];
        }
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    pascal();

    int t;
    cin >> t;
    while(t--) {
        int n,m;
        cin >> n >> m;
        cout << board[m][n] << '\n';
    }

}