#include <iostream>
using namespace std;

int main() {
  int array_size, total = 0;
  cout << "Enter the size of the array (>0): " << endl;
  cin >> array_size;
  int *arr = new int[array_size];
  cout << "Enter the elements of the array: " << endl;
  for (int i = 0; i < array_size; i++) {
    cin >> arr[i];
    total += arr[i];
  }
  cout << "The sum of the elements in the array is: " << total << endl;
  delete[] arr;

  return 0;
}