#include <cmath>
#include <iostream>
using namespace std;
struct Element {
  int row;
  int col;
  int value;
};

struct Sparse {
  int rows;   // i
  int cols;   // j
  int nzeros; // x
  struct Element *e;
};

void create(struct Sparse *s) {
  s->rows = 10;  // m
  s->cols = 10;  // n
  s->nzeros = 5; // num
  s->e = new Element[s->nzeros];
  for (int i = 0; i < s->nzeros; i++) {
    cin >> s->e[i].row;
    cin >> s->e[i].col;
    cin >> s->e[i].value;
  }
}

void add(struct Sparse *s1, struct Sparse *s2) {
  if (s1->rows != s2->rows || s1->cols != s2->cols) {
    return;
  }
  Sparse *sum;
  sum = new Sparse;
  sum->rows = s1->rows;
  sum->cols = s1->cols;
  sum->e = new Element[s1->nzeros + s2->nzeros];

  int i, j, k;
  while (i < s1->nzeros && j < s2->nzeros) {
    if (s1->e[i].row < s1->e[j].row) {
      sum->e[k++] = s1->e[i++];
    } else if (s1->e[i].row < s1->e[j].row) {
      sum->e[k++] = s2->e[i++];

    } else {
      if (s1->e[i].col < s1->e[j].col) {
        sum->e[k++] = s1->e[i++];
      } else if (s1->e[i].col < s1->e[j].col) {
        sum->e[k++] = s2->e[j++];
      } else {
        sum->e[k++] = s1->e[i++];
        sum->e[k++].value = s2->e[j++].value;
      }
    }
  }
}

int main() {
  struct Sparse s;
  struct Sparse s1, s2;
  create(&s);
  add(&s1, &s2);
}
