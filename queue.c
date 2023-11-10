#include<stdio.h>
#include<stdlib.h>
int queue[20],n,i,ch,x;
int front=-1,rear=-1;
void insert();
void delete();
void show();
int main()
{
 printf("Enter the size of the queue:");
 scanf("%d",&n);
 while(ch!=4)
 {
  printf("\n Queue  Operations");
  printf("\n1.Insert \n2.Delete  \n3.Show \n4.Exit");
  printf("\nEnter the choice:");
  scanf("%d",&ch);
  switch(ch)
  {
   case 1:
     insert();
     break;
   case 2:
     delete();
     break;
   case 3:
     show();
     break;
   case 4:
     exit(0);
     break;
   default:
     printf("Invalid Choice!!");
  }
 }
return 0;
}
void insert()
{
 if(rear==(n-1))
  {
   printf("\nOverflow");
  }
  else
  {
   printf("\nEnter the value:");
   scanf("%d",&x);
    if(front==-1 && rear==-1)
    {
     front=0;
     rear=0;
    }
    else
    {
     rear=rear+1;
    }
    queue[rear]=x;
    printf("\n Element inserted");
  }
 }
void delete()
 {
  if(front==-1||front>rear)
  {
   printf("\nUnderflow");
  }
  else
  {
   x=queue[front];
  }
  if(front==rear)
  {
   front=rear-1;
  }
  else
  {
   front=front+1;
  }
  printf("element deleted");
 }

void show()
 {
  if(rear==-1)
  {
   printf("empty queue");
  }
  else
  {
   for (i=front;i<=rear;i++)
   {
    printf("%d \t",queue[i]);
   }
  } 
 }

