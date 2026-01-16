#include<iostream>
using namespace std;

void print(int arr[],int l,int n){
  if(l>=n/2){
    return;
  }
  swap(arr[l],arr[n-l-1]);
  print(arr,l+1,n);
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
print(arr,0,n);
cout<< " THE REVERSE ARRAY IS "<<endl;
for(i=0;i<n;i++){
  cout<< arr[i]<<endl;

}


}