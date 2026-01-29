#include <algorithm>
#include <iostream>
#include <queue>
#include <string>
#include <utility>
#include <vector>
using namespace std;
#define X first
#define Y second

bool vis[26][26];
string board[26];
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
int N;
int aptNum = 0;
vector<int> v;
int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cin >> N;
  for (int i = 0; i < N; i++) {
    cin >> board[i];
  }

  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      if (vis[i][j] == 0 && board[i][j] == '1') {
        queue<pair<int, int>> Q;
        Q.push({i, j});
        vis[i][j] = 1;
        int houseNum = 0;
        aptNum++;
        
        while (!Q.empty()) {
          houseNum++;
          pair<int, int> cur = Q.front();
          Q.pop();
          
          for (int dir = 0; dir < 4; dir++) {
            int nx = dx[dir] + cur.X;
            int ny = dy[dir] + cur.Y;
            
            if (nx < 0 || nx >= N || ny < 0 || ny >= N)
            continue;
            if (board[nx][ny] != '1' || vis[nx][ny] == 1)
            continue;
            
            Q.push({nx, ny});
            vis[nx][ny] = 1;
          }
        }
        v.push_back(houseNum);
      }
    }
  }

  cout << aptNum << '\n';
  sort(v.begin(), v.end());
  for (auto i : v) {
    cout << i << '\n';
  }
}