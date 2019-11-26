#include <stdio.h>
#include<stdlib.h>
typedef struct node
{
    int data;
    struct node *next;
}NODE;
typedef struct node* NODEPTR;
NODEPTR start,newnode,tptr,shadow;
void display_list()
{
    for(tptr=start;tptr;tptr=tptr->next)
    printf(" %d",tptr->data);
}

void insert_node(int num)
{
    newnode=(NODEPTR)malloc(sizeof(NODE));
    newnode->data=num;
    newnode->next=NULL;
    for(tptr=start ; tptr && tptr->data<newnode->data;shadow=tptr,tptr=tptr->next);
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
int main()
{
    int arr[]={90,100,20,40,60,80,70,50,10,30};
    int noe,index;
    noe=sizeof(arr)/sizeof(int);
    for(index=0;index<noe;index++)
    insert_node(arr[index]);
    display_list();
}
