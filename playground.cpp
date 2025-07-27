#include <iostream>
using namespace std;

struct Array {
    int A[10];
    int size;
    int length;   
};



int main(){
    Array arr1 = {{1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, 10, 10};
    
    char c = 'c';
    string s = "tutu";
    char* charPtr = &c;
    string* sPtr = &s;
    
    int arr[] = {1,2};
    int* arrayPtr = arr;
    int* ptr1 = &arr[0];
    
    cout << charPtr << endl;
    cout << *charPtr << endl;
    cout << arrayPtr<< endl;
    cout << ptr1 << endl;

    return 0;
}
