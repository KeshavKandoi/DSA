#include<iostream>
#include<vector>
using namespace std;

int SecondLargest(vector<int>&arr){
    int largest=arr[0];
    int SL=-1;
    for(int i=0;i<arr.size();i++){
        if(arr[i]>largest){
            SL=largest;
            largest=arr[i];
        }
        else if(arr[i]<largest && arr[i]>SL){
            SL=arr[i];
        }
    }
    return SL;
}
    int main() {
        int n;
        cout<<"Enter the numbers"<<" ";
        cin>>n;
        vector<int> arr(n);
        
        for( int i=0;i<n;i++){
            cin>>arr[i];
        }
        cout<<"The array is"<<endl;
        for(auto i:arr){
            cout<<i<<endl;
        }
        cout<<"The secondlargest element is " << SecondLargest(arr)<<endl;
        return 0;
        
    }
