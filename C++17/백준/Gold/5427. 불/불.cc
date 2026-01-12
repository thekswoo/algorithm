#include <iostream>
#include <string>
#include <utility>
#include <queue>
using namespace std;
#define X first
#define Y second

int testcase,w,h;

int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};
int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  cin >> testcase;

  while(testcase--) {
    bool is_fin = false;

    cin >> w >> h;
    string board[1002];
    int dist1[1002][1002]; // 불
    int dist2[1002][1002]; // 상근이

    for(int i=0; i<h; i++) {
      cin >> board[i];
      fill(dist1[i],dist1[i] + w, -1);
      fill(dist2[i],dist2[i] + w, -1);
    }

    queue<pair<int, int> > Q1; // 불
    queue<pair<int, int> > Q2; // 상근이

    for(int i=0; i<h; i++) {
      for(int j=0; j<w; j++) {
        if(board[i][j] == '*') {
          dist1[i][j] = 0;
          Q1.push({i,j});

        }
        if(board[i][j] == '@') {
          dist2[i][j] = 0;
          Q2.push({i,j});
        }
      }
    }

    while(!Q1.empty()) {
      pair<int, int> cur1 = Q1.front(); Q1.pop();

      for(int i=0; i<4; i++) {
        int nx = dx[i] + cur1.X;
        int ny = dy[i] + cur1.Y;
        if(nx < 0 || nx >= h || ny < 0 || ny >= w) continue;
        if(board[nx][ny] == '#' || dist1[nx][ny] >= 0 ) continue;
        dist1[nx][ny] = dist1[cur1.X][cur1.Y] + 1;
        Q1.push({nx,ny});
      }
    }

    
    while(!Q2.empty()) {
      pair<int, int> cur2 = Q2.front(); Q2.pop();

      for(int i=0; i<4; i++) {
        int nx = dx[i] + cur2.X;
        int ny = dy[i] + cur2.Y;
        if(nx < 0 || nx >= h || ny < 0 || ny >= w) {
          cout << dist2[cur2.X][cur2.Y] + 1 << '\n';
          is_fin = true;
          break;
        }
        if(dist2[nx][ny] >= 0 || board[nx][ny] == '#') continue;
        if(dist1[nx][ny] != -1 && dist1[nx][ny] <= dist2[cur2.X][cur2.Y] + 1 ) continue;
        
        dist2[nx][ny] = dist2[cur2.X][cur2.Y] + 1;
        Q2.push({nx,ny});
      }
      if(is_fin) break;
    }
    if(!is_fin) cout << "IMPOSSIBLE\n";
  }
}