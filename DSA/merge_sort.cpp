#include <iostream>
using namespace std;

void merge(int a[], int p, int q, int r) {
  int b[6];
  int i, j, k;
  k = 0;
  i = p;
  j = q + 1;
  while (i <= q && j <= r) {
    if (a[i] < a[j]) {
      b[k++] = a[i++];
    } else {
      b[k++] = a[j++];
    }
  }
  while (i <= q) {
    b[k++] = a[i++];
  }
  while (j <= r) {
    b[k++] = a[j++];
  }
  for (i = r; i >= p; i--) {
    a[i] = b[--k];
  }
}
void mergeSort(int a[], int p, int r) {
  int q;
  if (p < r) {
    q = (p + r) / 2;
    mergeSort(a, p, q);
    mergeSort(a, q + 1, r);
    merge(a, p, q, r);
  }
}
int main() {
  int arr[6] = {5, 27, 3, 22, 45, 90};
  mergeSort(arr, 0, 5);
  cout << "Sorted array = ";
  for (int i = 0; i < 6; i++) {
    cout << arr[i] << " ";
  }
  return 0;
}