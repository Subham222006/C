#include<stdio.h>
#include<stdlib.h>
struct node
{
   int data;
   struct node *left;
   struct node *right;
};

int main()
{
    struct node *p,*start=NULL,*temp,*new;
<<<<<<<< HEAD:insert_at_1st_position_in_double_linked_list.c
    int c;
========
    int c,pos;
>>>>>>>> 26aa283 (DSA):insert_at_any_position_in_double_linked_list.c
    printf("How many numbers you want to enter : ");
    scanf("%d",&c);
    
    
    for(int i=0;i<c;i++)
    {
    p=(struct node*)malloc(sizeof(struct node));
    printf("Enter the data : ");
    scanf("%d", &p->data);
    p->left=NULL;
    p->right=NULL;
    if(start==NULL)
    {
        start=p;
    }
    else
    {
        temp->right=p;
        p->left=temp;
    }
    temp=p;
    }
    printf("\nDoubly Linked List (Forward): ");
    temp=start;
    while(temp!=NULL)
    {
        printf("%d ", temp->data);
        temp=temp->right;
    }
    printf("\nDoubly Linked List (Backward): ");
    temp=start;
    while(temp->right!=NULL)
    {
        temp=temp->right;
    }
    while(temp!=NULL)
    {
        printf("%d ", temp->data);
        temp=temp->left;
    }
    p=(struct node*)malloc(sizeof(struct node));
<<<<<<<< HEAD:insert_at_1st_position_in_double_linked_list.c
    printf("Enter the number which you want to incert at 1st position : ");
    scanf("%d",&p->data);
    p->left=NULL;
    p->right=start;
    start->left=p;
    start=p;
   printf("\nAfter insert at 1st position the Doubly Linked List is(Forward): ");
========
    printf("\nEnter the position where you want to insert a data : ");
    scanf("%d",&pos);
    printf("\nEnter the data which you want to insert at %d position : ",pos);
    scanf("%d",&p->data);
    if(pos==1)
    {
        p->left=NULL;
        p->right=start;
        start->left=p;
        start=p;
    }
    else
    {   
        temp=start;
        for(int i=1;i<pos-1;i++)
        {
            temp=temp->right;
        }
        p->right=temp->right;
        temp->right=p;
        p->left=temp;
       
    }
    
   printf("\nDoubly Linked List (Forward): ");
>>>>>>>> 26aa283 (DSA):insert_at_any_position_in_double_linked_list.c
    temp=start;
    while(temp!=NULL)
    {
        printf("%d ", temp->data);
        temp=temp->right;
    }
<<<<<<<< HEAD:insert_at_1st_position_in_double_linked_list.c
    printf("\nAfter insert at 1st position the Doubly Linked List is(Backward): ");
    temp=start;
    while(temp->right!=NULL)
    {
        temp=temp->right;
    }
    while(temp!=NULL)
    {
        printf("%d ", temp->data);
        temp=temp->left;
    }
}
========
    printf("\nDoubly Linked List (Backward): ");
temp = start;
struct node *prev = NULL;
while(temp != NULL)
{
    temp->left = prev;  
    prev = temp;
    temp = temp->right;
}
printf("\nDoubly Linked List (Backward): ");
while(prev != NULL)
{
    printf("%d ", prev->data);
    prev = prev->left;
}

}
>>>>>>>> 26aa283 (DSA):insert_at_any_position_in_double_linked_list.c
