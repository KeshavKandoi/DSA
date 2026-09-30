//  Removing given node in Doubly Linked List

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

void deleteGivenNode(ListNode* node) {

    if (node == nullptr) {
        return;
    }

    ListNode* front = node->next;
    ListNode* back = node->prev;

    if (back != nullptr) {
        back->next = front;
    }

    if (front != nullptr) {
        front->prev = back;
    }

    delete node;
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

    cout << "Enter position of node to delete: ";
    cin >> position;

    ListNode* node = getNode(head, position);

    if (node == head) {
        head = head->next;

        if (head != nullptr) {
            head->prev = nullptr;
        }

        delete node;
    }
    else {
        deleteGivenNode(node);
    }

    cout << "After deletion: ";
    printDLL(head);

    return 0;
}