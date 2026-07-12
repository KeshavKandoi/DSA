//  infixToPrefix



/*

In infix to postfix, we scan the expression from left to right, so we follow the normal associativity rules of operators. The operators +, -, *, and / are left-associative, which means if two operators have the same precedence, the one that appears first should be evaluated first. Therefore, we pop the operator from the stack when the current operator has less than or equal (<=) precedence. However, ^ is right-associative, meaning A^B^C is interpreted as A^(B^C), not (A^B)^C. If we also pop ^ on equal precedence, we would evaluate it in the wrong order. Hence, for postfix conversion, ^ is treated as a special case and is not popped when the precedence is equal.

In infix to prefix, the algorithm first reverses the expression and then converts it to postfix before reversing the result again. Because the expression is reversed, the direction of processing effectively changes from right to left, which also reverses the associativity behavior. Due to this reversal, the special rule for ^ also gets reversed. Therefore, when two ^ operators have the same precedence during prefix conversion, we do pop the stack operator. That is why, instead of using only <=, we use the condition:

(priority(curr) < priority(top)) ||
(priority(curr) == priority(top) && curr == '^')

This condition means: pop operators with higher precedence, and if the precedence is equal, pop only when the operator is ^, ensuring that the correct order of evaluation is preserved after reversing the expression.

*/



#include<iostream>
#include<stack>
#include <algorithm>
using namespace std;


int priority(char ch){
    if(ch=='^'){
        return 3;
    }
    else if( ch=='+' || ch=='-'){
        return 1;
    }
    else if ( ch=='*' || ch=='/'){
        return 2;
    }
    else{
        return -1;
    }
    }

    string infixToPrefix(const string& s) {
        int n=s.size();
        stack<char>st;
        int i=0;
        string ans="";
        string str = s;
        reverse(str.begin(), str.end());


            for(int i=0;i<n;i++){
                if(str[i]=='('){
                  str[i]=')';
                }
                else if (str[i]==')'){
                   str[i]='(' ;
                }

            }

            while(i<n){
                if(str[i]>='A'&&str[i]<='Z'||str[i]>='a'&&str[i]<='z'||str[i]>='0'&&str[i]<='9'){
                    ans+=str[i];
                }
                else if(str[i]=='('){
                    st.push(str[i]);
                }
                else if(str[i]==')'){
                    while(!st.empty()&&st.top()!='('){
                        ans+=st.top();
                        st.pop();
                    }
                    if(!st.empty())
                   st.pop();

                }
                else{
                    while(!st.empty()&&st.top()!='('&&(priority(str[i])<priority(st.top())||priority(str[i])==priority(st.top())&&str[i]=='^')){
                        ans+=st.top();
                        st.pop();
                    }
                    st.push(str[i]);
                }
                i++;
    }
            
            while(!st.empty()){
                ans+=st.top();
                st.pop();
            }
            reverse(ans.begin(), ans.end());
            return ans;
        

        
    }

int main() {
    string s;

    cout << "Enter the string: ";
    cin >> s;

     cout << infixToPrefix(s);

    return 0;


}