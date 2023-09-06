#include <iostream>
using namespace std;

void head_recursion(int n){
    if (n>0){
        head_recursion(n-1);
        cout << n << endl;
    }
}

int main(){
    head_recursion(10);
    return 0;
}