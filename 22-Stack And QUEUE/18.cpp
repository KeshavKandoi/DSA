// 907. Sum of Subarray Minimums

#include<iostream>
#include<vector>
#include<stack>
using namespace std;

vector<int> LeftSmallerElements(vector<int>& arr,int n) {
        vector<int>s(n);
        stack<int>st;
        

        for(int i=0;i<n;i++){
            while(!st.empty()&&arr[st.top()]>arr[i]){
                st.pop();
            }
            if(st.empty()){
                s[i]=-1;
            }
            else{
                s[i]=st.top();
            }
            st.push(i);
        }
        return s;
        
    }

vector<int> RightSmallerElements( vector<int>& arr,int n) {
        vector<int>s(n);
        stack<int>st;
        

        for(int i=n-1;i>=0;i--){
            while(!st.empty()&&arr[st.top()]>=arr[i]){
                st.pop();
            }
            if(st.empty()){
                s[i]=n;
            }
            else{
                s[i]=st.top();
            }
            st.push(i);
        }
        return s;


    }
    int sumSubarrayMins(vector<int>& arr) {
        int n=arr.size();
        vector<int>ls=LeftSmallerElements(arr,n);
        vector<int>rs=RightSmallerElements(arr,n);

        long long sum=0;

        int mod = 1e9 + 7;
      

        for(int i=0;i<n;i++){

           long long left= i-ls[i];

           long long right= rs[i]-i;

           long long  value=left*right;
           long long  totalValue=1LL*value*arr[i];
 sum=(sum+totalValue)%mod;
        }
       return sum;
        
      }

int main() {


    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter the array elements: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Sum of Subarray Minimums = " << sumSubarrayMins(arr);

    return 0;
}