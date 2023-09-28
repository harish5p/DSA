// 1234
// 5123
// 9512

#include <bits/stdc++.h>
using namespace std;

bool isToeplitz(int arr[3][4]) {
  for (int i = 1; i < 3; i++) {
    for (int j = 1; j < 4; j++) {
      if (arr[i][j] != arr[i - 1][j - 1]) {
        return false;
      }
    }
  }
  return true;
}

int main() {
  int arr[3][4] = {{1, 2, 3, 4}, {5, 1, 2, 3}, {9, 5, 1, 2}};

  if (isToeplitz(arr)) {
    cout << "It is a Toeplitz matrix" << '\n';
  } else {
    cout << "It is not a Toeplitz matrix" << '\n';
  }
}
