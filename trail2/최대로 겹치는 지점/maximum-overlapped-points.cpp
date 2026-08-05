#include <iostream>
using namespace std;
int board[101];
int main() {
    // Please write your code here.
    int N;
    cin >> N;
    
    for(int i=0; i<N; i++) {
        int a,b;
        cin >> a >> b;

        for(int j=a; j<= b; j++) {
            board[j]++;
        }
    }

    int max = 0;

    for(int i=0; i<101; i++) {
        if(max < board[i]) max = board[i];
    }

    cout << max;
    return 0;
}