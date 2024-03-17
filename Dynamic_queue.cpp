#include<iostream.h>
#include<stdlib.h>
#include<stdio.h>
using namespace std;
struct node
{
    int data;
    node*next;
};
struct node *front=NULL,*rear=NULL;
int isempty();
void enqueue(int n)
{
    struct node* temp= new node();
    temp->data=n;
    temp->next=NULL;
    if (front==NULL)
    {
        front=rear=temp;
    }
    else
    {
        rear->next=temp;
        rear=temp;
    }
}
int dequeue()
{
    struct node*temp;
    int value;
    if (isempty())
    {
        cout<<"Queue underflow.";
        exit(1);
    }
    temp=front;
    value=temp->data;
    front=front->next;
    free(temp);
    return value;
}
int isempty()
{
    if(front==NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void print()
{
    struct node *temp =front;
    if (isempty())
    {
        cout<<"stack underflow.";
        exit(1);
    }
    cout<<"Queue is:- \n";
    while (temp!=NULL)
    {
        cout<<temp->data;
        temp=temp->next;
    }
    printf("\n");
}
int main()
{
     while(1)
    {
        int data,choice;
        printf("\n");
        cout<<"1. Add new element in Queue.\n";
        cout<<"2. Delete a element from Queue.\n";
        cout<<"3. Print first element in Queue.\n";
        cout<<"4. Print all element in Queue.\n";
        cout<<"5. Quit.\n";
        printf("\n");
        cout<<"Enter your choice :-";
        cin>>choice;
        switch (choice)
        {
            case 1:
                 printf("\n");
                 cout<<"Enter the new element you want to add :- "; 
                 cin>>data;
                 enqueue(data);
                 cout<<"Added successfully";
                 break;
            case 2:
                 printf("\n");
                 data=dequeue();
                 cout<<"Deleted data is:- "<<data<<endl;
                 break;
            case 3:
                 printf("\n");
                 cout<<"First element is:- "<<front->data;
                 break;
            case 4:
                 printf("\n");
                 print();
                 break;
            case 5:
                 exit(1);
            default:
                 cout<<"Wrong choice.";
        } 
    }  
}
