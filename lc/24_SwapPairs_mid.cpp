//
// Created by Administrator on 2022/4/1.
//

#include<iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(NULL) {}
};

void PrintListNode(ListNode* head) {
    ListNode* p = head;
    while(p != NULL) {
        cout << p->val << ' ';
        p = p->next;
    }
    cout << endl;
}

ListNode* CreateListNode() {
    ListNode* pHead = new ListNode(-1);
    ListNode* p = pHead;
    for(int i = 1; i < 10; i++) {
        ListNode* NewNode = new ListNode(i);
        p->next = NewNode;
        p = p->next;
    }
    return pHead->next;
}

ListNode* swapPairs(ListNode* head) {
    ListNode* pHead = new ListNode(-1);
    pHead->next = head;
    ListNode* pre = pHead;
    ListNode* p = head;
    while(p->next != NULL) {
        ListNode* pnext = p->next;
        ListNode* ppnext = p->next->next;
        pre->next = pnext;
        pnext->next = p;
        p->next = ppnext;
        pre = p;
        p = ppnext;
    }
    return pHead->next;
}

int main() {
    ListNode* head = CreateListNode();
    PrintListNode(head);

    ListNode* swapHead = swapPairs(head);
    PrintListNode(swapHead);

    return 0;

}