#include <iostream>

using namespace std;

struct Node
{
  int data;
  Node* left;
  Node* right;
};

int main()
{
  int root = 20;
  int x;
  Node *List = NULL; //make a list of node.
  while(cin>>x && x>0)
  {
    Node *temp = new Node;
    if(List==NULL)
    {temp->data = root;
    List = temp;}
    else
       {
         temp->data = x;
         if(x>root)
          {
          temp->right = List;
          List = temp;}
          else
            {
              temp->left = List;
             List = temp;
            }
          }
}
cout<<"Print"<<endl;
cout<<"Right "<<endl;;
while(List!=NULL)
{
  cout<<List->data<<endl;
    List=List->right;
}
cout<<"Lelft"<<endl;
while(List!=NULL)
{
  cout<<List->data<<endl;
    List=List->left;
}

return 0;
}
