#include <iostream>
using namespace std;

//8.2.1 链表的概念
    //结点：储存一个元素的空间
    //变量head(示例名称)    存放第一个节点的地址

//8.2.2 单链表的存储
    //定义结点类型(用结构体)
        struct linkNode {
            int data;
            linkNode* next;
        };   

//8.2.3 单链表的操作
    //创建单链表
        //定义链表的头指针，并初始化为空指针
            linkNode* head = nullptr;

    //插入结点
        //在最前面插入
            //插入s后保持head指向第一个结点
                linkNode *s;
                s = new linkNode;
                cin >> s->data;
                s->next = head;
                head = s;
        //在指定位置插入
            //在结点p后面插入新结点s
                linkNode* s = new linkNode;
                s->data = 20;
                s->next = p->next;
                p->next = s;

    //删除结点
        //删除结点p之后的结点
        //为防止p->next == NULL，需先判断
            if(p && p->next){
                linkNode* s = p->next;
                p->next = s->next;
                delete s;
            }

        //删除第pos个结点
            int pos;
            cin >> pos;
            if (pos < 0) {
                cout << "位置不合法" << endl;
                return;
            } else if (pos ==0) {
                linkNode *temp = head;
                head = head->next;
                delete temp;
                return;
            } else {
                linkNode *current = head;
                int count = 0;
                while (current != nullptr && count < pos - 1) {
                    current = current->next;
                    count++;
                }
                if (current == nullptr || current->next == nullptr) {
                    cout << "位置不合法" << endl;
                    return;
                }
                linkNode *temp = current->next;
                current->next = temp->next;
                delete temp;
            }

    //访问结点
        //遍历链表并输出所有结点的数据
            linkNode *p;
            p = head;
            while(p){
                cout << p->data << ' ';
                p = p->next;
            }
        //查找值为x的结点
            linkNode *p;
            p = head;
            while(p){
                if（p->data == x）break;
                p = p->next;
            }

    // 反转链表
        //头插法
            linkNode *

        //迭代法
            linkNode *prev = nullptr;
            linkNode *current = head;

//8.2.4 单循环链表

//8.2.5 双向链表
    //插入结点
        //在结点p后面插入新结点s
            linkNode* s = new linkNode;
            cin >> s->data;
            s -> next = p -> next;
            s -> prev = p;
            p -> next = s;
            p -> next -> prev = s;



//8.2.6 广义表
    //定义广义表的结点类型