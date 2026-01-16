/*
#include<iostream>
#include<vector>
using namespace std;

void  print(vector<int>&arr,int k){

   int n=arr.size();
   for(int i=0;i<=n-k;i++){
      bool found=false;
      for(int j=i;j<i+k;j++){
      if(arr[j]<0){

      cout<<arr[j]<< " ";
      found = true;
      break;
   }
      }
      if(found==false){
         cout<< " 0 ";
      }
}
cout<<endl;
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
   cout<< " \n The array is \n ";
   for(int i=0;i<n;i++){
    cout<< arr[i]<<" ";
   }
   cout<<endl;

   print(arr,k);
  }
*/

#include<iostream>
#include<vector>
#include<deque>
using namespace std;

vector<int> print(vector<int>&arr,int k){
   int n=arr.size();
   deque<int> dq;
   vector<int>ans;

   for(int i=0;i<k;i++){

   if(arr[i]<0){
      dq.push_back(i);
   }
   }
if(!dq.empty()){
  ans.push_back(arr[dq.front()]);
}
else{
   ans.push_back(0);
}

for(int i=k;i<n;i++){
   if(!dq.empty()&& dq.front()<=i-k)
      dq.pop_front();
   
   if(arr[i]<0)
      dq.push_back(i);
   
      
if(dq.size()>0)
  ans.push_back(arr[dq.front()]);

else
   ans.push_back(0);
}
return ans;
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
   cout<< " \n The array is \n ";
   for(int i=0;i<n;i++){
    cout<< arr[i]<<" ";
   }
   cout<<endl;

   vector<int> result = print(arr, k);

    cout << "\nFirst negative number in every window: ";
    for (int x : result)
        cout << x << " ";
    cout << endl;

    return 0;
  }