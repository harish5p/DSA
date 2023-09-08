#include <iostream>
using namespace std;

int main(){
    int base_address = 1020;
    int first_index = 1300;
    int element_size = 2;
    int target = 1700;

    int address = base_address + (( target - first_index) * element_size);

    cout << "The address of A[1700] is: " << address << endl;

    return 0;
}