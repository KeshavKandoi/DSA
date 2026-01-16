#include <iostream>
using namespace std;



    char ToLowerCase(char ch){
        if(ch>='a' && ch<='z'){
            return ch;
        }
        else{
           char temp=(ch-'A'+'a');
            return temp;
        }
    }
     bool IsAlphaNumeric(char ch){
         return (ch>='a'&& ch<='z')||
            (ch>='A'&& ch<='Z')||
            (ch>='0'&& ch<='9');
        }

    
    bool Palindrome(string s){
        int start=0;
        int end=s.size()-1;


        while(start<=end){
            while(start<end && !IsAlphaNumeric(s[start]))
            start++;
            while(start<end && !IsAlphaNumeric(s[end]))
            end--;
            if(ToLowerCase(s[start])!=ToLowerCase(s[end])){
            return false;

        }
        start++;
        end--;
        }
        
            return true;
    
    }
    int main(){
   string s;
   cout<< " Enter the String " ;
   getline(cin, s);//it will take whole line after space and cin will not take after space
  //cin>>s;
   cout<< " check Palindrome " <<  Palindrome(s) <<endl;

    return 0;
}






    
