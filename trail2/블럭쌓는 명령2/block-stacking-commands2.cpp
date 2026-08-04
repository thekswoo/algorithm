#include <iostream>
using namespace std;
int arr[100];
int main() {
    // Please write your code here.
    int n,k;
    cin >> n >> k;

    for(int i=1; i<=k; i++) {
        int a,b;
        cin >> a >> b;

        for(int j=a; j<= b;j++) {
            arr[j]++;
        }
    }
    int max = -1;
    for(int i=1; i<=n; i++) {
        if(arr[i] > max) max = arr[i];
    }

    cout << max;
    return 0;
}