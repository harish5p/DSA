#include <iostream>
using namespace std;

class Stack {
private:
  int size;
  int top;
  int *S;

public:
  Stack(int size);
  ~Stack();
  void push(int x);
  int pop();
  int peek(int index);
  int isFull();
  int isEmpty();
  void display();
  int stackTop();
  void sort();
};
Stack::Stack(int size) {
  this->size = size;
  top = -1;
  S = new int[size];
}
Stack::~Stack() { delete[] S; }
void Stack::push(int x) {
  if (isFull()) {
    cout << "Stack Overflow!" << '\n';
  } else {
    top++;
    S[top] = x;
  }
}
int Stack::pop() {
  int x = 1;
  if (isEmpty()) {
    cout << "Stack Underflow!" << '\n';
  } else {
    x = S[top];
    top--;
  }
  return x;
}
int Stack::peek(int index) {
  int x = -1;
  if (top - index + 1 < 0 || top - index + 1 == size) {
    cout << "Invalid Position!" << '\n';
  } else {
    x = S[top - index + 1];
  }
  return x;
}
int Stack::isFull() {
  if (top == size - 1) {
    return 1;
  }
  return 0;
}
int Stack::isEmpty() {
  if (top == -1) {
    return 1;
  }
  return 0;
}
void Stack::display() {
  for (int i = top; i >= 0; i--) {
    cout << S[i] << " | " << flush;
  }
  cout << '\n';
}
int Stack::stackTop() {
  if (isEmpty()) {
    return -1;
  }
  return S[top];
}

void Stack::sort() {
  if (isEmpty()) { // if stack is empty return nothing
    return;
  }
  // otherwise the following gets executed
  int temp = pop();      // pop the top item to temp
  cout << "Temp is: " << temp <<'\n';
  sort();                // recursively sort the remaining elements
  Stack tempstack(size); // tempstack to store the items
  cout << "Temp stack is ";
  tempstack.display();
    cout << "Stack Top is: " << stackTop() <<'\n';
  while (!isEmpty() && stackTop() > temp) {
    // store all items greater than temp in tempstack
    tempstack.push(stackTop());
    pop();
  }
  push(temp);                    // push temp into main
  while (!tempstack.isEmpty()) { // move back all tempstack elements to main
    push(tempstack.stackTop());
    tempstack.pop();
  }
}
// if we have a stack with elements <top> 36 | 1 | 74 | 3 <bottom>
// in first iter temp = 36, stack is 1 | 74 | 3
// we are sorting this stack with line 86 sort()
// tempstack gets the items which are greater than temp 36
// line 89 while loop pushes elements greater than temp 36
//  stackTop is 1 < temp 36, loop ends
// 

int main() {
  int A[] = {36, 1, 74, 3, 76, 5, 7, 9, 16, 152};
  Stack stk(sizeof(A) / sizeof(A[0]));
  // populate stack
  for (int i = 0; i < sizeof(A) / sizeof(A[0]); i++) {
    stk.push(A[i]);
  }

  stk.display();
  stk.sort();
  stk.display();

  return 0;
}
