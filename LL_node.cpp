#include <cstddef>
#include <iostream>
using namespace std;
struct Node {
  int data; // the data or the value of the Node
  struct Node *next;
  // pointer used to connect the linked list, this pointer is pointed to the
  // next Node creating a link
};

int main() {
  int A[] = {10, 20, 30, 40, 50};
  Node *head = new Node;
  Node *second = new Node, *last = new Node;
  //  assign data to each node from Array A
  head->data = A[0];
  second->data = A[1];
  last->data = A[2];
  //   pointer of next element in linked list starting from head points to
  //   second
  //  and second's next element points to last.
  head->next = second;
  second->next = last;
  last->next = NULL;

  //   print
  Node *p = head;
  while (p != NULL) {
    cout << p->data << " ";
    p = p->next;
  }
  cout << '\n';

  return 0;
}