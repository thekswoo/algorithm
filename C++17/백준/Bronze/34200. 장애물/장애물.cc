#include <iostream>
using namespace std;

bool board[250001];

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n;
  cin >> n;
  int x;

  for (int i = 0; i < n; i++) {
    cin >> x;
    board[x] = 1;
  }

  int cur = 0;
  int cnt = 0;

  while (cur <= x) {
    if (board[cur + 2]) {
        if (board[cur + 1]) {
            cout << "-1\n";
            return 0;
        }
        cur += 1;
        cnt++;
        continue;
    } 
    cur += 2;
    cnt++;
  }
  cout << cnt << '\n';
}