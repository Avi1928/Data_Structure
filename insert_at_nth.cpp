#include<iostream.h>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
struct node
{
    int data;
    node*next;
};
node *head;
void count();
int c;
void count()
{
    node*ptr=head;
     c=0;
    while (ptr!=NULL)
    {
        ptr=ptr->next;
        c++;
    }
    cout<<c;
}
void insert_nth(int x,int y)
{
    int d,p,i=0;
    d=x,p=y;
    if (p>c+1)
    {
        cout<<"you enter invalid postion,please enter appropiate position.\n";
        return ;
    }
    // if list is empty.
    node*temp=new node();
    temp->data=d;
    //temp->next=NULL;
    if(p==1)
    {
        temp->next=head; 
        head=temp;
        return;
    }
    // for other cases.
    node*temp1=head;
    for ( i = 0; i <p-2; i++)   
    {
        temp1=temp1->next;
    }
    temp->next=temp1->next;
    temp1->next=temp;
}
void print()
{
    node*ptr=head;
    cout<<"Your list is:-";
    while (ptr!=NULL)
    {
        printf("%d ",ptr->data);
        ptr=ptr->next;
    }
}
int main()
{
    char ch;
    int d,p;
    head=NULL;
    again:
    printf("\n");
    cout<<"Enter the data and position where you want to insert :-  ";
    scanf("%d,%d",&d,&p);
    insert_nth(d,p);
    print();
    cout<<"\nTotal no. of element in linked list :- ";
    count()  ;
    printf("\nIf you want to another value press Y for Yes & N for NO \n");
    cin>>ch;
    if (ch=='y'||ch=='Y')
        {
            goto again;
        }
    /*
    insert_nth(3,1);
    insert_nth(6,2);
    insert_nth(6,3);
    insert_nth(5,4);  
    print();
    cout<<"\nTotal no. of element in linked list :- ";
    count()  ;
    */
}