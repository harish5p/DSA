#include <functional>
#include <iostream>
#include <vector>
using namespace std;

int main() {

  int arr[3][4] = {{1, 2, 3, 4}, {5, 1, 2, 3}, {9, 5, 1, 2}};

  cout << "Original matrix: " << '\n';
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 4; j++) {
      cout << arr[i][j] << " ";
    }
    cout << '\n';
  }

  int transpose[4][3];
  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 3; j++) {
      transpose[i][j] = arr[j][i];
    }
  }
  cout << "Transposed matrix: " << '\n';

  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 3; j++) {
      cout << transpose[i][j] << " ";
    }
    cout << '\n';
  }
}
