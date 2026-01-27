#include <iostream>
using namespace std;
bool compare(int i, int j) {
  return j < i;
}
int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int a,b;
  cin >> a >> b;
  cout << a * b;
}