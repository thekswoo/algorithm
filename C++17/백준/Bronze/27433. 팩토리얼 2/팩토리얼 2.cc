#include <iostream>
using namespace std;
int N;

long long factorial(int n) {
  if(n == 0) return 1;
  return n * factorial(n-1);

}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cin >> N;
  cout << factorial(N);
}
