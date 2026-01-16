
/*

#include<iostream>
#include<set>
#include<vector>
using namespace std;


int print(vector<int>&nums,int k){
  int n=nums.size();
  int count=0;

  for(int i=0;i<n;i++){
     set<int>uniqueElement;
     for(int j=i;j<n;j++){
      uniqueElement.insert(nums[j]);
      if(uniqueElement.size()==k){
        count++;
      }
     if(uniqueElement.size() > k) {
                break; 
            }
      }
     }
  
  return count;
}
int main(){
  int n;
  int k;
  cout<< " Enter the n "<<endl;
  cin>>n;
  vector<int>nums(n);

  cout<< " enter the array " <<endl;
  for(int i=0;i<n;i++){
    cin>>nums[i];
  }
  cout<< " \n the array is \n"<<endl;
  for(int i=0;i<n;i++){
    cout<< nums[i] << " ";
  }
  cout<<endl;
cout<< " enter the k "<<endl;
cin>>k;
 cout<< print(nums,k)<<endl;
}
*/





#include<iostream>
#include<map>
#include<vector>
using namespace std;
 
 int atmost (vector<int>& nums, int k) {

int l=0;
int r=0;
int count=0;
int n=nums.size();
map<int,int>freq;

while(r<n){
  freq[nums[r]]++;
  while(freq.size()>k){
    freq[nums[l]]--;
    if(freq[nums[l]]==0){
      freq.erase(nums[l]);
      
    }
    l++;
  }
count=count+(r-l+1);
r++;
}
return count;

 }
 int subarraysWithKDistinct(vector<int>& nums, int k) {

  return atmost(nums,k)-atmost(nums,k-1);
 }
int main(){
    int n, k;
    cout << " Enter the value of n " << endl; 
    cin >> n;
    vector<int> nums(n);
    cout << " enter the array " << endl;
    for(int i = 0; i < n; i++){
        cin >> nums[i];
    }
    cout << " \nthe array is \n" << endl;
    for(int i = 0; i < n; i++){
        cout << nums[i] << " ";
    }
    cout << endl;

    cout << " Enter the  k ";
    cin >> k;

    cout << subarraysWithKDistinct(nums, k) << endl;
}
        