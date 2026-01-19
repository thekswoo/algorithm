#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int N;
int cnt = 0;

int main() {
  cin >> N;
  while(N--) {
    string word;
    cin >> word;
    int before_word = word[0] - 'a';
    bool alpha[26];
    bool is_group_word = true;
    fill(alpha,alpha + 26, false);
    for(int i=0; i<word.size(); i++) {
      int w = word[i];
      if(w != before_word && alpha[w - 'a']) {
        is_group_word = false;
      }else {
        alpha[w - 'a'] = 1;
      }
      before_word = w;
    }

    if(is_group_word) cnt++;
  }
  cout << cnt << '\n';
}