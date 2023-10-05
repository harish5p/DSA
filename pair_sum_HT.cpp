#include <iostream>
#include <unordered_set>
using namespace std;

void pair_sum(int arr[], int n , int sum){
    unordered_set<int> hash;
    for(int i=0; i<n; i++){
        int target = sum - arr[i];
        cout << target << '\n';
        
        // hash.end() is an iterator
        if(hash.find(target)!=hash.end()){
            cout <<  " (" << arr[i] << ", "<< target << ")" <<'\n';
            return;
        }
        hash.insert(arr[i]);
    }
    cout<< "Pair not found"<<'\n';
}
int main(){
    int arr[] = {8,7,2,5,3,1};
    int sum =10;
    int n = sizeof(arr)/sizeof(arr[0]);
    pair_sum(arr,n,sum);
    return 0;
}

// checking if the target is in hash, if not insert the current element else return the pair