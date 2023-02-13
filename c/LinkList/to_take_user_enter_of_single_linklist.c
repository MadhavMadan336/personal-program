#include<stdio.h>
#include<stdlib.h>
typedef struct Node{
    int data;
    struct Node *next;
}node;
void main()
{
    node *head,*p;
    int n,i;
    printf("enter the value of n:::");
    scanf("%d",&n);
    head=(node*)malloc(sizeof(node));
    printf("enter the value of head::");
    scanf("%d",& head->data);
    head->next=NULL;
    p=head;
    for(i=1;i<n;i++)
    {
        p->next=(node*)malloc(sizeof(node));
        p=p->next;
        printf("enter the value of link list::::");
        scanf("%d",&p->data);
        p->next=NULL;
    }
    p=head;
    while(p!=NULL)
    {
        printf("%d ",p->data);
        p=p->next;
    }   
}
