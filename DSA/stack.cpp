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
};
Stack::Stack(int size){
    this->size=size;
    top=-1;
    S= new int[size];
}
Stack::~Stack(){
    delete []S;
}
void Stack::push(int x){
    if(isFull()){
        cout << "Stack Overflow!" << '\n';
    } else{
        top++;
        S[top] = x;
    }
}
int Stack::pop(){
    int x=1;
    if(isEmpty()){
        cout << "Stack Underflow!" << '\n';
    } else{
        x = S[top];
        top--;
    }
    return x;
}
int Stack::peek(int index){
    int x=-1;
    if(top-index+1<0 || top-index+1 == size){
        cout << "Invalid Position!" << '\n';
    } else{
        x = S[top-index+1];
    }
    return x;
}
int Stack::isFull(){
    if(top==size-1){
        return 1;
    }
    return 0;
}
int Stack::isEmpty(){
    if(top==-1){
        return 1;
    }
    return 0;
}
void Stack::display(){
    for(int i=top; i>=0;i--){
        cout << S[i] << " | " << flush;
    }
    cout << '\n';
}
int Stack::stackTop(){
    if(isEmpty()){
        return -1;
    }
    return S[top];
}
int main(){
    int A[] = {1,3,5,7,9};
    Stack stk(sizeof(A)/sizeof(A[0]));
    // populate stack
    for (int i=0; i<sizeof(A)/sizeof(A[0]); i++){
        stk.push(A[i]);
    }
    stk.push(11);
    cout << "Stack full: " << stk.isFull() << '\n';
    // Display stack
    cout << "Stack: " << flush;
    stk.display();
    // peek
    cout << "Peek at 0th: " << stk.peek(0) << '\n';
    cout << "Peek at 3rd: " << stk.peek(3) << '\n';
    cout << "Peek at 10th: " << stk.peek(10) << '\n';
    // Top element
    cout << "Top element: "<< stk.stackTop() << '\n';
    // pop out elements from stack
    cout << "Popped out elements: "<< flush;
    for(int i=0; i<sizeof(A)/sizeof(A[0]); i++){
        cout << stk.pop() << ", "<< flush;
    }
    cout << '\n';
    stk.pop();
    cout << "Stack empty: "<< stk.isEmpty() <<'\n';
    return 0;

}

