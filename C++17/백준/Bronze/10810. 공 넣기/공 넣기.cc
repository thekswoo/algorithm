#include <iostream>

using namespace std;

int main() {
  int N, M;
  cin >> N >> M;
  int *buckets = new int[N]; // N크기 동적 할당

  for (int a = 0; a < N; a++) { // 바구니 0으로 초기화
    buckets[a] = 0;
  }

  for (int a = 0; a < M; a++) {
    int i,j,k;
    cin >> i >> j >> k;
    for(int b = i; b <= j; b++) {
      buckets[b - 1] = k;
    }
  }

  for (int i = 0; i < N; i++) {
    cout << buckets[i] << ' ';
  }

  delete[] buckets;
}