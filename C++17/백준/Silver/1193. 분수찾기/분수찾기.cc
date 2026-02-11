#include <iostream>
using namespace std;

int a;
int b;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    int index = 0;
    int tmp = 1;
    bool mode = 0;
    while(1) {
        if(mode) {
            for(int i=0; i<tmp; i++) {
                a = i + 1;
                b = tmp - i;
                index++;
                mode = 0;
                if(index == n) break;
            }
        } else {
            for(int i=0; i<tmp; i++) {
                b = i + 1;
                a = tmp - i;
                index++;
                mode = 1;
                if(index == n) break;
            }
        }
        tmp++;
        if(index >= n) break;
    }
    
    cout << a << '/' << b << '\n';
}