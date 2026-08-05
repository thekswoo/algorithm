#include <iostream>
using namespace std;

int board[200000];
int cur;

#define offset 100000
int main() {
    // Please write your code here.
    int n;
    cin >> n;

    for(int i=0; i<n; i++) {
        int a; char b;
        cin >> a >> b;

        if(b == 'L') {
            for(int j = cur; j >= cur - a + 1; j--) {
                board[j + offset] = 1; // white
            }
            cur -= a - 1;
        } else {
            for(int j = cur; j < cur + a; j++) {
                board[j + offset] = 2; // black
            }
            cur += a - 1;
        }
    }
    
    int b_cnt = 0;
    int w_cnt = 0;

    for(int i=0; i<200000; i++) {
        if(board[i] == 1) w_cnt++;
        else if(board[i] == 2) b_cnt++;
    }

    cout << w_cnt << ' ' << b_cnt;

    return 0;
}