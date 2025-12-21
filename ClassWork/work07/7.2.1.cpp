#include<iostream>
using namespace std;

struct Node {
  int order, coeff; //order为阶数, coeff为系数
  Node *nxt;
};

Node* add_poly(Node* a, Node* b) 
{
  Node *na = a;
  Node *nb = b;
  Node *c = new Node;
  Node *pc = c;
  c->coeff = 0;
  c->order = 0;
  c->nxt = nullptr;
  while (na && nb) {
    if (na->order == nb->order) {
      if (na->coeff + nb->coeff != 0) {
        Node *nc = new Node;
        nc -> nxt = nullptr;
        pc -> nxt = nc;
        pc = nc;
        nc->order = na->order;
        nc->coeff = na->coeff + nb->coeff;
      }
      na = na->nxt;
      nb = nb->nxt;
    } else if (na->order > nb->order) {
        if (na->coeff != 0) {
          Node *nc = new Node;
          nc -> nxt = nullptr;
          pc -> nxt = nc;
          pc = nc;
          nc->order = na->order;
          nc->coeff = na->coeff;
        }
        na = na->nxt;
    } else {
        if (nb->coeff != 0) {
          Node *nc = new Node;
          nc -> nxt = nullptr;
          pc -> nxt = nc;
          pc = nc;
          nc->order = nb->order;
          nc->coeff = nb->coeff;
        }
        nb = nb->nxt;
    }
  }

  while (na) {
    if (na->coeff != 0) {
      Node *nc = new Node;
      nc -> nxt = nullptr;
      pc -> nxt = nc;
      pc = nc;
      nc->order = na->order;
      nc->coeff = na->coeff;
    }
    na = na->nxt;
  }

  while (nb) {
    if (nb ->coeff != 0) {
      Node *nc = new Node;
      nc -> nxt = nullptr;
      pc -> nxt = nc;
      pc = nc;
      nc->order = nb->order;
      nc->coeff = nb->coeff;
    }
    nb = nb->nxt;
  }

  if (c->nxt == nullptr) {
    return c;
  } else {
    Node *res = c->nxt;
    delete c;
    return res;
  }
}

int main()
{
  Node *a = nullptr, *pa = nullptr, *b = nullptr, *pb = nullptr;
  int coef, orde;
  cin >> coef >> orde;
  while (orde >= 0) {
    Node* na = new Node;
    na->order = orde;
    na->coeff = coef;
    na->nxt = nullptr;
    if (pa) pa->nxt = na;
    pa = na;
    if (a == nullptr) a = pa;
    cin >> coef >> orde;
  }
  cin >> coef >> orde;
  while (orde >= 0) {
    Node* nb = new Node;
    nb->order = orde;
    nb->coeff = coef;
    nb->nxt = nullptr;
    if (pb)  pb->nxt = nb;
    pb = nb;
    if (b == nullptr) b = pb;
    cin >> coef >> orde;
  }
  
  Node* c = add_poly(a, b);
  
  while (c) {
    cout << c->coeff << ' '<< c->order << endl;
    c = c->nxt;
  }

  return 0;
}