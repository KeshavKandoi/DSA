// Insert node before (kth node) in Doubly Linked List

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

ListNode* insertBeforeKthPosition(ListNode* head, int X, int K) {

    if (head == nullptr) {

        if (K == 1) {
            ListNode* New = new ListNode(X, nullptr, nullptr);
            return New;
        }

        return nullptr;
    }

    if (K == 1) {

        ListNode* New = new ListNode(X, nullptr, head);

        head->prev = New;

        return New;
    }

    ListNode* temp = head;
    ListNode* prev = nullptr;

    int cnt = 0;

    while (temp != nullptr) {

        cnt++;

        if (cnt == K) {

            ListNode* value = new ListNode(X, prev, temp);

            prev->next = value;
            temp->prev = value;

            return head;
        }

        prev = temp;
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

    int X;
    int K;

    cout << "Enter value to insert: ";
    cin >> X;

    cout << "Enter position before which you want to insert: ";
    cin >> K;

    head = insertBeforeKthPosition(head, X, K);

    cout << "After insertion: ";
    printDLL(head);

    return 0;
}