#include<iostream.h>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
struct node
{
    int data;
    node*next;
};
node*head;
void insert(int x)
{
    node*temp=new node();
    temp->data=x;
    if (head==NULL)
    {
        head=temp;
    }
    else
    {
        node*ptr=head;
        while (ptr->next!=NULL)
        {
            ptr=ptr->next;
        }
        ptr->next=temp;
    }
}
void deletes(int pos)
{
    struct node *temp1=head;
    int i;
    for ( i = 0; i < pos-2; i++)
    {
        temp1=temp1->next;  //reach to n-1 node.
    }
    struct node*temp2=temp1->next; //reach to nth node.
    temp1->next = temp2->next; //link n-1 node to n+1 node.
    free(temp2);
}
void print()
{
    struct node*ptr = head;
    //cout<<endl;
    //cout<<"Your list before  :- ";
    while (ptr!=NULL)
    {
        printf("%d ",ptr->data);
        ptr=ptr->next;
    }
}
int main()
{
    head=NULL;
    insert(2);
    insert(3);
    insert(6);
    insert(8);
    cout<<"Before deletion the list is :-";
    print();
    cout<<endl;
    deletes(2);
    cout<<"After deletion the list is :-";
    print();
}

