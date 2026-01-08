#include <iostream>
using namespace std;

int main() {
  // freopen("input.txt","r",stdin);
  // freopen("output.txt","w", stdout);  

  int T;
  cin >> T;

  while(T--){
    string str;
    cin >> str;
    cout << str[0] << str[str.size()-1] << '\n';
  }
}