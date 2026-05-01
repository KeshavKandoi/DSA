//  Rotate Array
#include<iostream>
#include<vector>
using namespace std;

vector<int> print(vector<int>&arr,int k){

  int n=arr.size();
  vector<int>ans(n);

  for(int i=0;i<n;i++){
    ans[(i+k)%n]=arr[i];

}
  return ans;

  }


int main(){
int n;
int k;
cout<<"enter the value of k:-";
cin>>k;
cout<<"Enter the size of array"<<endl;
cin>>n;

 if (n <= 0) {
        cout << "Invalid array size" << endl;
        return 0;
    }


vector<int>arr(n);
cout<<"Enter the array"<<endl;
for(int i=0;i<n;i++){
  cin>>arr[i];
}
cout<<"The array is "<<endl;
for(int i=0;i<n;i++){
  cout<<arr[i];
  cout<<" ";
}
cout<<endl;
vector<int>value=print(arr,k);

cout<<"The  value is "<<endl;

for(int i=0;i<n;i++){
  cout<<value[i];
  cout<<" ";
}

}


// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// void rotateArray(vector<int>& arr, int k) {
//     int n = arr.size();
//     k = k % n;

//     reverse(arr.begin(), arr.end());
//     reverse(arr.begin(), arr.begin() + k);
//     reverse(arr.begin() + k, arr.end());
// }

// int main() {
//     int n, k;

//     cout << "Enter size of array: ";
//     cin >> n;

//     vector<int> arr(n);

//     cout << "Enter array elements: ";
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }

//     cout << "Enter value of k: ";
//     cin >> k;

//     rotateArray(arr, k);

//     cout << "Array after rotation: ";
//     for (int x : arr) {
//         cout << x << " ";
//     }

//     return 0;
// }