#include <iostream>
#include <string>
using namespace std;

string str;
int cnt = 0;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cin >> str;
  for (int i = 0; i < str.length(); i++) {
    if (i + 2 < str.length()) {
      string three = str.substr(i, 3);
      if (three == "dz=") {
        i = i + 2;
      }
    }
    if (i + 1 < str.length()) {
      string two = str.substr(i, 2);
      if (two == "c=" || two == "c-" || two == "d-" || two == "lj" ||
          two == "nj" || two == "s=" || two == "s=" || two == "z=") {
        i = i + 1;
      }
    }
    cnt++;
  }
  cout << cnt;
}