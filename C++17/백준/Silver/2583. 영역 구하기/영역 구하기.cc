#include <iostream>
#include <queue>
#include <utility>
#include <algorithm>
#include <vector>
using namespace std;

#define X first
#define Y second

int M,N,K;
bool vis[101][101];
int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};
int cnt;
vector<int> sizes;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  
  cin >> M >> N >> K;
  while(K--) {
    int x,y,xx,yy;
    cin >> y >> x >> yy >> xx;
    
    for(int i=x; i<xx; i++) {
      for(int j=y; j<yy; j++) {
        vis[i][j] = 1;
      }
    }
  }

  
  queue<pair<int, int> > Q;
  
  for(int i=0; i<M; i++) {
    for(int j=0; j<N; j++) {
      if(vis[i][j]) continue;
      Q.push({i,j});
      vis[i][j] = 1;
      cnt++;
      int s = 0;
      while(!Q.empty()) {
        pair<int, int> cur = Q.front(); Q.pop();
        s++;
        for(int dir = 0; dir<4; dir++) {
          int nx = dx[dir] + cur.X;
          int ny = dy[dir] + cur.Y;
          
          if(nx < 0 || nx >= M || ny < 0 || ny >= N) continue;
          if(vis[nx][ny] == 1) continue;
          
          vis[nx][ny] = 1;
          Q.push({nx,ny});
        }
        
      }
      sizes.push_back(s);
    }
  }

  sort(sizes.begin(), sizes.end());
  cout << cnt <<'\n';
  for(int i=0; i<cnt; i++) {
    cout << sizes[i] << ' ';
  }

  cout << '\n';

}
