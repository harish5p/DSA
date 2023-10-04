#include <iostream>
#include <vector>

using namespace std;

class Matrix {
private:
  vector<vector<int>> data;

public:
  Matrix(int rows, int cols) : data(rows, vector<int>(cols)) {}

    // read and write access
  int &operator()(int row, int col) {
    if (row >= data.size() || col >= data[0].size()) {
      cout << "Matrix subscript out of bounds" << '\n';
    }
    return data[row][col];
  }
//   read only access
  int operator()(int row, int col) const {
    if (row >= data.size() || col >= data[0].size()) {
      cout << "Matrix subscript out of bounds" << '\n';
    }
    return data[row][col];
  }

};