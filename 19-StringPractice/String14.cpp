// 5. Longest Palindromic Substring

#include<iostream>
#include<vector>

using namespace std;

string longestPalindrome(string s) {
  int n=s.size();
  int start=0;
  int max=1;
  

 
  for(int i=0;i<n;i++){
  int left=i;
  int right=i;


  while(left>=0 && right<n&&s[left]==s[right]){
    

    if((right-left+1)>max){

    max=right-left+1;
    start=left;
    }
    left--;
    right++;
  }

left=i;
right=i+1;


while(left>=0 && right<n&&s[left]==s[right]){

 if((right-left+1)>max){
  start=left;
  max=right-left+1;
 

}
 left--;
  right++;
}
  }

return s.substr(start,max);


  }

int main(){
  string s;
  cout<<"Enter the value of String s"<<endl;
  cin>>s;

  string k=longestPalindrome(s);

  cout<<"The longest palindrome is "<<'"'<<k<<'"';

}