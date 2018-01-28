#include<stdio.h>
#include<stdlib.h>
#define MAXSIZE 3
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

int isFull()
{
    if((rear+1)%MAXSIZE==front)
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
        front=0;
        rear=0;
    }
    else if(isFull()==1)
    {
        printf("\nQUEUE IS FULL\n");
        return;
    }
    else
    {
        rear=(rear+1)%MAXSIZE;
    }
    A[rear]=x;
}

void DeQueue()
{
    if( isEmpty()==1)
    {
        printf("\nQUEUE IS EMPTY!\n");
    }
    else if(front==rear)
    {
        front=-1;
        rear=-1;
    }
    else
    {
        front=(front+1)%MAXSIZE;
    }
}

void frontt()
{
    if(front==-1)
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
    return 0;
}

