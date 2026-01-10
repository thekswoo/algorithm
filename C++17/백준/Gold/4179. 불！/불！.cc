#include <iostream>
#include <string>
#include <algorithm>
#include <queue>
#include <utility>
using namespace std;

#define X first
#define Y second

string board[1002];
int dist1[1002][1002]; // 지훈이
int dist2[1002][1002]; // 불 이동 경로
int R,C;
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

int main() {
  // freopen("input.txt","r",stdin);
  // freopen("output.txt","w", stdout);

  ios::sync_with_stdio(0);
  cin.tie(0);

  cin >> R >> C;
  for(int i=0; i<R; i++) {
    cin >> board[i];
    fill(dist1[i], dist1[i] + C, -1);
    fill(dist2[i], dist2[i] + C, -1);
  }

  queue<pair<int, int> > Q1; // 지훈이
  queue<pair<int, int> > Q2; // 불

  for(int i=0; i<R; i++) {
    for(int j=0; j<C; j++) {
      if(board[i][j] == 'J') {
        Q1.push({i,j});
        dist1[i][j] = 0;
      }
      if(board[i][j] == 'F') {
        Q2.push({i,j});
        dist2[i][j] = 0;
      }
    }
  }

  //불 bfs
  while(!Q2.empty()) {
    pair<int, int> cur = Q2.front(); Q2.pop();
    for(int i=0; i<4; i++) {
      int nx = cur.X + dx[i];
      int ny = cur.Y + dy[i];

      if(nx < 0 || nx >= R || ny < 0 || ny >= C) continue;
      if(board[nx][ny] == '#' || dist2[nx][ny] != -1) continue;

      dist2[nx][ny] = dist2[cur.X][cur.Y] + 1;
      Q2.push({nx, ny});
    }
  }

  //지훈이 bfs
  while(!Q1.empty()) {
    pair<int, int> cur = Q1.front(); Q1.pop();
    for(int i = 0; i<4; i++) {
      int nx = cur.X + dx[i];
      int ny = cur.Y + dy[i];

      if(nx < 0 || nx >= R || ny < 0 || ny >= C) {
        cout << dist1[cur.X][cur.Y] + 1;
        return 0;
      }
      //벽 이동 X, 이미 방문했던 노드 이동 X
      if(board[nx][ny] == '#' || dist1[nx][ny] != -1) continue; 
      if(dist2[nx][ny] != -1 && dist2[nx][ny] <= dist1[cur.X][cur.Y] + 1) continue;
      //지훈이가 네 방향 중 한 방향 이동 후 거리와 이미 불이면 패스


      dist1[nx][ny] = dist1[cur.X][cur.Y] + 1;
      Q1.push({nx, ny});
    }
  }

  cout << "IMPOSSIBLE";
  return 0;
}