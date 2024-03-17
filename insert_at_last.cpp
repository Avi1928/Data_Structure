//linked list :- insertion at last of list.

#include<iostream.h>
#include<stdio.h>
using namespace std;
struct node
{
    int data;
    node *next;
};
struct node*head;
void insert_at_last(int x)
{
    node* temp=new node();
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
void print()
{
    struct node*ptr = head;
    cout<<"Your list is :- ";
    while (ptr!=NULL)
    {
        printf("%d ",ptr->data);
        ptr=ptr->next;
    }
}
int main()
{
    system("cls");
    int i,n,x;
    head=NULL;
    cout<<"How many times you enter no :- ";
    cin>>n;
    for ( i = 1; i <=n; i++)            
    {
        printf("\nEnter the %d number :- ",i);
        cin>>x;
        insert_at_last(x);
        print();
    }
    return 0;
   /* head=NULL;
    insert(3);
    insert(5);
    insert(7);
    print();*/
}