#include<iostream.h>
#include<stdio.h>
using namespace std;

    #define size 5
    int stack_arr[size];
    int top= -1;
    int isfull();
    int isempty();
//Function for inserting data in stack.
    void push(int data)
    {
        if(isfull())
        {
            cout<<"Stack Overflow.";
            exit(1);
        }
        top=top+1;
        stack_arr[top]=data;
    }
//Function for deleting data from stack.
    int pop()
    {
        if(isempty())
        {
          printf("Stack underflow");
          exit(1);
        }
        int value=stack_arr[top];
        top=top-1;
        return value;
    }
//Function for printing stack.
    void print()
    {
        for(int i=top;i>=0;i--)
        {
            printf("%d",stack_arr[i]);
            printf("\n");
        }
    }
//Function for checking stack is full or not.
    int isfull()
    {
        if(top==size-1)
        return 1;
        else
        return 0;
    }
//Function for checking stack is empty or not.
    int isempty()
    {
        if (top==-1)
                return 1;
        else
                return 0;
    }
int main()
{
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
                 cout<<"First element is:- "<<stack_arr[top];
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