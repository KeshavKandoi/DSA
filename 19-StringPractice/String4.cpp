
// 242. Valid Anagram

// #include<iostream>
// #include<vector>
// using namespace std;

// bool isAnagram(string s, string t) {

//   int one=s.size();
//   int second=t.size();

//   if(one!=second){
//     return false;
//   }

//   for(int j=0;j<second;j++){
//     bool found=false;
//     for(int i=0;i<one;i++){
//       if(t[j]==s[i]){
//         found=true;
//         s[i]='#';
//         break;
//       }
      
//     }
//     if(found==false){
//       return false;
//     }
   

//   }
//  return true;
// }

// int main() {
//     string s, t;

//     cin >> s >> t;

//     if(isAnagram(s, t)){
//         cout << "True";
//     } else {
//         cout << "False";
//     }

//     return 0;
// }


// optimized approach 


#include<iostream>
#include<vector>
using namespace std;

bool isAnagram(string s, string t) {

  int one=s.size();
  int second=t.size();

  if(one!=second){
    return false;
  }

  int freq[26]={0};

  for(int i=0;i<one;i++){
    freq[s[i]-'a']++;
    freq[t[i]-'a']--;
  }

  for(int i=0;i<26;i++){
    if(freq[i]!=0){
      return false;
    }
  }
  return true;




}


int main() {
    string s, t;

    cin >> s >> t;

    if(isAnagram(s, t)){
        cout << "True";
    } else {
        cout << "False";
    }

    return 0;
}

