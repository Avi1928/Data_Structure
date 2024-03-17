#include <iostream.h>
#include<stdlib.h>
#include<stdio.h>
using namespace std;
int isempty();
struct node
{
    int data;
    node*next;
};
struct node*top;
void push(int x)
{
    node*temp=new node();
    temp->data=x;
    temp->next=top;
    top=temp;
}
int pop()
{
    if(isempty())
    {
        cout<<"Stack underflow.";
        exit(1);
    }
    struct node*temp =top;
    int value=temp->data;
    top=top->next;
    free(temp);
    return value;
}
int isempty()
{
    if(top==NULL)
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
    struct node*temp=top;
    if (isempty())
    {
        cout<<"Stack uderflow.";
        exit(1);
    }
    while(temp!=NULL)
    {
        cout<<temp->data;
        temp=temp->next;
    }
    cout<<"\n";
}
int main()
{
    top=NULL;
    while(1)
    {
        int data,choice;
        printf("\n");
        cout<<"1. Add new element in stack.\n";
        cout<<"2. Delete a element from stack.\n";
        cout<<"3. Print first element of stack.\n";
        cout<<"4. Print all element of stack.\n";
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
                 push(data);
                 break;
            case 2:
                 printf("\n");
                 data=pop();
                 cout<<"Deleted data is:- "<<data<<endl;
                 break;
            case 3:
                 printf("\n");
                 cout<<"First element is:- "<<top->data;
                 break;
            case 4:
                 printf("\n");
                 cout<<"Your stack is:- \n";
                 print();
                 break;
            case 5:
                 exit(1);
            default:
                 cout<<"Wrong choice.";
        } 
    }
}
