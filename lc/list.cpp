#include<iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode* next;
    ListNode (int x) : val(x),next(NULL) {}
};

void printListNode(ListNode* head) {
    ListNode* p = head;
    while(p != NULL) {
        cout << p->val;
        p = p->next;
    }
    cout << endl;
}

ListNode* CreateListNode( ) {
    ListNode* pHead = new ListNode(-1);
    ListNode* p = pHead;
    for(int i = 1; i < 10; i++) {
        ListNode* NewListNode = new ListNode(i);
        p->next = NewListNode;
        p = p->next;
    }
    return pHead->next;
}

ListNode* RemoveListNode(ListNode* head, int val) {
    ListNode* pHead = new ListNode(-1);
    pHead->next = head;
    ListNode* p = pHead;
    while(p->next != NULL) {
        ListNode* pnext = p->next->next;
        if(p->next->val == val) {
            ListNode* deleteNode = p->next;
            p->next = pnext;
            delete deleteNode;
        }
        p = p->next;
    }
    return pHead->next;
}

int main() {
    ListNode* head = CreateListNode();
    printListNode(head);

    ListNode* deNode = RemoveListNode(head, 4);
    printListNode(deNode);

    return 0;
}