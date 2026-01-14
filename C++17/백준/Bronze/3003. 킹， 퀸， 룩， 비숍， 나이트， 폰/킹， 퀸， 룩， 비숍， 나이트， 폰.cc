#include <iostream>
using namespace std;

int board[6] = {1,1,2,2,2,8};
int cnt[6];
int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  
  for(int i=0; i<6; i++) {
   cin >> cnt[i];
   cout << board[i] - cnt[i] << ' ';
  }
}