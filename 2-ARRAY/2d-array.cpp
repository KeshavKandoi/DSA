// sum of rows

#include<iostream>
#include<vector>
using namespace std;

void print(int arr[][4],int row, int column){

  for(int row=0;row<3;row++){
    int sum=0;

for(column=0;column<4;column++){
  sum+= arr[row][column];
}
cout<< sum <<endl;
  }

}
int main(){
  int arr[3][4];

cout<< "Enter the  rows and column " <<endl;
for(int row=0;row<3;row++){

  for(int column=0;column<4;column++){
    cin>>arr[row][column];
}
}
cout<< "\n The  rows and columns are \n" <<endl;
for(int row=0;row<3;row++){

  for(int column=0;column<4;column++){
    cout<<arr[row][column] <<" ";
}
cout<<endl;
}
 print(arr,3,4);
}
