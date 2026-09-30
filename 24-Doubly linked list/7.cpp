// Insert node before tail in Doubly Linked List

#include <iostream>
#include <vector>
using namespace std;

class ListNode {
public:
    int data;
    ListNode* prev;
    ListNode* next;

    ListNode(int x) {
        data = x;
        prev = nullptr;
        next = nullptr;
    }

    ListNode(int x, ListNode* prev, ListNode* next) {
        data = x;
        this->prev = prev;
        this->next = next;
    }
};

ListNode* createDLL(vector<int>& arr) {

    if (arr.empty()) {
        return nullptr;
    }

    ListNode* head = new ListNode(arr[0]);
    ListNode* temp = head;

    for (int i = 1; i < arr.size(); i++) {

        ListNode* newNode = new ListNode(arr[i]);

        temp->next = newNode;
        newNode->prev = temp;

        temp = newNode;
    }

    return head;
}

ListNode* insertBeforeTail(ListNode* head, int X) {

    if (head == nullptr) {
        return nullptr;
    }

    if (head->next == nullptr) {
        ListNode* New = new ListNode(X, nullptr, head);
        head->prev = New;
        return New;
    }

    ListNode* temp = head;

    while (temp->next != nullptr) {
        temp = temp->next;
    }

    ListNode* back = temp->prev;

    ListNode* New = new ListNode(X, back, temp);

    back->next = New;
    temp->prev = New;

    return head;
}

void printDLL(ListNode* head) {

    ListNode* temp = head;

    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }

    cout << endl;
}

int main() {

    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter elements: ";

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    ListNode* head = createDLL(arr);

    cout << "Original DLL: ";
    printDLL(head);

    int X;

    cout << "Enter value to insert before tail: ";
    cin >> X;

    head = insertBeforeTail(head, X);

    cout << "After insertion: ";
    printDLL(head);

    return 0;
}