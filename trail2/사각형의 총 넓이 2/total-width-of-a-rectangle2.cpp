#include <iostream>
using namespace std;

bool board[200][200];
int cnt;

int main() {
    // Please write your code here.
    int n;
    cin >> n;

    for(int i=0; i<n; i++) {
        int x1,y1,x2,y2;
        cin >> x1 >> y1 >> x2 >> y2;
        x1 += 100;
        y1 += 100;
        x2 += 100;
        y2 += 100;

        for(int j=0; j<200; j++) {
            for(int k=0; k<200; k++) {
                if(j >= x1 && j < x2 && k >= y1 && k < y2) {
                    board[j][k] = 1;
                }
            }
        }
    }

    for(int i=0; i<200; i++) {
        for(int j=0; j<200; j++) {
            if(board[i][j]) cnt++;
        }
    }

    cout << cnt;

    return 0;
}