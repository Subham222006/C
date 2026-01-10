#include<stdio.h>
#include<stdlib.h>
#define Max 10
int que[Max],j,r=0,f=0;
void insert(){
    int n;
    if(r<Max){
    printf("Enter a number to insert in the queue: \n");
    scanf("%d",&n);
    que[r]=n;
    r++;
    printf("Sucessfully inserted in the Queue.\n");
    }
    else{
        printf("OVERFLOW.\n");
    }
}
void delet(){
    if(r==0){
        printf("UNDERFLOW.\n");
    }
    else{
        printf("Sucessfully delete %d from the Queue.\n",que[f]);
        f++;
    }
}
void display(){
    if(f==r){
        printf("Queue is empty");
    }
    else{
    printf("Queue elements are : ");
    for(j=f;j<r;j++){
        printf("%d ",que[j]);
    }
    printf("\n");
    }
}
int main(){
    int ch;
    while(1){
    printf("Press 1. To Insert in Queue\nPress 2. To Delete from Queue\nPress 3. Display Queue\n"
           "Press 4. For Exit\n");
    printf("Enter your choice: ");
    scanf("%d",&ch);
    switch(ch){
        case 1:
            insert();
            break;
        case 2:
            delet();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
        default:
            printf("Invalid Choice\n");   
            break;
    }
	}
}