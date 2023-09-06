#include <iostream>
using namespace std;

int sum_recursion(int n){
    if (n==0){
        return 0;
    } else{
        return sum_recursion(n-1)+n;
    }
}

int main(){
    int n;
    cin >> n;
    cout << "Sum of first " << n << " natural numbers is: " << sum_recursion(n) << endl;
    return 0;
}