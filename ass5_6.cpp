#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main() {
  string input;
  cout << "Enter a string: ";
  getline(cin, input);
  istringstream iss(input);
  string word;

  int min = 99999;
  int max = 0;
  string minStr, maxStr;

  while (iss >> word) {
    if (word.length() < min) {
      min = word.length();
      minStr = word;
    }
    if (word.length() > max) {
      max = word.length();
      maxStr = word;
    }
  }

  cout << "Max length word: " << maxStr << '\n';
  cout << "Min length word: " << minStr << '\n';
}