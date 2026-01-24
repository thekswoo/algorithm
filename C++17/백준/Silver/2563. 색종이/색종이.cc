#include <iostream>
#include <algorithm>
using namespace std;

int board[102][102];
int N;
int cnt;
int main() {
  cin >> N;
  while(N--) {
    int w,h;
    cin >> w >> h;
    for(int i=w; i<w+10; i++) {
      for(int j=h; j<h+10; j++) {
        board[i][j] = 1;
      }
    }
  }

  for(int i=0; i<100; i++) {
    for(int j=0; j<100; j++) {
      if(board[i][j] == 1) cnt++;
    }
  }

  cout << cnt;
}