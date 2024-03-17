//linked list :- insertion at beginning of list.

#include<iostream.h>
#include<stdio.h>
using namespace std;
struct node
{
    int data;
    node *next;
};
struct node*head;
void insert(int x)
{
    node *temp=new node();
    temp->data=x;
    //if the list was not empty.
    if (head!=NULL)
    {                           // ( temp->next=head; We also use this-
        temp->next=head;        //  single line code at place of if condition.)
    }
    head=temp;
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
    //head=NULL;
    cout<<"How many times you enter no :- ";
    cin>>n;
    
    for ( i = 1; i <=n; i++)            
    {
        printf("\nEnter the %d number :- ",i);
        cin>>x;
        insert(x);
        print();
    }
    return 0;
}


