#include <iostream>
#include <new>
using namespace std;

int main(){
    int n;
    int sum =0;
    cout << "Enter the size of the array: "<<endl;
    cin >> n;

    int * arr = new int[n];
    cout << "Enter elements of the array: ";
    for (int i=0;i<n;i++){
        cin >> arr[i];
        sum += arr[i];
    }
    cout << "Sum of all elements in the array is: " << sum << endl;

    delete [] arr;
    return 0;
    
}