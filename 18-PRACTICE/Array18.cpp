// Rearrange Array Elements by Sign
#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;


vector<int> rearrangeArray(vector<int>& nums) {
  int n=nums.size();
  vector<int>positive;
  vector<int>negative;
  vector<int>ans;

  for(int i=0;i<n;i++){
    if(nums[i]<0){
      negative.push_back(nums[i]);
    }
    else{
      positive.push_back(nums[i]);
    }
  }
  for(int i = 0; i < positive.size(); i++) {
        ans.push_back(positive[i]);
        ans.push_back(negative[i]);
    }
return ans;


}

int main() {
    int n;
    cout << "Enter the size of array" << endl;
    cin >> n;

   

    vector<int> arr(n);

    cout << "Enter the array" << endl;
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "The array is " << endl;
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

vector<int> value = rearrangeArray(arr);

    cout<<"The array is:"<<endl;
    for(auto x:value){
     cout<< x<<" ";
    }

}