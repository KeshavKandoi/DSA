// Delete Tail of Doubly Linked List

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


ListNode* deleteTail(ListNode*& head) {

    if (head == nullptr) {
        return nullptr;
    }


    if (head->next == nullptr) {
        delete head;
        return nullptr;
    }

    ListNode* temp = head;


    while (temp->next != nullptr) {
        temp = temp->next;
    }


    ListNode* back = temp->prev;


    back->next = nullptr;
    temp->prev = nullptr;

    delete temp;

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


    head = deleteTail(head);

    cout << "After deleting tail: ";
    printDLL(head);

    return 0;
}