#include <iostream>
using namespace std;

int board[2001];
int cur,ans;

int main() {
    // Please write your code here.
    int n;
    
    cin >> n;

    for(int i=0; i<n; i++) {
        int a; char b;
        cin >> a >> b;

        if(b == 'R') {
            for(int i=cur; i<cur+a; i++) {
                board[i+1000]++;
            }
            cur += a;
        } else {
            for(int i=cur-1; i>=cur-a; i--) {
                board[i+1000]++;
            }
            cur -= a;
        }


    }
    
    for(int i=0; i<2001; i++) {
        if(board[i] >= 2) ans++;
    }

    cout << ans;

    return 0;
}