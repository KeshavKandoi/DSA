


#include<iostream>
#include<vector>
using namespace std;

bool  print(vector<int>&ds,int n,int sum,int s,int arr[],int idx){

  if(idx==n){
    if(s==sum){
      for(auto it:ds)
        cout<<it<<endl;
   return true;
    }
    else 
    return false;
    
  }
  ds.push_back(arr[idx]);

  s+=arr[idx];
  if (print(ds,n,sum,s,arr,idx+1)==true){
  return true;
  }
  ds.pop_back();
  s-=arr[idx];

 if (print(ds,n,sum,s,arr,idx+1)==true){
  return true;
 }

else
return false;

}





int main() {
    int n, sum;
    cout << "Enter the value of n: ";
    cin >> n;

    int arr[n];
    cout << "Enter array elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter target sum: ";
    cin >> sum;

    vector<int> ds;
    print(ds, n, sum, 0, arr, 0);

    return 0;
}
