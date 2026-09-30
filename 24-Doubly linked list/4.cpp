//  Delete Kth Element of Doubly Linked List

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

ListNode* deleteKthElement(ListNode*& head, int k) {

    if (head == nullptr) {
        return nullptr;
    }

    if (k == 1) {
        ListNode* temp = head;

        head = head->next;

        if (head != nullptr) {
            head->prev = nullptr;
        }

        temp->next = nullptr;

        delete temp;

        return head;
    }

    ListNode* temp = head;
    ListNode* back = nullptr;
    int cnt = 0;

    while (temp != nullptr) {

        cnt++;

        if (cnt == k) {

            back->next = temp->next;

            if (temp->next != nullptr) {
                temp->next->prev = back;
            }

            temp->next = nullptr;
            temp->prev = nullptr;

            delete temp;

            break;
        }

        back = temp;
        temp = temp->next;
    }

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

    int k;

    cout << "Enter position to delete: ";
    cin >> k;

    head = deleteKthElement(head, k);

    cout << "After deleting position " << k << ": ";
    printDLL(head);

    return 0;
}