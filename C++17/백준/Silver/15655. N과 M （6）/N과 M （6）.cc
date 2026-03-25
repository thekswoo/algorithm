#include <iostream>
#include <algorithm>
using namespace std;

int n,m;
int arr[10]; //num[]의 index 순서 삽입
int num[10]; //입력 값
bool isused[10]; //해당 index에 해당하는 값 사용 여부

void func(int k) {
    if(k==m) {
        for(int i=0; i<m; i++) {
            if(!isused[i]) {
                cout << num[arr[i]] << ' ';
            }
        }
        cout << '\n';
        return;
    }
    int st = 0;
    if(k != 0) st = arr[k-1] + 1; //첫번째가 아니면 앞 arr[k-1] 보다 1 부터 시작
    for(int i=st; i<n; i++) {
        if(!isused[i]) {
            arr[k] = i;
            func(k+1);
        }
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> m;

    for(int i=0; i<n; i++) {
        cin >> num[i] ;
    }

    sort(num,num+n);

    func(0);
}