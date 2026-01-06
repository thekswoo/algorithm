#include <iostream>

using namespace std;

int main() {
  int N, M;
  cin >> N >> M;
  int *buckets = new int[N];

  for (int a = 0; a < N; a++) {
    buckets[a] = a + 1;
  }

  for (int a = 0; a < M; a++) {
    int i, j;
    cin >> i >> j;

    int tmp = buckets[i - 1];
    buckets[i - 1] = buckets[j - 1];
    buckets[j - 1] = tmp;
  }

  for (int i = 0; i < N; i++) {
    cout << buckets[i] << ' ';
  }

  delete[] buckets;
}