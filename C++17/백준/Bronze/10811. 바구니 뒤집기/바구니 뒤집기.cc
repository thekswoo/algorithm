#include <iostream>
using namespace std;

int N, M;
int a, b;

int main() {  
  cin >> N >> M;
  int *buckets = new int[N + 1];

  for (int i = 0; i < N + 1; i++) {
    buckets[i] = i;
  }

  for (int i = 0; i < M; i++) {
    cin >> a >> b;

    for (int j = a; j <= (a + b) / 2; j++) {
      int tmp = buckets[j];
      buckets[j] = buckets[a + b - j];
      buckets [a + b - j] = tmp;
    } 
  }

  for (int i = 1; i < N + 1; i++) {
    cout << buckets[i] << ' ';
  }

  delete[] buckets;
}