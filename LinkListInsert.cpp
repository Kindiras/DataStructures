#include <iostream>

using namespace std;

struct Node{
  int data;
  Node* next;
};

void addNode(int x, Node* &L);
void printNode(Node *L);
void insertNode(int y, Node * &L);

int main()
{
  int x;
  Node *List = NULL;
  cout<<"please enter the intergers for the loop and negative numbers for the termination"<<endl;
  while(cin >> x && x > 0)
    {
    insertNode(x, List);
    }
    printNode(List);
    return 0;
}

void addNode(int x, Node* &L)
{
  Node *temp = new Node;
  temp->data = x;
  temp->next = L;
  L = temp;
}

void printNode(Node *L)
{
  while(L!=NULL)
  {
    cout<<L->data<<" ";
    L = L->next;
  }
}

void insertNode(int x, Node * &L)
{
  if(L!=NULL && L->data < x)
     insertNode(x,L->next);
  else
      addNode(x,L);

}
