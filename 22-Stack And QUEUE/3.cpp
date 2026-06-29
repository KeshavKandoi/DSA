
// 225. Implement Stack using Queues
#include<iostream>
#include <queue>
using namespace std;

class MyStack {
public:
    queue<int> q;

    MyStack() {
    }

    void push(int x) {
        q.push(x);

        for (int i = 1; i < q.size(); i++) {
            q.push(q.front());
            q.pop();
        }
    }

    int pop() {
        if (q.empty()) {
            return -1;
        }

        int val = q.front();
        q.pop();
        return val;
    }

    int top() {
        if (q.empty()) {
            return -1;
        }

        return q.front();
    }

    bool empty() {
        return q.empty();
    }
};

int main() {
    MyStack st;

    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        st.push(x);
    }

    cout << "Top element: " << st.top() << endl;

    cout << "Popped element: " << st.pop() << endl;

    cout << "Top element after pop: " << st.top() << endl;

    cout << "Remaining elements:\n";
    while (!st.empty()) {
        cout << st.pop() << " ";
    }

    cout << endl;

    return 0;
}