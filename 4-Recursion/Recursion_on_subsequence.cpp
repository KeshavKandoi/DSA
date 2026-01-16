#include<iostream>
using namespace std;

void print(int index,vector<int> & ds ,int arr[],int n){
  if(index==n){
    for(auto it :ds){
      cout<< it << " ";

    } 
    if(ds.size()==0){
      cout<< "{}";
    }
    cout<<endl;
    return ;

  }
  ds.push_back(arr[index]);
   print(index+1,ds,arr,n);
  ds.pop_back();
 print(index+1,ds,arr,n);
  }
  

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n]; // ✅ create array after reading n
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "The array is: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    vector<int> ds; // ✅ create empty vector to store current subset
    cout << "\nAll subsets are:\n";
    print(0, ds, arr, n);

    return 0;
}