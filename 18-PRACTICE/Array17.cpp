// stock price  profit 

#include<iostream>
#include<vector>
using namespace std;
int maxProfit(vector<int>& prices) {
  int n=prices.size();
  int buy=prices[0];
  int profit=0;

  for(int i=1;i<n;i++){
    if(prices[i]<buy){
      buy=prices[i]; 
  }
  else{
    profit=max(profit,prices[i]-buy);
  }
  }
  return profit;
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

int value = maxProfit(arr);

    cout<<"The max profit is:"<<value<<endl;

}