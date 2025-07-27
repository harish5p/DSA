#include <iostream>
using namespace std;

double sqrt_binary_search(float num) {
  double precision = 1e-7;
  double start = 0, end = num, mid;

  while (end - start > precision) {
    mid = (start + end) / 2;
    if (mid * mid == num) {
      return mid;

    } else if (mid * mid < num) {
      start = mid;
    } else {
      end = mid;
    }
  }
  return mid;
}

int main() {
  float num;
  cout << "Enter a number: " << endl;
  cin >> num;
  cout << "The square root of " << num << " is: " << sqrt_binary_search(num)
       << endl;
  return 0;
}