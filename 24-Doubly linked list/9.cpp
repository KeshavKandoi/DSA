// Insert before given node in Doubly Linked List

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

ListNode* getNode(ListNode* head, int position) {

    ListNode* temp = head;

    for (int i = 1; i < position && temp != nullptr; i++) {
        temp = temp->next;
    }

    return temp;
}

void insertBeforeGivenNode(ListNode* node, int X) {

    if (node == nullptr) {
        return;
    }

    ListNode* back = node->prev;

    ListNode* New = new ListNode(X, back, node);

    if (back != nullptr) {
        back->next = New;
    }

    node->prev = New;
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

    int position;
    int X;

    cout << "Enter position of given node: ";
    cin >> position;

    cout << "Enter value to insert before it: ";
    cin >> X;

    ListNode* node = getNode(head, position);

    if (node == head) {
        ListNode* New = new ListNode(X, nullptr, head);
        head->prev = New;
        head = New;
    }
    else {
        insertBeforeGivenNode(node, X);
    }

    cout << "After insertion: ";
    printDLL(head);

    return 0;
}