// Second Largest Element

#include<iostream>
#include<vector>
using namespace std;


int print(vector<int>&arr){

  if(arr.size()<2){
    return 0;
  }
  int largest=arr[0];
  int second=INT_MIN;

  for(int i=0;i<arr.size();i++){
    if(arr[i]>largest){
      second=largest;
      largest=arr[i];
    }
    if(arr[i]<largest&&second<arr[i]){
      largest=largest;
      second=arr[i];
    }
  }
  return second;
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
int value=print(arr);

cout<<"The SECOND LARGEST value is "<<value<<endl;

}


