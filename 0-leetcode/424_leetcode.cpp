
/*
#include<iostream>
#include<vector>

using namespace std;
 int characterReplacement(string s, int k) {
  int n=s.size();
  int maxlen=0;

for(int i=0;i<n;i++){
  int hash[26]={0};
    int maxsize=0;
  
  for(int j=i;j<n;j++){
   hash[s[j]-'A']++;
   maxsize=max(maxsize,hash[s[j]-'A']);
   int len=j-i+1;
   int character_change=len-maxsize;

  if(character_change<=k){
    maxlen=max(maxlen,len);
  }
  else{
    break;
  }
  }
}
return maxlen;
 }
 int main() {
    string s;
    cout << "Enter the string: ";
    cin >> s;
    int k;
    cout << "Enter k: ";
    cin >> k;

    cout << "Longest substring length: " << characterReplacement(s, k) << endl;
}
*/
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int characterReplacement(string s, int k) {
    int freq[26] = {0};  
    int l = 0, maxFreq = 0, maxlen = 0;

    for (int r = 0; r < s.size(); r++) {
        freq[s[r] - 'A']++;               
        maxFreq = max(maxFreq, freq[s[r] - 'A']);  


        while ((r - l + 1) - maxFreq > k) {
            freq[s[l] - 'A']--;
            l++;
        }

        maxlen = max(maxlen, r - l + 1);   
    }
    return maxlen;
}


int main() {
    string s;
    int k;
    cout << "Enter the string: ";
    cin >> s;
    cout << "Enter k: ";
    cin >> k;

    cout << "Longest substring length: " << characterReplacement(s, k) << endl;
}