// Infix to Postfix Conversion

#include<iostream>
#include<stack>


using namespace std;

   int priority(char ch) {
        if (ch == '^') return 3;
        if (ch == '*' || ch == '/') return 2;
        if (ch == '+' || ch == '-') return 1;
        return -1;
    }


    string infixToPostfix(string s) {
    int n=s.size();
     stack<char>st;
     string ans="";
     int i=0;

     while(i<n){
     if(s[i]>='A'&&s[i]<='Z'||s[i]>='a'&&s[i]<='z'||s[i]>='0'&&s[i]<='9'){
        ans+=s[i];
     }
     else if(s[i]=='('){
        st.push(s[i]);
     }
     else if(s[i]==')'){
        while(st.top()!='('){
           ans+= st.top();
           st.pop();
        }
        st.pop();
     }
     else{
        while(!st.empty()&&st.top() != '(' &&priority(s[i])<=priority(st.top())){
            ans+=st.top();
            st.pop();
        }
       
            st.push(s[i]);
            
        }

     
     i++;
     }
     
     while(!st.empty()){
      ans+=st.top();
            st.pop();
     }
     return ans;
     }


int main() {
    string s;

    cout << "Enter the string: ";
    cin >> s;

     cout << infixToPostfix(s);

    return 0;


}