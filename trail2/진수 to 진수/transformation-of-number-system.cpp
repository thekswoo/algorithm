#include <iostream>
using namespace std;

int arr[20];
int cnt;

int main() {
    // Please write your code here.
    int a,b;
    string n;
    
    cin >> a >> b >> n;
    int power = 1;
    int sum = 0;

    for(int i=n.length() - 1; i>=0; i--) {
        sum = sum + (n[i] - '0') * power;
        power *= a;
    }

    while(1) {
        if(sum == 0) break;

        arr[cnt++] = sum % b;
        sum /= b;
    }

    for(int i=cnt - 1; i>=0; i--) {
        cout << arr[i];
    }

    return 0;
}