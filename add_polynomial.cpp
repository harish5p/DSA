#include <cmath>
#include <iostream>
using namespace std;
struct term {
  int coeff;
  int exp;
};
struct poly {
  int n;
  struct term *t;
};
poly add_poly(const poly &p1, const poly &p2) {
  poly p3;
  p3.n = p1.n + p2.n;
  p3.t = new term[p3.n];
  int i = 0, j = 0, k = 0;
  while (i < p1.n && j < p2.n) {
    if (p1.t[i].exp > p2.t[j].exp) {
      p3.t[k++] = p1.t[i++];
    } else if (p1.t[i].exp < p2.t[j].exp) {
      p3.t[k++] = p2.t[j++];
    } else {
      p3.t[k].exp = p1.t[i].exp;
      p3.t[k++].coeff = p1.t[i++].coeff + p2.t[j++].coeff;
    }
  }
  while (i < p1.n) {
    p3.t[k++] = p1.t[i++];
  }
  while (j < p2.n) {
    p3.t[k++] = p2.t[j++];
  }
  p3.n = k;
  return p3;
}
void print_poly(const poly &p) {

  for (int i = 0; i < p.n; i++) {
    // sum += p.t[i].coeff * pow(x, p.t[i].exp);
    cout << p.t[i].coeff << "x^" << p.t[i].exp;
    if (i < p.n - 1) {
      cout << " + ";
    }
  }
  cout << '\n';
}

int main() {
  struct poly p1, p2, p3;

  cout << "Enter number of terms in first poly:" << '\n';
  cin >> p1.n;
  p1.t = new term[p1.n];
  for (int i = 0; i < p1.n; i++) {
    cin >> p1.t[i].coeff;
    cin >> p1.t[i].exp;
  }

  cout << "Enter number of terms in second poly:" << '\n';
  cin >> p2.n;
  p2.t = new term[p2.n];
  for (int i = 0; i < p2.n; i++) {
    cin >> p2.t[i].coeff;
    cin >> p2.t[i].exp;
  }
  cout << "First poly is: ";
  print_poly(p1);
  cout << "Second poly is: ";
  print_poly(p1);

  p3 = add_poly(p1, p2);

  cout << "Result poly is: ";
  print_poly(p3);

  delete[] p1.t;
  delete[] p2.t;
  delete[] p3.t;
}