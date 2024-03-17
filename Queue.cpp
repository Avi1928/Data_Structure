#include<iostream.h>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
    #define size 5
    int front= -1,rear= -1,queue_arr[size],isfull(),isempty();
    void enqueue(int data)
    {
        if(isfull())
        {
            cout<<"Queue overflow.";
            exit(1);
        }
        if(front==-1)
        {
            front=0;
        }
        else
        {
            rear++;
            queue_arr[rear]=data;
        }
        
    }
    int dequeue()
    {
        if(isempty())
        {
            cout<<"Queue underflow.";
            exit(1);
        }
        int value=queue_arr[front];
        front++;
        return value;
    }
     int isfull()
    {
        if(rear==size-1)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    int isempty()
    {
        if(front==-1||front==rear+1)
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
        if(isempty())
        {
            cout<<"Queue underflow.";
            exit(1);
        }
        for (int i = front; i <= rear; i++)
        {
            printf("%d",queue_arr[i]);
            printf("\n");
        }
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
                 break;
            case 2:
                 printf("\n");
                 data=dequeue();
                 cout<<"Deleted data is:- "<<data<<endl;
                 break;
            case 3:
                 printf("\n");
                 cout<<"First element is:- "<<queue_arr[front];
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