#include<stdio.h>
#include<stdlib.h>
#define MAXSIZE 10

int stack[MAXSIZE];
int top=-1;

int isempty()
{
    if(top==-1)
        return 1;
    else
        return -1;
}
void push(int x)
{

    if(top==MAXSIZE-1)
    {
        printf("\nStack overflow\n");
        return;
    }
    top++;
    stack[top]=x;
}

void pop()
{
    if(isempty()==1)
    {
        printf("\nStack is empty!\n");
        return;
    }
    top--;
}

void topp()
{
    if(isempty()==1)
    {
        printf("\nStack is empty!\n");
        return;
    }
    printf("Top : %d",stack[top]);
}

void printStack()
{
    int i;
    if(isempty()==1)
    {
        printf("\nStack is empty!\n");
        return;
    }
    printf("\nStack is :\n");
    for(i=0;i<=top;i++)
        printf("%d\t",stack[i]);
}

int main()
{
    int ch,x;
    do{
    printf("\n1.PUSH\n2.POP\n3.TOP\n4.ISEMPTY\n5.Print Stack\n6.EXIT\n");
    printf("\nEnter your choice : ");
    scanf("%d",&ch);

    switch(ch)
    {
    case 1:

            printf("\nEnter the element that you want to push : ");
            scanf("%d",&x);
            push(x);
            break;
    case 2:
            pop();
            break;
    case 3:
            topp();
            break;
    case 4:
            if(isempty())
                printf("Stack is empty!");
            else
                printf("Stack is not empty!");
            break;
    case 5:
            printStack();
            break;

    case 6:
            exit(0);
            break;
    default:
            printf("\nInvalid input\n");

    }
    }while(ch!=6);
    return 0;
}
