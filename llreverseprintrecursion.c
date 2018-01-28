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
void print(NODE* p)
{
        if(p==NULL)
            return;
                                            //forward print
        print(p->next);
        printf("%d\t",p->data);             //reverse
}


int main()
{
    insert(1);
    insert(2);
    insert(3);
    insert(7);
    print(head);
    return 0;
}
