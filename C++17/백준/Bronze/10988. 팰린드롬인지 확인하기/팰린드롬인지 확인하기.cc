#include <iostream>
#include <string>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  string word;
  bool is_palin = true;
  cin >> word;
  for(int i=0; i<word.size() / 2; i++) {
    if(word[i] != word[word.size() - i - 1]) is_palin = false;
  }
  if(is_palin) cout << 1;
  else cout << 0;
}