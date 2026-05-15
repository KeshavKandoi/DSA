// 151. Reverse Words in a String
#include<iostream>
#include<vector>
#include <sstream>
using namespace std ;

string reverseWords(string s) {
  string word="";
  int count=0;
  vector<string>words;
  string ans="";

  stringstream ss(s);


  while(ss>>word){
    count++;
    words.push_back(word);
  }

  for(int i=count-1;i>=0;i--){
    ans+=words[i];

    if(i!=0){
      ans+=" ";
    }
  }
  return ans;

}
int main() {
    string s;

    cout << "Enter the string: ";
    getline(cin, s);

    cout << "Original string: " << s << endl;

    cout << "Reversed words: " << reverseWords(s);

    return 0;
}