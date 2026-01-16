#include<iostream>
#include<string>
using namespace std;

class TrieNode{
  public:
  char data;
  TrieNode*children[26];
  bool isTerminal ;

  TrieNode(char ch){
    data=ch;
    for(int i=0;i<26;i++){
      children[i]=NULL;
    }
    isTerminal =false;
  }
};
class Trie{
  public:
  TrieNode*root;
  
  Trie(){
        root = new TrieNode('\0'); // Initialize root once
    }

  void insertutil(TrieNode*root,string word){
    if(word.length()==0){
      root->isTerminal=true;
      return;
    }
    int index=word[0]-'a';
    TrieNode*child;

    if(root->children[index]!=NULL){
      child=root->children[index];
    }
    else{
      child=new TrieNode(word[0]);
      root->children[index]=child;
    }
    insertutil(child,word.substr(1)) ;
    }
      //substr() is a string function that returns part of a string So it removes the first character.

void insertword(string word){
  insertutil(root,word);
}
};
int main() {
    Trie t;   

    t.insertword("cat");
    t.insertword("car");
    t.insertword("love");
    t.insertword("line");

    cout << "Words inserted successfully!" << endl;

    return 0;
}



