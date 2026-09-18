// 167. Two Sum II - Input Array Is Sorted

#include<iostream>
#include<vector>

using namespace std;

vector<int> twoSum(vector<int>& numbers, int target) {
        int n=numbers.size();

        int i=0;
        int j=n-1;
        vector<int>ans;

        while(i<j){
            if(numbers[i]+numbers[j]>target){
                j--;
            }
            else if (numbers[i]+numbers[j]<target){
                i++;
            }
            else{
              return{i+1,j+1};
            }

    
        }
        return {};

        
    }
int main(){
  int n;
  int target;

  cout<<"enter the target"<<endl;
   cin>>target;

  
 



  cout<<"enter the no of arrays"<<endl;
  cin>>n;

  vector<int>ans(n);

  cout<<"enter arrays"<<endl;
  for(int i=0;i<n;i++){
    cin>>ans[i];
  }
  cout<<"The array is "<<endl;

  for(int i=0;i<n;i++){
    cout<<ans[i]<<" ";
  }
cout<<endl;
  vector<int>out;

  out=twoSum(ans,target);

  cout<<"The answer is";


    cout<<"[";
  for(int i=0;i<out.size();i++){
    if(i > 0) {
        cout << ",";
    }
    cout<<out[i];
  }
  cout<<"]";
cout<<endl;




}