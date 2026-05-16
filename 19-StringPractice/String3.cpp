// 38. Count and Say
#include<iostream>
#include<vector>

using namespace std;

string say(string s){
  int size=s.size();
  string ans="";
  

  for(int i=0;i<size;i++){
    int count=1;
    while(i<size-1 && s[i]==s[i+1]){
      i++;
      count++;
    }
    ans+=to_string(count);
    ans+=s[i];


  }
  return ans;
}

string countAndSay(int n){
  string curr="1";

  for(int i =2;i<=n;i++){
    curr = say(curr);
  }
  return curr;
}
int main() {
    int n;

    cout << "Enter n: ";
    cin >> n;

    cout << "Count and Say sequence: " << countAndSay(n) << endl;

    return 0;
}