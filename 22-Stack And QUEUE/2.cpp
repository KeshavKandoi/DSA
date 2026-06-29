// Implement Queue using Arrays

#include <iostream>
using namespace std;

int currsize = 0;
int start = -1;
int rear = -1;
int arr[10];

void push(int x) {
    if (currsize == 10) {
        cout << "Queue Overflow\n";
        return;
    }

    if (currsize == 0) {
        start = 0;
        rear = 0;
    } else {
        rear = (rear + 1) % 10;
    }

    arr[rear] = x;
    currsize++;
}

int pop() {
    if (currsize == 0) {
        cout << "Queue Underflow\n";
        return -1;
    }

    int val = arr[start];

    if (currsize == 1) {
        start = -1;
        rear = -1;
        currsize = 0;
    } else {
        start = (start + 1) % 10;
        currsize--;
    }

    return val;
}

int peek() {
    if (currsize == 0) {
        cout << "Queue is Empty\n";
        return -1;
    }

    return arr[start];
}

bool isEmpty() {
    return currsize == 0;
}

int main() {
    int n;

    cout << "Enter number of elements (max 10): ";
    cin >> n;

    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        push(x);
    }

    cout << "Front element: " << peek() << endl;

    cout << "Dequeued element: " << pop() << endl;

    cout << "Front element after dequeue: " << peek() << endl;

    cout << "Remaining elements:\n";
    while (!isEmpty()) {
        cout << pop() << " ";
    }

    cout << endl;

    return 0;
}