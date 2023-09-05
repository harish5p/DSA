#include <cmath>
#include <iostream>
using namespace std;

int main() {
  int num, num_sqrt;
  cout << "Enter a positive number: " << endl;
  cin >> num;
  num_sqrt = sqrt(num);
  // cout << num_sqrt << endl;

  if (num == 2 || num == 3) {
    cout << num << " is a prime number" << endl;
  } else {
    for (int i = 2; i <= num_sqrt; i++) {
      if (num % i == 0) {
        cout << num << " is not a prime number" << endl;
        return 0;
      }
    }
    cout << num << " is a prime number" << endl;
  }

  return 0;
}

// the time complexity is O(sqrt(n)) because the for loop runs from 2 to  sqrt(n)