/*#include<iostream>
#include<vector>
using namespace std;

int MaximumSum(vector<int>&arr,int k){
  int maximum=0;
  int n=arr.size();
  for(int i=0;i<=n-k;i++){
     int sum=0;
    for(int j=i;j<i+k;j++){
       sum=sum+arr[j];
    }
  maximum=max(maximum,sum);
    }
    return maximum;

  }
  int main(){
    int n;
    int k;
    cout<< " Enter the size of array "<<endl;
    cin>>n;
    cout<< " Enter the value of k "<<endl;
    cin>>k;
   vector<int>arr(n);
   cout<< "Enter the array "<<endl;
   for(int i=0;i<n;i++){
    cin>> arr[i];
   }
   cout<< " The array is "<<endl;
   for(int i=0;i<n;i++){
    cout<< arr[i]<<" "<<endl;
   }

   cout<<MaximumSum(arr,k);
  }
*/
#include<iostream>
#include<vector>
using namespace std;

int MaximumSum(vector<int>&arr,int k){
  int maximum=0;
  int sum=0;
  int n=arr.size();
  for(int i=0;i<k;i++){
    sum=sum+arr[i];
    maximum=sum;
    }
    for(int i=k;i<n;i++){
      sum=sum+arr[i]-arr[i-k];  
      maximum=max(maximum,sum);
    }
    return maximum;

  }
  int main(){
    int n;
    int k;
    cout<< " Enter the size of array "<<endl;
    cin>>n;
    cout<< " Enter the value of k "<<endl;
    cin>>k;
   vector<int>arr(n);
   cout<< "Enter the array "<<endl;
   for(int i=0;i<n;i++){
    cin>> arr[i];
   }
   cout<< " \nThe array is\n "<<endl;
   for(int i=0;i<n;i++){
    cout<< arr[i]<< "  ";
   }
cout<<endl;
   cout<<MaximumSum(arr,k)<<endl;
  }
