#include <iostream>
#include <utility>
#include <queue>
#include <algorithm>
using namespace std;

#define X first
#define Y second

int board[502][502];
bool vis[502][502];
int count_board = 0;
int maximum_size = 0;
int n,m;
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0 ,-1};


int main() {
  // freopen("input.txt","r",stdin);
  // freopen("output.txt","w", stdout); 
  ios::sync_with_stdio(0);
  cin.tie(0);

  cin >> n >> m;

  for(int i = 0; i < n; i++) { 
    for(int j = 0; j < m; j++) {
      cin >> board[i][j];
    }
  }

  for(int i = 0; i < n; i++) {
    for(int j = 0; j < m; j++) {
      if(board[i][j] == 0 || vis[i][j] == 1) continue;
      queue<pair<int, int> > Q;
      vis[i][j] = 1;
      int board_size = 0;
      Q.push({i,j});
      while(!Q.empty()) {
        pair<int, int> cur = Q.front();
        board_size++;
        Q.pop();

        for(int dir = 0; dir < 4; dir++) {
          int nx = cur.X + dx[dir];
          int ny = cur.Y + dy[dir];

          if(nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
          if(vis[nx][ny] == 1 || board[nx][ny] == 0) continue;

          vis[nx][ny] = 1;
          Q.push({nx,ny});
        }
      }
      count_board++;
      maximum_size = max(maximum_size, board_size);
    }
  }

  cout << count_board << '\n';
  cout << maximum_size;
}