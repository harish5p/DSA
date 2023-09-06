#include <iostream>
using namespace std;

void tail_recursion(int n) {
  if (n > 0) {
    cout << n << endl;
    tail_recursion(n - 1);
  }
}

int main() {
  tail_recursion(10);
  return 0;
}