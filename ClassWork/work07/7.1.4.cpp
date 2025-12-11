#include <iostream>
using namespace std;

struct ListNode
{
    int num;
    ListNode *next;
};

int main()
{
    ListNode *head,*p,*q;
    int num;

    head = NULL;
    //cout << "请输入若干个正整数（-1结束）\n";
    cin >> num;
    while(num != -1)
    {
        p = new ListNode;
        p->num = num;
        head = p->next;
        head = p;
        cin >> num;
    }

    //cout << "按照输入顺序逆序输出\n";
    for(p = head; p->next != NULL; p = p->next)
    {
        cout << p->num << " ";
    };
    cout << endl;

    for(p = head; p != NULL; p = q)
    {
        q = p->next;
        delete p;
    }

    return 0;
}