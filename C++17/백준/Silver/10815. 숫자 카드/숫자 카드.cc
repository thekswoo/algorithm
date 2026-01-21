#include <iostream>
using namespace std;

int N, M;
bool plus_board[10000001];
bool minus_board[10000001];
int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  cin >> N;
  while (N--) {
    int n1;
    cin >> n1;
    if (n1 >= 0)
      plus_board[n1] = 1;
    else
      minus_board[-n1] = 1;
  }
  cin >> M;
  while (M--) {
    int n2;
    cin >> n2;
    if (n2 >= 0) {
      cout << plus_board[n2] << ' ';
    } else {
      cout << minus_board[-n2] << ' ';
    }
  }
}