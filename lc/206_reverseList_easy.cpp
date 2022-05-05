//
// Created by Administrator on 2022/3/29.
//

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

ListNode* ReverseList(ListNode* head) {
    ListNode* p = NULL;
    ListNode* cur = head;
    while(cur != NULL) {
        ListNode* h = cur->next;
        cur->next = p;
        p = cur;
        cur = h;
    }
    return p;
}



int main() {
    ListNode* head = CreateListNode();
    printListNode(head);

    ListNode* List = ReverseList(head);
    printListNode(List);

    return 0;
}