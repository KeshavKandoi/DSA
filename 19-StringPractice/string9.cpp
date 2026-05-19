// 1021. Remove Outermost Parentheses
#include<iostream>


using namespace std;

string removeOuterParentheses(string s) {

        int n=s.size();
        int count=0;
        string sum="";

        for(int i=0;i<n;i++){
           
            if(s[i]=='('){
                if(count>0){
                
                sum+=s[i];
            }
            count++;
            }

                else{
                    count--;
                    if(count>0){
                    sum+=s[i];
                }

                }


            }
            

 return sum;
            

}

int main(){
  string s;
  cout<<"Enter the string"<<endl;
  cin>>s;

  string value=removeOuterParentheses(s);

  cout<< "The output is "<<value;
}