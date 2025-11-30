#include <iostream>
using namespace std;

int main() {
  int arr[1002] = {0};
  int idx = 1; 

  for (int i = 1; i <= 100; i++) { // 충분한 범위로 반복
    for (int j = 0; j < i; j++) {  // i번 반복
      if (idx >= 1001)
        break;      // 배열 범위를 넘어가면 중단
      arr[idx] = i; // 현재 위치에 i 값을 대입
      idx++;        // 다음 칸으로 이동
    }
    if (idx >= 1001)
      break; // 바깥 루프도 중단
  }

//   for (int i = 0; i < 1000; i++) {
//     cout << arr[i] << " ";
//     if( i %10 == 0) cout << "\n";
//   }

  int A, B;
  cin >> A >> B;
  int sum = 0;
  for (int i = A; i <= B; i++) {
    sum += arr[i];
  }

  cout << sum << "\n";

  return 0;
}