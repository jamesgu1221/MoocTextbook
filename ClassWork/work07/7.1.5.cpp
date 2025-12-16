#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
};

ListNode* reverseList(ListNode* head) {
    ListNode* p = head;         //指针p遍历原链表
    ListNode* head1 = NULL;     //指针head1指向新链表开头
    while(p != NULL){
        ListNode *s = new ListNode;
        s->val = p->val;
        s->next = head1;
        head1 = s;
        p = p->next;
    }
    return head1;
}

ListNode* createList() {
    int x;
    ListNode head;
    ListNode* p = &head; head.next = NULL;
    while (cin >> x) {
        p->next = new ListNode;
        p->next->val = x;
        p->next->next = NULL;
        p = p->next; 
    }
    return head.next;
}

void disp(ListNode* p) {
    while (p)
    {
        cout<<p->val<<" -> ";
        p = p->next;
    }
    cout<<"nullptr\n";
}

int main()
{
    ListNode* L1 = createList(); disp(L1);
    ListNode* L2 = reverseList(L1); disp(L2);

    return 0;
}