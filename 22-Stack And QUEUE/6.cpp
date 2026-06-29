// 155. Min Stack

#include<iostream>
#include<stack>


using namespace std;

stack<int>st;
stack<int>stmin;

    
    void push(int value) {

        st.push(value);

        if(stmin.empty()||stmin.top()>st.top()){
            stmin.push(value);
        }
        else{
            stmin.push(stmin.top());
        }
    }
    
    void pop() {
        if(st.size()==0){
            return ;
        }
        else{
           st.pop();
           stmin.pop();
        }
        
    }
    
    int top() {
        if(st.size()==0){
            return -1;
        }
       return st.top();
        
    }
    
    int getMin() {
  
  return stmin.top();
    }
    void display() {

    if (st.empty()) {
        cout << "Stack is Empty\n";
        return;
    }

    stack<int> temp = st;   

    cout << "Stack (Top to Bottom): ";

    while (!temp.empty()) {
        cout << temp.top() << " ";
        temp.pop();
    }

    cout << endl;
}
   

    int main(){
      int choice;

      while(true){

        cout<<"1.push\n";
        cout<<"2.pop\n";
        cout<<"3.top\n";
        cout<<"4.getMin\n";
         cout << "5. Display\n";
        cout<<"6.Exit\n";
        cout<<"Enter your choice"<<endl;
        cin>>choice;

    
      if (choice==1){
        int value;
        cout<<"Enter the value"<<endl;
        cin>>value;
        push(value);

      }
      else if (choice==2){
        pop();

      }
       else if (choice==3){
        cout << "Top Element: " << top() << endl;
      }
       else if (choice==4){
cout << "Minimum Element: " << getMin() << endl;
      }
        else if (choice == 6) {
            cout << "Program Ended.\n";
            break;
    }
      else if (choice == 5) {
         display();
    }

     else {
            cout << "Invalid Choice\n";
        }
  }
  return 0;

  }