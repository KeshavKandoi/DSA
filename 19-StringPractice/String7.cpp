// 451. Sort Characters By Frequency
#include<iostream>
#include<vector>
#include <unordered_map>

using namespace std;

    string frequencySort(string s) {

        int n=s.size();

        unordered_map<char,int>hash;

        for(int i=0;i<n;i++){
            hash[s[i]]++;
        }
    vector<pair<char,int>>arr;
        for(auto x:hash){
            arr.push_back(x);
        }

sort(arr.begin(), arr.end(),
    [](pair<char,int>& a, pair<char,int>& b){
        return a.second > b.second;
    });


        string ans="";

        for(int i=0;i<arr.size();i++){
         ans.append(arr[i].second, arr[i].first);
        }

       return ans;
    }


int main(){
  string s;
  cout<<"Enter the string"<<endl;
  cin>>s;

 string value=frequencySort(s);

  cout<<"sort string is  "<<value;
}