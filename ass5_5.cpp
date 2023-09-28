#include <iostream>
using namespace std;

int main() {
  string input;
  cout << "Enter a string: ";
  getline(cin, input);

  int lowers = 0;
  int uppers = 0;
  int numbers = 0;
  int specials = 0;

  for (int i = 0; i < input.length(); i++) {
    char c = input[i];
    if (islower(c)) {
      lowers++;
    } else if (isupper(c)) {
      uppers++;
    } else if (isdigit(c)) {
      numbers++;
    } else {
      specials++;
    }
  }

  cout << "Lowers: " << lowers << '\n';
  cout << "Uppers: " << uppers << '\n';
  cout << "Numbers: " << numbers << '\n';
  cout << "Specials: " << specials << '\n';
}