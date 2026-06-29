// Approach 1

// 232. Implement Queue using Stacks

#include <iostream>
#include <stack>
using namespace std;

class MyQueue {
public:
    stack<int> s1, s2;

    MyQueue() {

    }

    void push(int x) {
        s1.push(x);
    }

    int pop() {
        if (!s2.empty()) {
            int val = s2.top();
            s2.pop();
            return val;
        }
        else {
            while (!s1.empty()) {
                s2.push(s1.top());
                s1.pop();
            }

            int val = s2.top();
            s2.pop();
            return val;
        }
    }

    int peek() {
        if (!s2.empty()) {
            return s2.top();
        }
        else {
            while (!s1.empty()) {
                s2.push(s1.top());
                s1.pop();
            }

            return s2.top();
        }
    }

    bool empty() {
        return s1.empty() && s2.empty();
    }
};

int main() {
    MyQueue q;

    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        q.push(x);
    }

    cout << "Front element: " << q.peek() << endl;

    cout << "Popped element: " << q.pop() << endl;

    if (!q.empty())
        cout << "Front element after pop: " << q.peek() << endl;

    cout << "Remaining elements:\n";
    while (!q.empty()) {
        cout << q.pop() << " ";
    }

    cout << endl;

    return 0;
}

// approach 2


// #include <iostream>
// #include <stack>
// using namespace std;

// class MyQueue {
// public:
//     stack<int> s1, s2;

//     MyQueue() {
//     }

//     void push(int x) {
//         while (!s1.empty()) {
//             s2.push(s1.top());
//             s1.pop();
//         }

//         s1.push(x);

//         while (!s2.empty()) {
//             s1.push(s2.top());
//             s2.pop();
//         }
//     }

//     int pop() {
//         if (s1.empty()) {
//             return -1;
//         }

//         int val = s1.top();
//         s1.pop();
//         return val;
//     }

//     int peek() {
//         if (s1.empty()) {
//             return -1;
//         }

//         return s1.top();
//     }

//     bool empty() {
//         return s1.empty();
//     }
// };

// int main() {
//     MyQueue q;

//     int n;
//     cout << "Enter number of elements: ";
//     cin >> n;

//     cout << "Enter elements:\n";
//     for (int i = 0; i < n; i++) {
//         int x;
//         cin >> x;
//         q.push(x);
//     }

//     cout << "Front element: " << q.peek() << endl;

//     cout << "Popped element: " << q.pop() << endl;

//     if (!q.empty()) {
//         cout << "Front element after pop: " << q.peek() << endl;
//     }

//     cout << "Remaining elements:\n";
//     while (!q.empty()) {
//         cout << q.pop() << " ";
//     }

//     cout << endl;

//     return 0;
// }