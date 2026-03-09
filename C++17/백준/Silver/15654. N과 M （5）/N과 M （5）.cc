#include <iostream>
using namespace std;

int n,m;
bool isused[10000];
int arr[10];

void func(int k) {
    if(k == m) {
        for(int i=0; i<m; i++) {
            cout << arr[i] << ' ';
        }
        cout << '\n';
        return;
    }
    for(int i=0; i<10000; i++) {
        if(!isused[i]) continue;
        arr[k] = i;
        isused[i] = 0;
        func(k+1);
        isused[i] = 1;
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> m;

    for(int i=0; i<n; i++) {
        int x;
        cin >> x;
        isused[x] = 1;
    }

    func(0);
}