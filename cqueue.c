#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *front,*rear;

void enqueue();
void dequeue();
void display();

int main()
{
    int ch;
    printf("\nCIRCULAR QUEUE OPERATIONS");
    
    while(ch != 4)
    {
        printf("\n1.Enqueue \n2.Dequeue \n3.Display \n4.Exit");
        printf("\nEnter your choice : ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
                enqueue();
                break;
            case 2:
                dequeue();
                break;
            case 3:
                display();
                break;
            case 4:
                exit(0);
                break;
            default:
                printf("\nEnter valid choice!!");
        }
    }
    return 0;
}

void enqueue()
{
    struct node *ptr;
    int x;
    ptr = (struct node *)malloc(sizeof(struct node));
    if(ptr == NULL)
    {
        printf("\nQueue is full");
    }
    else
    {
        printf("\nEnter value : ");
        scanf("%d",&x);
        ptr -> data = x;
        ptr -> next = NULL;
        if(front == NULL && rear == NULL)
        {
            front = rear = ptr;
            rear -> next = front;
            printf("\nNode inserted");
        }
        else
        {
            rear -> next = ptr;
            rear = ptr;
            rear -> next = front;
            printf("\nNode inserted");
        }
    }
}

void dequeue()
{
    struct node *ptr;
    if(front == NULL && rear == NULL)
    {
        printf("\nQueue is empty");
    }
    else if(front == rear)
    {
        ptr = front;
        front = rear = NULL;
        free(ptr);
        printf("\nNode deleted");
    }
    else
    {
        ptr = front;
        front = front -> next;
        rear -> next = front;
        
        free(ptr);
        printf("\nNode deleted");
    }
}

void display()
{
    struct node *ptr;
    ptr = front;
    if(front == NULL && rear == NULL)
    {
        printf("\nQueue is empty");
    }
    else
    {
        do
        {
            printf("%d ",ptr -> data);
            ptr = ptr -> next;
        }
        while(ptr!=front);
    }
}
