#include <iostream>
using namespace std;
struct Node {
  int data;
  struct Node *next;
} *first = NULL;
void create(int A[], int n) {
  int i;
  struct Node *t, *last;
  first = new Node[sizeof(struct Node)];
  first->data = A[0];
  first->next = NULL;
  last = first;

  for (i = 1; i < n; i++) {
    t = new Node[sizeof(struct Node)];
    t->data = A[i];
    t->next = NULL;
    last->next = t;
    last = t;
  }
}

int main(){
    Node a, b;
    cout << sizeof(struct Node)<< endl;
    return 0;
}
