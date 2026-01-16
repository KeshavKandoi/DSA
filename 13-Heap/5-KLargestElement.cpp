#include<iostream>
#include<queue>
#include<vector>
using namespace std;

int kthSmallestElement(int arr[],int n,int k) {


  priority_queue<int> pq;



  for(int i=0;i<k;i++){
    pq.push(arr[i]);
  }
  for(int i=k;i<n;i++){
  if(arr[i]<pq.top()){
    pq.pop();
    pq.push(arr[i]);
  }
  }
int ans=pq.top();
return ans ;

}
int main(){
    int n, k;
    cout<< " Enter n " <<endl;
    cin >> n;               

    int arr[n];
    cout<< " Enter the array" <<endl;
    for(int i = 0; i < n; i++){
        cin >> arr[i];       
    }
   cout<< " Enter k "<<endl;
    cin >> k;                 

    int ans = kthSmallestElement(arr, n, k);
    cout << k << "th smallest element is: " << ans << endl;

    return 0;
}

/* for largest

int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int, vector<int>, greater<int>> minHeap;

    for(int i=0;i<k;i++){
    minHeap.push(nums[i]);
  }
  int n=nums.size();
  for(int i=k;i<n;i++){
  if(nums[i]>minHeap.top()){
    minHeap.pop();
    minHeap.push(nums[i]);
  }
  }
int ans=minHeap.top();
return ans ;
}
*/