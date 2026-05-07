// 53. Maximum Subarray
// kadane's algorithm 


#include<iostream>
#include<vector>
using namespace std;

int print(vector<int>& nums){
  int n=nums.size();

  long long sum=0;
  long long  maximum=nums[0];
  

  for(int i=0;i<n;i++){
    sum+=nums[i];

        maximum=max(sum,maximum);

    if(sum<0){
      sum=0;
    }

  }
  return maximum;
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

int value = print(arr);

    cout<<"The maximum sum is:"<<value<<endl;

}


// printing

#include<iostream>
#include<vector>

using namespace std;

void print(vector<int>& nums) {

    int n = nums.size();

    int start = 0;
    int ansstart = 0;
    int ansend = 0;

    long long sum = 0;
    long long maximum = nums[0];

    for(int i = 0; i < n; i++) {

        if(sum == 0) {
            start = i;
        }

        sum += nums[i];

        if(sum > maximum) {

            maximum = sum;

            ansstart = start;
            ansend = i;
        }

        if(sum < 0) {
            sum = 0;
        }
    }

    cout << "The maximum sum is: " << maximum << endl;

    cout << "The subarray is: ";

    for(int i = ansstart; i <= ansend; i++) {
        cout << nums[i] << " ";
    }

    cout << endl;
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

    print(arr);
}