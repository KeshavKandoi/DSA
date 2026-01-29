


#include<iostream>
#include<vector>
using namespace std;

int  print(int n,int sum,int s,int arr[],int idx){

if(s>sum) return 0 ;
  if(idx==n){
    if(s==sum){
      
   return 1;
    }
    else 
    return 0;
    
  }


   s+=arr[idx];
  int l=print(n,sum,s,arr,idx+1);

  s-=arr[idx];
 int r=print(n,sum,s,arr,idx+1);


return l+r;

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


int result = print(n, sum, 0, arr, 0);
cout << result << endl;

    return 0;
}
