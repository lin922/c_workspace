

//
// Created by Administrator on 2022/3/28.
//
#include<iostream>
using namespace std;

//定义一个结构体
struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(NULL) { }
};

//打印输出链表
void printListNode(ListNode* head) {
    ListNode* p = head;
    while(p != nullptr) {
        cout << p->val;
        p = p->next;
    }
    cout << endl;
}

//创建链表
ListNode* CreateListNode(ListNode* pHead) {
    ListNode* p = pHead;

    for(int i = 1; i < 10; i++) {
        ListNode* pNewNode;
        pNewNode = new ListNode(0);
        pNewNode->val = i;
        pNewNode->next = NULL;
        p->next = pNewNode;
        p = pNewNode;
    }
    return pHead;
}


class Solution {
public:
    ListNode *removeElements(ListNode *head, int val) {
        ListNode *phead = new ListNode(0);
        phead->next = head;
        ListNode *p = phead;
        while (p->next != NULL) {
            ListNode *ppnext = p->next->next;
            if (p->next->val == val) {
                ListNode *deleteNode = p->next;
                p->next = ppnext;
                delete deleteNode;
            }
            p = p->next;
        }
        head = phead->next;
        delete phead;
        return head;
    }
};

int main() {
    ListNode* head = new ListNode(0);
    ListNode* p = CreateListNode(head);
    printListNode(p);
    Solution solution1;
    ListNode* p1 = solution1.removeElements(p, 3);
    printListNode(p1);
    return 0;
}
