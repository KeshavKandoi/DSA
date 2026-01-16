#include<iostream>
using namespace std;

int getLength(char name[]){
int count=0;
for(int i=0;name[i]!='\0';i++){
count++;
}
return count;
}
int main(){
  char name[20];
  cout<< " Enter the Name ";
  cin>>name;
  cout<<" your name is " << name <<'\n';
  cout<< " Length " << getLength(name) <<'\n';
  return 0;
}