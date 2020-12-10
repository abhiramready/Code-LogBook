#include<stdio.h>
typedef struct node
{
    int data;
    struct node *next;
}NODE;
typedef struct node* NODEPTR;
NODEPTR start, newnode, tptr, shadow;
void display_list()
{
    for(tptr=start;tptr;tptr=tptr->next)
        printf("%d ",tptr->data);
}
void insert_node(int num)
{
    newnode=(NODEPTR)malloc(sizeof(NODE));
    newnode->data=num;
    newnode->next=NULL;
    for(tptr=start;tptr&&tptr->data
    <newnode->data;shadow=tptr,
    tptr=tptr->next);
    if(tptr==start)
    {
        newnode->next=start;
        start=newnode;
    }
    else
    {
        newnode->next=shadow->next;
        shadow->next=newnode;
    }
}
void display_list_bwd(NODEPTR ptr)
{
    if(ptr==NULL)
        return;
    else
    {
        display_list_bwd(ptr->next);
        printf("%d ",ptr->data);
    }
}
int find_mid()
{
    NODEPTR slow, fast;
    for(slow=start, fast=start;fast&&
    fast->next;slow=slow->next,
    fast=fast->next->next);
    if(slow)
        return slow->data;
    return -1;
}
void reverse_list()
{
    NODEPTR now, before, after;
    before=NULL;
    now=start;
    after=NULL;
    while(now)
    {
        after=now->next;
        now->next=before;
        before=now;
        now=after;
    }
    start=before;
}
int main()
{
    int arr[]={90,100,20,40,60,80,70,50,10,30};
    int noe, index;
    noe=sizeof(arr)/sizeof(int);
    for(index=0;index<noe;index++)
        insert_node(arr[index]);
    display_list();
    reverse_list();
    printf("\n");
    display_list();
}
