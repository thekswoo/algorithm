#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {
  // freopen("input.txt","r",stdin);
  // freopen("output.txt","w", stdout); 

  int a,b;
  cin >> a >> b;
  string a_str = to_string(a);
  string b_str = to_string(b);
  reverse(a_str.begin(), a_str.end());
  reverse(b_str.begin(), b_str.end());
  a = stoi(a_str);
  b = stoi(b_str);

  if(a > b) cout << a;
  else cout << b;
}
