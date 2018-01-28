
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
void reverse(NODE* p)
{
        if(p->next==NULL)
        {
            head=p;
            return;
        }

        reverse(p->next);
        NODE* q=p->next;
        q->next=p;
        p->next=NULL;
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
int main()
{
    insert(1);
    insert(2);
    insert(3);
    insert(7);
    print();
    reverse(head);
    print();
    return 0;
}
