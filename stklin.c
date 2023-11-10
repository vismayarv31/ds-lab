#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *top;

void push();
void pop();
void display();

int main()
{
    int ch;
    printf("\nSTACK OPERATIONS");

    while(ch!=4)
    {
        printf("\n1.Push \n2.Pop \n3.Display \n4.Exit");
        printf("\nEnter your choice : ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
                push();
                break;
            case 2:
                pop();
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

void push()
{
    struct node *ptr;
    int x;
    ptr = (struct node *)malloc(sizeof(struct node));
    if(ptr == NULL)
    {
        printf("Overflow");
    }
    else
    {
        printf("\nEnter value : ");
        scanf("%d",&x);
        ptr -> data = x;
        if(top == NULL)
        {
            ptr -> next = NULL;
            top = ptr;
            printf("\nNode inserted");
        }
        else
        {
            ptr -> next = top;
            top = ptr;
            printf("\nNode inserted");
        }
    }
}

void pop()
{
    struct node *ptr;
    int x;
    if(top == NULL)
    {
        printf("\nUnderflow");
    }
    else
    {
        ptr = top;
        top = ptr -> next;
        free(ptr);
        printf("%d \nNode deleted",ptr->data);
    }
}

void display()
{
    struct node *ptr;
    ptr = top;
    if(top == NULL)
    {
        printf("\nStack is empty");
    }
    else
    {
        while(ptr!=NULL)
        {
            printf(">>%d",ptr->data);
            ptr = ptr -> next;
        }
    }
}
