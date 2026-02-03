#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    vector<int> v;
    for(int i=0; i<3; i++) {
        int num;
        cin >> num;
        v.push_back(num);
    }
    sort(v.begin(), v.end());
    cout << v[1];
}