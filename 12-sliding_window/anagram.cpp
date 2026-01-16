#include<iostream>
#include<vector>
#include<sstream>
#include<set>
#include <algorithm> 
#include <limits>  
using namespace std;


long long count(string word){
  sort(word.begin(),word.end());
  set<string> unique;
  do{
    unique.insert(word);
   } while(next_permutation(word.begin(),word.end()));
     return unique.size();
   }

vector<string> splitWord(const string&s){
  stringstream ss(s);
  string word;
  vector<string> words;

  while(ss>>word)
  words.push_back(word);
  return words;
}
int main(){
  string s;
    cout << "Enter the string: ";
    getline(cin,s);
    vector<string>words=splitWord(s);
    long long result=1;
  
for(int i=0;i<words.size();i++){
string word=words[i];
long long anagram = count(word);
cout << "Unique anagrams of \"" << word << "\": " << anagram << endl;
        result = anagram*result;
    }

    cout << "\nTotal distinct anagrams of entire string: " << result << endl;
    return 0;
}

  
  


