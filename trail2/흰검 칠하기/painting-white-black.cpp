#include <iostream>
using namespace std;

int white[200001];
int black[200001];
int current[200001];
int cur, w, b, g;

#define offset 100000

int main() {
    // Please write your code here.

    int n;
    cin >> n;

    for(int i=0; i<n; i++) {
        int a; char b;

        cin >> a >> b;

        if(b == 'R') {
            for(int j=cur; j<cur+a; j++) {
                current[j + offset] = 2;
                black[j + offset]++;
                if(black[j + offset] >= 2 && white[j + offset] >= 2) current[j + offset] = 3;
            }
            cur += a-1;

        } else {
            for(int j=cur; j>= cur - a + 1; j--) {
                current[j + offset] = 1;
                white[j + offset]++;
                if(black[j + offset] >= 2 && white[j + offset] >= 2) current[j + offset] = 3;
            }
            cur -= a-1;
        }
    }

    for(int i=0; i<200001; i++) {
        if(current[i] == 1) w++;
        else if(current[i] == 2) b++;
        else if(current[i] == 3) g++;
    }

    cout << w << ' ' << b << ' ' << g;

    return 0;
}