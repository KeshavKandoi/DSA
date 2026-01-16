#include <iostream>
#include <vector>
using namespace std;

int largest(vector<int>& arr) {
    int lar = arr[0];
    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] > lar) {
            lar = arr[i];
        } 
    }
    return lar;
}

int main() {
    int n;
cout<<" Enter the number of elements ";
cin >> n ;

vector<int> arr(n);
for(int i=0;i<n;i++){
    cin>>arr[i];
  
}
cout<<"The array is "<<endl;
for(auto i: arr){
    cout<<i<<" "<<endl;
}
cout<<"The largest element is " << largest(arr) <<endl;
return 0;
}