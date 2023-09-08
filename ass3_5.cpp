#include <iostream>
using namespace std;

int main() {
  int base_address = 100;
  int first_row_index = 1;
  int first_column_index = 1;
  int total_rows = 10;
  int total_columns = 15;
  int element_size = 1;
  int target_row = 8;
  int target_column = 6;

  int address =
      base_address + ((target_column - first_column_index) * total_rows +
                      (target_row - first_row_index)) *
                         element_size;

  cout << "The address of arr[8][6] in column-major order is: " << address
       << endl;

  return 0;
}