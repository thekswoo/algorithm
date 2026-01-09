#include <iostream>
#include <string>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  // freopen("input.txt","r",stdin);
  // freopen("output.txt","w", stdout);

  string str;
  int time = 0;
  cin >> str;
  for(int i=0; i<str.size(); i++) {
    if(str[i] >= 'A' && str[i] <= 'C') {
      time += 3;
    } else if(str[i] >= 'D' && str[i] <= 'F') {
      time += 4;
    } else if(str[i] >= 'G' && str[i] <= 'I') {
      time += 5;
    } else if(str[i] >= 'J' && str[i] <= 'L') {
      time += 6;
    } else if(str[i] >= 'M' && str[i] <= 'O') {
      time += 7;
    } else if(str[i] >= 'P' && str[i] <= 'S') {
      time += 8;
    } else if(str[i] >= 'T' && str[i] <= 'V') {
      time += 9;
    } else if(str[i] >= 'W' && str[i] <= 'Z') {
      time += 10;
    }
  }

  cout << time;
}