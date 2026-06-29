// Implement Stack using Arrays

#include <iostream>
using namespace std;

int arr[100];
int topI = -1;

void push(int x) {
    if (topI == 99) {
        cout << "Stack Overflow\n";
        return;
    }
    arr[++topI] = x;
}

int pop() {
    if (topI == -1) {
        cout << "Stack Underflow\n";
        return -1;
    }
    return arr[topI--];
}

int top() {
    if (topI == -1) {
        cout << "Stack is Empty\n";
        return -1;
    }
    return arr[topI];
}

bool isEmpty() {
    return topI == -1;
}

int main() {
    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        push(x);
    }

    cout << "Top element: " << top() << endl;

    cout << "Popped element: " << pop() << endl;

    cout << "Top element after pop: " << top() << endl;

    cout << "Remaining elements:\n";
    while (!isEmpty()) {
        cout << pop() << " ";
    }

    return 0;
}