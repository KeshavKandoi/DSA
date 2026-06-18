// pascal finding digit with row and column number
#include <iostream>
using namespace std;

int rowAndColumn(int row,int column){

  int res=1;
  for(int i=0;i<column;i++){

    res*=(row-i);
    res=res/(i+1);

  }
  
  return res;
}


int main(){
  int row;
  int column;

  cout<<"Enter the value of row"<<endl;
  cin>>row;
  cout<<"Enter the value of column"<<endl;
  cin>>column;


cout<<"The factorial is:-"<<rowAndColumn(row,column)<<endl;

}
