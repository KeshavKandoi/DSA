#include<iostream>
using namespace std;

void print(int arr[],int l,int r){
  if(l>=r){
    return;
  }
  swap(arr[l],arr[r]);
  print(arr,l+1,r-1);
}
int main(){
  int n; 
  int i;
  int arr[6];
  cout<< " Enter the n : ";
  cin>>n;
  for( i=0;i<n;i++){
    cin>>arr[i];
  }
  cout<< "The array is "<<endl;
  for( i=0;i<n;i++){
  cout<< arr[i] <<endl;
  }
print(arr,0,n-1);
cout<< " THE REVERSE ARRAY IS "<<endl;
for(i=0;i<n;i++){
  cout<< arr[i]<<endl;

}


}