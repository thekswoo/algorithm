#include <iostream>
#include <set>
#include <string>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int N,M;
  int cnt = 0;
  cin >> N >> M;
  set<string> s;

  while(N--) {
    string word1;
    cin >> word1;
    s.insert(word1);
  }
  while(M--) {
    string word2;
    cin >> word2;
    if(s.find(word2) != s.end()) {
      cnt++;
    }
  }
  cout << cnt;
}