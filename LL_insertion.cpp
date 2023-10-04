#include <cstddef>
#include <iostream>
using namespace std;

struct Node {
  int data; // the data or the value of the Node
  struct Node *next; 
  // pointer used to connect the linked list, this pointer is pointed to the next Node creating a link

} *first = NULL;



int count(struct Node *p) {
  int l = 0;
  while (p) {
    l++;
    p = p->next;
  }
  return l;
}

void create(int A[], int n) {
  struct Node *t, *last;
  first = new Node[sizeof(struct Node)];
  first->data = A[0];
  first->next = NULL;
  last = first;
  for (int i = 1; i < n; i++) {
    t = new Node[sizeof(struct Node)];
    t->data = A[i];
    t->next = NULL;
    last->next = t;
    last = t;
  }
}

void Display(struct Node *p) {
  while (p != NULL) {
    printf("%d ", p->data);
    p = p->next;
  }
  cout << '\n';
}

void Insert(struct Node *p, int index, int x) {
  struct Node *t;
  if (index < 0 || index > count(p)) {
    return;
  }
  t = new Node[sizeof(struct Node)];
  t->data = x;
  if (index == 0) {
    t->next = first;
    first = t;
  } else {
    for (int i = 0; i < index - 1; i++) {
      p = p->next;
      t->next = p->next;
      p->next = t;
    }
  }
}
void InsertAtEnd(struct Node *p, int x) {
  struct Node *t = new Node;
  t->data = x;
  t->next = NULL;
  if (first == NULL) { // if first is null, then this becomes the first element
    first = t;
  } else { // else we find the last element
    while (p->next != NULL) {
      p = p->next; // loops ends when we found the last element
    }
    p->next = t; // change it's next which is currently NULL to our new elements
  }
}
void InsertAnywhere(struct Node *p, int index, int x) {
  struct Node *t ;
  if (index < 0 || index > count(p)) {
    return;
  }
  t = new Node[sizeof(struct Node)];
  t->data = x;
  t->next = NULL;
  if (index == 0) {
    t->next = first;
    first = t;
  } else {
    for (int i = 0; i < index -1; i++) {
      p = p->next;
    }
    t->next = p->next;
    p->next = t;
  }
}
int main() {
  int A[] = {10, 20, 30, 40, 50};
  create(A, 5);
  Insert(first, 0, 5);
  Display(first);

  InsertAtEnd(first, 60);
  Display(first);

  InsertAnywhere(first, 2, 25);
  Display(first);

  return 0;
}