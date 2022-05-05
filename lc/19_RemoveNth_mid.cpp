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
    for(int i = 9; i > 0; i--) {
        ListNode* NewNode = new ListNode(i);
        p->next = NewNode;
        p = p->next;
    }
    return pHead->next;
}

ListNode* removeNthFromEnd(ListNode* head, int n) {
    //1 << n << sz 虚拟头节点
    int size = 0;
    ListNode* p = head;
    while(p != NULL) {
        size ++;
        p = p->next;
    }
    int m = size - n;
    ListNode* pHead = new ListNode(-1);
    pHead->next = head;
    ListNode* cur = head;
    while(cur != NULL && m != 1) {
        cur = cur->next;
        m--;
    }
    ListNode* deleteNode = cur->next;
    cur->next = cur->next->next;
    delete deleteNode;
    return head;
}

int main() {
    ListNode* head = CreateListNode();
    PrintListNode(head);

    ListNode* NHead = removeNthFromEnd(head, 5);
    PrintListNode(NHead);

    return 0;

}//
// Created by Administrator on 2022/4/1.
//

