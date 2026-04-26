#include<iostream>
using namespace std;
#include <vector>

int largest(vector<int>&arr){
  int n=arr.size();

int num = arr[0];

  for(int i=1;i<n;i++){
    if(num<=arr[i]){
      num=arr[i];
    }

  }
  return num;
}

int main(){
int n;
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
int value=largest(arr);

cout<<"The largest value is "<<value<<endl;

}