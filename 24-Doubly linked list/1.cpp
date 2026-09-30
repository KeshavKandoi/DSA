// Convert Array to Doubly Linked List

#include <iostream>
#include <vector>
using namespace std;

class ListNode {
public:
    int data;
    ListNode* prev;
    ListNode* next;

    ListNode(int val) {
        data = val;
        prev = nullptr;
        next = nullptr;
    }
};

ListNode* convertToDLL(vector<int>& arr) {

    if (arr.size() == 0) {
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

    ListNode* head = convertToDLL(arr);

    cout << "Doubly Linked List: ";
    printDLL(head);

    return 0;
}