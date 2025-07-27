#include <iostream>
using namespace std;
void display(int arr[], int length) {
  for (int i = 0; i < length; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
}
int isSorted(int arr[], int length) {
  for (int i = 0; i < length - 1; i++) {
    if (arr[i] > arr[i + 1]) {
      return 0;
    }
  }
  return 1;
}
void sortArray(int arr[], int length) {
  int temp;
  for (int i = 0; i < length; i++) {
    for (int j = 0; j < length - i - 1; j++) {
      if (arr[j] > arr[j + 1]) {
        temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
    }
  }
}

int main() {
  int arr2[] = {5, 6, 3, 2, 1};
  int length = sizeof(arr2) / sizeof(arr2[0]);

  if (!isSorted(arr2, length)) {
    cout << "Array is not sorted. Sorting and printing the sorted array:\n";
    sortArray(arr2, length);
    display(arr2, length);
  } else {
    cout << "Array is already sorted:\n";
    display(arr2, length);
  }
  return 0;
}