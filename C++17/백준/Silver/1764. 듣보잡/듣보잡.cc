#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>
#include <algorithm>
using namespace std;

int N,M;
int cnt;
vector<string> v;
unordered_map<string,bool> m;
int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cin >> N >> M;
  while(N--) {
    string n1;
    cin >> n1;
    m.insert({n1,false});
  }
  while(M--) {
    string n2;
    cin >> n2;
    if(m.find(n2) != m.end()) {
      v.push_back(n2);
      cnt++;
    }
  }

  sort(v.begin(), v.end());
  cout << cnt << '\n';
  for(int i=0; i<v.size(); i++) {
    cout << v[i] << '\n';
  }
}