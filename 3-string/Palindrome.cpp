#include<iostream>
using namespace std;

int GetSize(char name []){
  int count=0;
  for(int i=0;name[i]!='\0';i++){
    count++; 
  }
  return count;
}
bool Palindrome(char name[],int n){
  int start=0;
  int end=n-1;

  while(start<=end){
    if(name[start]!=name[end]){
   return false;
    }
   start++;
   end--;
  }
    return true;
}

int main(){
  char name[20];
  cout<< " Enter the name ";
  cin>>name;
   int len = GetSize(name);
 cout<< " check Palindrome "<<  Palindrome(name,len) <<endl;

    return 0;
}



