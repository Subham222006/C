#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};

int main()
{
    struct node *top = NULL, *p = NULL, *temp = NULL;
    int cap, ch, size = 0, value;

    printf("Enter the capacity of the stack : ");
    scanf(" %d", &cap);

    do
    {
        printf("\nPress 1. For PUSH\n"
               "Press 2. For POP\n"
               "Press 3. For PEEK\n"
               "Press 4. For Display\n"
               "Press 5. For Exit\n");
        printf("Enter your choice : ");
        scanf(" %d", &ch);   

        switch (ch)
        {
        case 1:
            if (size == cap)
            {
                printf("\nStack OverFlow(Reached Capacity %d)\n",cap);
            }
            else
            {
                printf("Enter value to PUSH : ");
                scanf(" %d", &value);
                p = (struct node *)malloc(sizeof(struct node));
                p->data = value;
                p->next = top;
                top=p;
                size++;
                printf("\n%d pushed into stack\n",value);
            }
            break;

        case 2:
	      	if(size==0)
	      	{
	      		printf("\nStack UnderFlow (Empty Stack)\n");	
			}
			else
			{
				temp=top;
				printf("\n%d popped from Stack\n",temp->data);
				top=top->next;
				size--;
			}
            break;
        
        case 3: 
        	if(size==0)
        	{
	      		printf("\nStack is empty\n");	
			}
			else
			{
        	temp=top;
        	printf("\nThe Peek element is : %d\n",temp->data);
        	}
        	break;
        
        case 4:
            if (size == 0)
            {
                printf("Stack is empty\n");
            }
            else
            {
                temp = top;
                printf("\nStack elements are : ");
                while (temp != NULL)
                {
                    printf("%d -> ", temp->data);
                    temp = temp->next;
                }
                printf("NULL\n");
                printf("Current Size : %d / %d\n", size, cap);
            }
            break;

        case 5:
            exit(0);

        default:
            printf("Invalid Choice! Please try again\n");
        }
    } while (ch != 5);

    return 0;
}
