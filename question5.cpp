// 61. Rotate List
// Solved
// Medium
// Topics
// premium lock icon
// Companies
// Given the head of a linked list, rotate the list to the right by k places.

 

// Example 1:


// Input: head = [1,2,3,4,5], k = 2
// Output: [4,5,1,2,3]
// Example 2:


// Input: head = [0,1,2], k = 4
// Output: [2,0,1]
 

// Constraints:

// The number of nodes in the list is in the range [0, 500].
// -100 <= Node.val <= 100
// 0 <= k <= 2 * 109

#include<iostream>
using namespace std;
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};
ListNode* rotateRight(ListNode* head, int k) {
    if(head == NULL || head->next == NULL || k == 0)
        return head;

    ListNode* temp = head;
    int n = 1;

    while(temp->next != NULL) {
        temp = temp->next;
        n++;
    }

    k = k % n;
    if(k == 0) return head;

    temp->next = head;

    int steps = n - k;
    ListNode* newTail = head;

    for(int i = 1; i < steps; i++) {
        newTail = newTail->next;
    }

    ListNode* newHead = newTail->next;

    newTail->next = NULL;

    return newHead;
}

void printList(ListNode* head) {
    while(head != NULL) {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

ListNode* insert(ListNode* head, int val) {
    if(head == NULL) return new ListNode(val);

    ListNode* temp = head;
    while(temp->next != NULL)
        temp = temp->next;

    temp->next = new ListNode(val);
    return head;
}

int main() {
    int n, k, x;
    
    cout << "Enter number of nodes: ";
    cin >> n;

    ListNode* head = NULL;

    cout << "Enter elements: ";
    for(int i = 0; i < n; i++) {
        cin >> x;
        head = insert(head, x);
    }

    cout << "Enter k: ";
    cin >> k;

    cout << "Original List: ";
    printList(head);

    head = rotateRight(head, k);

    cout << "Rotated List: ";
    printList(head);

    return 0;
}