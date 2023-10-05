#include <iostream>
using namespace std;

class Stack {
private:
  int size;
  int top;
  char *S;

public:
  Stack(int size);
  ~Stack();
  void push(char x);
  char pop();
  char peek(int index);
  int isFull();
  int isEmpty();
  void display();
  char stackTop();
  int stk_size();
};
Stack::Stack(int size) {
  this->size = size;
  top = -1;
  S = new char[size];
}
Stack::~Stack() { delete[] S; }
void Stack::push(char x) {
  if (isFull()) {
    cout << "Stack Overflow!" << '\n';
  } else {
    top++;
    S[top] = x;
  }
}
char Stack::pop() {
  char x = '1';
  if (isEmpty()) {
    cout << "Stack Underflow!" << '\n';
  } else {
    x = S[top];
    top--;
  }
  return x;
}
char Stack::peek(int index) {
  char x = '1';
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
char Stack::stackTop() {
  if (isEmpty()) {
    return -1;
  }
  return S[top];
}
// changed int to char in the code from stack lecture demo

string reverseString(Stack &s) { // passing by reference 
// otherwise at the end of function copy of s is getting destroyed and it also tries to delete the original s
//  resulting in "double free" error
  string reversed = "";
// we are popping each element till the stack is empty and appending the element to reversed string object
  while (!s.isEmpty()) {
    reversed += s.stackTop();
    s.pop();
  }

  return reversed;
}
int main() {
  char A[] = "Tutedude";
  Stack stk(sizeof(A) / sizeof(A[0]));
  // populate stack
  for (int i = 0; i < sizeof(A) / sizeof(A[0]); i++) {
    stk.push(A[i]);
  }

  cout << "Reversed string: " << reverseString(stk) << '\n';

  return 0;
}
