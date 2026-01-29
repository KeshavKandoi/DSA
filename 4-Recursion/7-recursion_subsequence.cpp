#include<iostream>
#include<vector>
using namespace std;

void print(vector<int>&ds,int n,int idx,int arr[]){
  if(idx==n){
   for(auto xx:ds)
    cout << xx << " ";
        cout << endl;
        return;
    
   }
    
    ds.push_back(arr[idx]);
    print(ds,n,idx+1,arr); 
    ds.pop_back();
  print(ds,n,idx+1,arr);
  }





int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    int arr[n];
    cout << "Enter array elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    vector<int> ds;   
    print( ds,n,0,arr);

    return 0;
}