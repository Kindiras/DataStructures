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
  //Lets' creat three nodes
  Node *First = new Node();
  Node *Second = new Node();
  Node *Third = new Node();
//put int in each node as
First->data = 90;
//pointer to the second Node;
First->next = Second;
Second->data = 89;
Second->next = Third;
Third->data = 95;
Third->next=NULL;
cout<<First->data<<"\n" <<Second->data<<"\n"<<Third->data<<endl;
return 0;
}
