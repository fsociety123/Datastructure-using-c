#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int data;
    struct node* next;
}NODE;
NODE* head=NULL;
void insert(int x)
{
    NODE* temp=head;
    NODE* temp1=(NODE*)malloc(sizeof(NODE));
    temp1->data=x;
    temp1->next=NULL;
    if(head==NULL)
    {
        head=temp1;
        return;
    }
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=temp1;
}
void print()
{
    NODE* temp=head;
    printf("\nThe current state of LL is :\n");
    while(temp!=NULL)
    {
        printf("%d\t",temp->data);
        temp=temp->next;
    }
}

void reverse()
{
    NODE* temp=head;
    NODE* temp1=NULL;
    NODE* temp2;

    while(temp!=NULL)
    {

        temp2=temp->next;
        temp->next=temp1;
        temp1=temp;
        temp=temp2;
    }
    head=temp1;

    free(temp2);
    free(temp);
}
int main()
{
    insert(1);
    insert(2);
    insert(3);
    insert(7);
    print();
    reverse();
    print();
    return 0;
}
