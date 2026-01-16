#include <algorithm>
#include <iostream>
#include <queue>
#include <utility>

using namespace std;

#define X first
#define Y second

int dest[302][302];
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
int tmp[2] = {1, -1};
int testcase;
int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  cin >> testcase;
  while (testcase--) {
    int I;
    int knight_x, knight_y;
    int object_x, object_y;
    bool is_fin = false;
    cin >> I;
    cin >> knight_x >> knight_y;
    cin >> object_x >> object_y;

    if(knight_x == object_x && knight_y == object_y) {
      cout << "0\n";
      continue;
    }
    for (int i = 0; i < I; i++) {
      fill(dest[i], dest[i] + I, -1);
    }

    queue<pair<int, int>> Q;
    dest[knight_x][knight_y] = 0; // 나이트 위치
    Q.push({knight_x, knight_y});
    
    while (!Q.empty()) {
      pair<int, int> cur = Q.front();
      Q.pop();

      for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 2; j++) {
          int nx = cur.X + dx[i] * 2;
          int ny = cur.Y + dy[i] * 2;
          if (dx[i] != 0)
            ny += tmp[j];
          if (dy[i] != 0) {
            nx += tmp[j];
          }

          if (nx < 0 || nx >= I || ny < 0 || ny >= I) {
            continue;
          }
          if(dest[nx][ny] != -1) continue;
          if (nx == object_x && ny == object_y) {
            cout << dest[cur.X][cur.Y] + 1 << '\n';
            is_fin = true;
            break;
          }
          Q.push({nx, ny});
          dest[nx][ny] = dest[cur.X][cur.Y] + 1;
        }
        if (is_fin) {
          break;
        }
      }
      if (is_fin) {
        break;
      }
    }
  }
}