//linked list :- insertion at beginning of list.
#include<iostream>
#include<stdio.h>
using namespace std;
struct node
{
    int data;
    node *next;
};
struct node*head;
int d,p,c=0,i=0;
void count()
{
    node*ptr=head;
    while (ptr!=NULL)
    {
        ptr=ptr->next;
        c++;
    }
}
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
void insert_nth(int x,int y)
{
    if (p>c+1)
    {
        cout<<"\nYou enter invalid postion,please enter appropiate position.\n";
        return ;
    }
    d=x,p=y;
    // if list is empty.
    node*temp=new node();
    temp->data=d;
    temp->next=NULL;
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
void deletes(int n)
{
    struct node *temp1=head;
    for ( i = 0; i < n-2; i++)
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
    cout<<"Your list is :- ";
    while (ptr!=NULL)
    {
        printf("%d ",ptr->data);
        ptr=ptr->next;
    }
    cout<<"\n";
}
int main()
{
    system("cls");
    head=NULL;
    cout<<"            Note:- List is empty."<<endl;
    cout<<"           _______________________"<<endl;
    while(1)
    {
        int data,choice;
        cout<<"\n1. Add new element in linked list at beginning.\n";
        cout<<"2. Add new element in linked list at n_th position.\n";
        cout<<"3. Add new element in linked list at last position.\n";
        cout<<"4. Delete a element from n_th position.\n";
        cout<<"5. Print your linked list.\n";
        cout<<"6. Total no. of element in list.\n";
        cout<<"7. Quit.\n";
        cout<<"\nEnter your choice :-";
        cin>>choice;
        switch (choice)
        {
            case 1:
                 cout<<"\nEnter the new element you want to add at beginning :- "; 
                 cin>>data;
                 insert(data);
                 printf("Element added successfully.\n");
                 break;
            case 2:
                 count();
                 cout<<"\nEnter the data and position where you want two insert :-  ";
                 scanf("%d,%d",&d,&p);
                 insert_nth(d,p);
                 if (p>c+1)
                 {
                    printf("Element does not added.\n");
                 }
                 else
                 {
                    printf("Element added successfully.\n");
                 }
                 break;
            case 3:
                 cout<<"\nEnter the new element you want to add at last position. :- "; 
                 cin>>data;
                 insert_at_last(data);
                 printf("Element added successfully.\n");
                 break;
            case 4:
                 cout<<"\nEnter the position from where you want to delete element. :- "; 
                 cin>>data;
                 deletes(data);
                 printf("Element delete successfully.\n");
            case 5:
                 printf("\n");
                 print();
                 break;
            case 6:
                 cout<<"\nTotal no. of element in list is:- ";
                 count();
                 cout<<c<<endl;
                 break;
            case 7:
                 exit(1);
            default:
                 cout<<"\nWrong choice.";
        } 
    }  
}