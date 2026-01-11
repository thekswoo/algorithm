#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;

int N,K;
int arr[100002];
int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  cin >> N >> K;
  fill(arr,arr+100002,-1);
  arr[N] = 0;
  queue<int> Q;

  Q.push(N);

  if(N == K) {
    cout << 0; return 0;
  }

  while(!Q.empty()) {
    int cur = Q.front(); Q.pop();
    for(int i=0; i<3; i++) {
      int nx;
      if(i == 0) nx = cur - 1;
      else if(i == 1) nx = cur + 1;
      else nx = cur * 2;
      
      if(nx < 0 || nx >= 100002) continue;
      if(arr[nx] != -1) continue;

      arr[nx] = arr[cur] + 1;
      Q.push({nx});
    }
  }

  cout << arr[K];
}