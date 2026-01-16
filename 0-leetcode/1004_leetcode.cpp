/*

#include <iostream>
#include <vector>
using namespace std;

int print(vector<int> &nums, int k) {
    int n = nums.size();
    int maxLength = 0;

    for (int i = 0; i < n; i++) {
        int zeros = 0;
        for (int j = i; j < n; j++) {
            if (nums[j] == 0) zeros++;

            if (zeros <= k) {
                int len = j - i + 1;
                maxLength = max(maxLength, len);
            } else {
                break;
            }
        }
    }

    return maxLength;
}

int main() {
    int n, k;
    cout << "Enter size of array: ";
    cin >> n;
    vector<int> nums(n);
    cout << "Enter array elements (0 or 1): ";
    for (int i = 0; i < n; i++) cin >> nums[i];
    cout << "Enter k: ";
    cin >> k;

    cout << "Longest subarray length = " << print(nums, k);
}
*/

#include <iostream>
#include <vector>
using namespace std;

int print(vector<int> &nums, int k) {

int left=0;
int right=0;
int maxlength=0;
int zeros=0;

while(right<nums.size()){
  if(nums[right]==0)
    zeros++;
  
  if(zeros>k){
    if(nums[left]==0)
    zeros--;
    left++;
  }  
  
  if(zeros<=k){
   int length=right-left+1;
   maxlength=max(length,maxlength);
  }


right++;
}
return maxlength;
}

int main(){
  int n,k;
  cout<< " Enter the value of n "<<endl; 
  cin>>n;
  vector<int>nums(n);
  cout<< " enter the array "<<endl;
  for(int i=0;i<n;i++){
    cin>>nums[i];
  }
cout<< " \nthe array is /n"<<endl;
  for(int i=0;i<n;i++){
    cout<<nums[i]<<" "<<endl;;
  }
  cout<< " enter the k "<<endl;
  cin>>k;
  cout<<print(nums,k)<<endl;;
}
