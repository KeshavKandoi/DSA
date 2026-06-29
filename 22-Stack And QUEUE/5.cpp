// 20. Valid Parentheses

#include<iostream>
#include<stack>


using namespace std;

    bool isValid(string s) {
        stack<char>st;

        for(char ch:s){
            if(ch=='(' ||ch=='{' || ch=='['){
                st.push(ch);
            }
            else{
                if(st.empty()){
                    return false;
                }
            
            else if(ch==']'&&st.top()=='['||ch=='}'&&st.top()=='{'||ch==')'&&st.top()=='('){
                st.pop();
            }
            else{
                return false;
            }
        }
        }

        if(!st.empty()){
            return false;
        }
        else{
            return true;
        }
        
    }

int main() {
    string s;

    cout << "Enter the string: ";
    cin >> s;

    if (isValid(s)) {
        cout << "Valid Parentheses";
    }
    else {
        cout << "Invalid Parentheses";
    }

    return 0;
}