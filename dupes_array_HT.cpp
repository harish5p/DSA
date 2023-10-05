#include <iostream>
#include <unordered_set>
using namespace std;

void dupes_in_array(int arr[], int n) {
  unordered_set<int> hash;
  for (int i = 0; i < n; i++) {
    if (hash.find(arr[i]) != hash.end()) {
      cout << "Duplicate found: " << arr[i] << '\n';
    } else {
      hash.insert(arr[i]);
    }
  }
}
int main() {
  int arr[] = {1, 2, 2, 3, 4, 2, 5, 5, 6, 7};
  int n = sizeof(arr) / sizeof(arr[0]);
  dupes_in_array(arr, n);
  return 0;
}