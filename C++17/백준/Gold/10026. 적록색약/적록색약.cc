#include <algorithm>
#include <iostream>
#include <queue>
#include <string>
#include <utility>
using namespace std;

#define X first
#define Y second

bool NormalVis[102][102];
bool GreenRedVis[102][102];
string board[102];
int N;
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
int NormalCnt = 0;
int GreenRedCnt = 0;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);


  cin >> N;

  for (int i = 0; i < N; i++) {
    cin >> board[i];
  }

  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      if (NormalVis[i][j] == 1)
        continue;
      if (board[i][j] == 'R') {
        queue<pair<int, int>> Q;
        Q.push({i, j});
        NormalVis[i][j] = 1;
        NormalCnt++;
        while (!Q.empty()) {
          pair<int, int> cur = Q.front();
          Q.pop();
          for (int dir = 0; dir < 4; dir++) {
            int nx = cur.X + dx[dir];
            int ny = cur.Y + dy[dir];
            if (nx < 0 || nx >= N || ny < 0 || ny >= N)
              continue;
            if (NormalVis[nx][ny] == 1 || board[nx][ny] != 'R')
              continue;
            Q.push({nx, ny});
            NormalVis[nx][ny] = 1;
          }
        }
      }
      if (board[i][j] == 'G') {
        queue<pair<int, int>> Q;
        Q.push({i, j});
        NormalVis[i][j] = 1;
        NormalCnt++;
        while (!Q.empty()) {
          pair<int, int> cur = Q.front();
          Q.pop();
          for (int dir = 0; dir < 4; dir++) {
            int nx = cur.X + dx[dir];
            int ny = cur.Y + dy[dir];
            if (nx < 0 || nx >= N || ny < 0 || ny >= N)
              continue;
            if (NormalVis[nx][ny] == 1 || board[nx][ny] != 'G')
              continue;
            Q.push({nx, ny});
            NormalVis[nx][ny] = 1;
          }
        }
      }
      if (board[i][j] == 'B') {
        queue<pair<int, int>> Q;
        Q.push({i, j});
        NormalVis[i][j] = 1;
        NormalCnt++;
        while (!Q.empty()) {
          pair<int, int> cur = Q.front();
          Q.pop();
          for (int dir = 0; dir < 4; dir++) {
            int nx = cur.X + dx[dir];
            int ny = cur.Y + dy[dir];
            if (nx < 0 || nx >= N || ny < 0 || ny >= N)
              continue;
            if (NormalVis[nx][ny] == 1 || board[nx][ny] != 'B')
              continue;
            Q.push({nx, ny});
            NormalVis[nx][ny] = 1;
          }
        }
      }
    }
  }

  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      if (GreenRedVis[i][j] == 1)
        continue;
      if (board[i][j] != 'B') {
        queue<pair<int, int>> Q;
        Q.push({i, j});
        GreenRedVis[i][j] = 1;
        GreenRedCnt++;
        while (!Q.empty()) {
          pair<int, int> cur = Q.front();
          Q.pop();
          for (int dir = 0; dir < 4; dir++) {
            int nx = cur.X + dx[dir];
            int ny = cur.Y + dy[dir];
            if (nx < 0 || nx >= N || ny < 0 || ny >= N)
              continue;
            if (GreenRedVis[nx][ny] == 1 || board[nx][ny] == 'B')
              continue;
            Q.push({nx, ny});
            GreenRedVis[nx][ny] = 1;
          }
        }
      } else {
        queue<pair<int, int>> Q;
        Q.push({i, j});
        GreenRedVis[i][j] = 1;
        GreenRedCnt++;
        while (!Q.empty()) {
          pair<int, int> cur = Q.front();
          Q.pop();
          for (int dir = 0; dir < 4; dir++) {
            int nx = cur.X + dx[dir];
            int ny = cur.Y + dy[dir];
            if (nx < 0 || nx >= N || ny < 0 || ny >= N)
              continue;
            if (GreenRedVis[nx][ny] == 1 || board[nx][ny] != 'B')
              continue;
            Q.push({nx, ny});
            GreenRedVis[nx][ny] = 1;
          }
        }
      }
    }
  }

  cout << NormalCnt << ' ' << GreenRedCnt;
}