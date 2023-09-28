#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

struct Array {
  int A[10];
  int size;
  int length;
};

void display(struct Array arr) {
  for (int i = 0; i < arr.length; i++) {
    cout << arr.A[i] << " ";
  }
  cout << '\n';
}

int LinearSearch(struct Array *arr, int key) {
  for (int i = 0; i < arr->length; i++) {
    if (key == arr->A[i]) {
      return i;
    }
    cout << "Iteration " << i << '\n';
  }
  return -1;
}

int BinarySearch(struct Array arr, int key) {
  int l, mid, h;
  l = 0;
  h = arr.length - 1;
  int i = 1;
  while (l <= h) {

    cout << "Iteration " << i << '\n';
    i++;
    mid = (l + h) / 2;
    if (key == arr.A[mid]) {
      return mid;
    } else if (key < arr.A[mid]) {
      h = mid - 1;
    } else {
      l = mid + 1;
    }
  }
  return -1;
}

int main() {
  struct Array arr1 = {{5, 6, 7, 8, 9,10,11}, 10, 7};
  cout << "Total Iterations of Linear search " << LinearSearch(&arr1, 11);
  cout << "Total Iterations of Binary search" << '\n' << BinarySearch(arr1, 11);
  printf("Return value of strcmp(): %d", strcmp("tutedude", "tutedude"));
  return 0;
}