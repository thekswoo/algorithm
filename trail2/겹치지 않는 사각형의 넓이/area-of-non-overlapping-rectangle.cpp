#include <iostream>
using namespace std;

bool board[2002][2002];
int cnt = 0;

void print(){
    for(int i=0; i<10;i++) {
        for(int j=0; j<10; j++) {
            cout << board[i][j] << ' ';
        }
        cout << '\n';
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    for (int i = 0; i < 3; i++) {
        int x1, x2, y1, y2;
        cin >> x1 >> y1 >> x2 >> y2;

        x1 += 1000;
        y1 += 1000;
        x2 += 1000;
        y2 += 1000;
        // cout << "i == " << i << '\n';
        if (i != 2) {
            for (int j = x1; j < x2; j++) {
                for (int k = y1; k < y2; k++) {
                    board[j][k] = 1;
                }
            }
        } else {
            for (int j = x1; j < x2; j++) {
                for (int k = y1; k < y2; k++) {
                    board[j][k] = 0;
                }
            }
        }
        // print();
        // cout << '\n';
    }

    for (int i = 0; i<2002; i++) {
        for (int j = 0; j < 2002; j++) {
            if(board[i][j]) cnt++;
        }
    }

    cout << cnt;

    return 0;
}