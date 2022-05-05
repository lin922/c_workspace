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

class MyLinkedList {
public:
    MyLinkedList() {
        ListNode* pHead = new ListNode(-1);
        int size_t = 0;
    }

    int get(int index) {
        if(index > size_t)


    }

    void addAtHead(int val) {

    }

    void addAtTail(int val) {

    }

    void addAtIndex(int index, int val) {

    }

    void deleteAtIndex(int index) {

    }
};

int main() {

    MyLinkedList MyLinkedList1;
    MyLinkedList1.addAtHead(4);

    return 0;
}