#include<iostream>
#include<vector>
using namespace std;

 bool check (vector<int>&arr){
  int n=arr.size();

  int count=0;

    for(int i=0;i<n;i++){
      if(arr[i]>arr[(i+1)%n]){
        count++;
      }

    }
     return count <= 1;

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
 if (check(arr)) {
        cout << "true";
    } else {
        cout << "false";
    }
}