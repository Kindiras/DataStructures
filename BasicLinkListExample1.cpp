#include <iostream>

using namespace std;

//define struct which has one int and point to connect to the next node.
struct Node
{
  int data;
  Node *next;
};

int main()
{
  int x;
//make empty list of node.
Node *List = NULL;
while(cin>>x && x>0)
{
Node *ptr = new Node;
ptr->data = x;
ptr->next = List;
List = ptr;
}
cout<<List->data<<endl;
cout<<List->next->data<<endl;
cout<<List->next->next->data<<endl;
return 0;
}
