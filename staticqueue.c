#include<stdio.h>
#include<stdlib.h>
#define MAXSIZE 10
int A[MAXSIZE];
int front=-1,rear=-1;

int isEmpty()
{
   if((front==-1 && rear==-1))
    {
        return 1;
    }
    else
        return 0;
}
void EnQueue(int x)
{
    if(isEmpty()==1)
    {
        front++;
        rear++;
    }
    else
    {
        rear++;
    }
    A[rear]=x;
}

void DeQueue()
{
    if( isEmpty()==1 || front>rear)
    {
        printf("\nQUEUE IS EMPTY!\n");
    }

    else
    {
        front++;
    }
}

void frontt()
{
    if(isEmpty()==1 || front>rear)
    {
        printf("\nQUEUE IS EMPTY!\n");
    }
    else
    {
        printf("\nFRONT : %d\n",A[front]);
    }
}

int main()
{
    int ch,x;

    do{

    printf("1.EnQueue\n2.DeQueue\n3.Front\n4.Exit");
    printf("\nEnter your choice : ");
    scanf("%d",&ch);

    switch(ch)
    {
    case 1:
                printf("\nEnter the element: ");
                scanf(" %d",&x);
                EnQueue(x);
                break;

    case 2:
                DeQueue();
                break;

    case 3:
                frontt();
                break;

    case 4:
                exit(0);

    default:
                printf("\nInvalid input! Try again :(\n");
    }
    }while(ch!=4);
}
