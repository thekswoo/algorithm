#include <iostream>
#include <algorithm>
#include <utility>
#include <queue>
using namespace std;

#define X first
#define Y second
int t,m,n,k,x,y;

int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};


int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  // freopen("input.txt","r",stdin);
  // freopen("output.txt","w", stdout);

  cin >> t;
  while(t--) {
    int num = 0;
    cin >> m >> n >> k;
    int board[50][50];
    bool vis[50][50];

    for(int i = 0; i < n; i++) {
      fill(vis[i], vis[i] + m, false);
      fill(board[i], board[i] + m, 0);
    }
    
    while(k--) {
      cin >> y >> x;
      board[x][y] = 1;
    }

    for(int i=0; i<n; i++) {
      for(int j=0; j<m; j++) {
        if(vis[i][j] == true || board[i][j] == 0) continue;
        queue<pair<int,int> > Q;
        vis[i][j] = true;
        Q.push({i,j});
        num++;
        while(!Q.empty()) {
          pair<int, int> cur = Q.front(); Q.pop();
          for(int l=0; l<4; l++) {
            int nx = cur.X + dx[l];
            int ny = cur.Y + dy[l];

            if(nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
            if(vis[nx][ny] == true || board[nx][ny] == 0) continue;
            vis[nx][ny] = true;
            Q.push({nx,ny});
          }
        }
      }
    }
    
    cout << num << '\n';
  }
}