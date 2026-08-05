#include <iostream>
using namespace std;

int board[201];

int main() {
    // Please write your code here.
    int N;
    cin >> N;
    for(int i=0; i<N; i++) {
        int a,b;
        cin >> a >> b;

        for(int j=a; j<b; j++) {
            board[j+100]++;
        }
    }

    int max = 0;
    for(int i=0; i<201; i++) {
        if(board[i] > max) max = board[i];
    }

    cout << max;
    return 0;
}