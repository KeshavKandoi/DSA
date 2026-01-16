#include<iostream>
using  namespace std;

void Reverse(char name[],int n){
  int start=0;
  int end=n-1;
  while(start<end){
    swap(name[start++],name[end--]);
  }
}
int GetSize(char name[]){
  int count=0;
  for(int i=0;name[i]!='\0';i++){
    count++;

  }
  return count;
}

int main(){
char name[20];
cout<< " Enter the name " ;
cin>> name;
cout<< " The name is " << name<<endl;;
int len =GetSize(name);
 cout<< " The Length is " << len <<endl;
 Reverse(name,len);
 cout<< " The Reverse  name is "<< name ;
}
