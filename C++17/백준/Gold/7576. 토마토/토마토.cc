#include <iostream>
#include <queue>
#include <utility>
#include <algorithm>
using namespace std;

#define X first
#define Y second

int board[1002][1002];
int dist[1002][1002];
int N,M;
int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};
int max_day = 0;
bool ans = false;
int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  // freopen("input.txt","r",stdin);
  // freopen("output.txt","w", stdout);

  cin >> M >> N;
  queue<pair<int, int> > Q;
  for(int i = 0; i < N; i++) {
    for(int j = 0; j < M; j++) {
      cin >> board[i][j];
      if(board[i][j] == 1) {
        dist[i][j] = 0;
        Q.push({i,j});}
      else if(board[i][j] == 0){
        dist[i][j] = -1;
      }
    }
  }

  while(!Q.empty()) {
    pair<int, int> cur = Q.front(); Q.pop();
    for(int i=0; i<4; i++) {
      int nx = cur.X + dx[i];
      int ny = cur.Y + dy[i];

      if(nx < 0 || nx >= N || ny < 0 || ny >= M) continue;
      if(dist[nx][ny] >= 0) continue;
      dist[nx][ny] = dist[cur.X][cur.Y] + 1;
      Q.push({nx,ny});
    }
  }

  for(int i=0; i<N; i++) {
    for(int j=0; j<M; j++) {
      if(dist[i][j] == -1) {
        cout << -1;
        return 0;
      }

      max_day = max(dist[i][j], max_day);
    }
  }
  cout << max_day;
}