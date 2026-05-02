// Move Zeros to End
#include<iostream>
#include<vector>
using namespace std;


void  print(vector<int>&arr){

  int n=arr.size();
  int j=0;
  for(int i=0;i<n;i++){
    if(arr[i]!=0){
      arr[j]=arr[i];
      j++;
    }
  }
      while(j<n){
        arr[j]=0;
        j++;

      }

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
print(arr);

cout<<"The array is "<<endl;
for(int i=0;i<n;i++){
  cout<<arr[i];
  cout<<" ";
}

}


