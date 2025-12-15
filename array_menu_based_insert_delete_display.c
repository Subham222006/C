#include <stdio.h>
#include <stdlib.h>
int i,a,arr[10],b,pos,c,flag=0,pos1,count,num;
void array() 
{
    for(i=0;i<num;i++) 
	{
        printf("%d ",arr[i]);
    }
}
void case1() 
{
    for (i = num; i > 0; i--) 
	{
        arr[i] = arr[i - 1];
    }
    num++;
    if(num<=10) 
	{
        printf("Enter the number you want to store at the first position : ");
        scanf("%d",&a);
        arr[0]=a;
        flag=0;
        count=1;
        printf("Incerting in the 1st position is successfully completed.\n");
    }
    else 
	{
        printf("The array is full of elements there is no place to incert a number.\n");
    }
}
void case2() 
{
    if(num<10) 
	{
        printf("Enter the number you want to store at the last position : ");
        scanf("%d",&b);
        arr[num]=b;
        num++;
        flag=0;
        count=1;
        printf("Incerting in the last position is successfully completed.\n");
    }
    else 
	{
        printf("The array is full of elements there is no place to incert a number.\n");
    }
}
void case3() 
{
    if(num<10) 
	{
        printf("Enter the position you want to incert a number : ");
        scanf("%d",&pos);
        if(pos<=num) 
		{
            printf("Enter the number you want to store at %d no. position : ",pos);
            scanf("%d",&c);
            for (i = num; i >= pos; i--) 
			{
                arr[i] = arr[i - 1];
            }
            arr[pos-1]=c;
            num++;
            flag=0;
            count=1;
            printf("Incerting in %d no. position is successfully completed.\n",pos);
        }
        else 
		{
            printf("Now in the array total elements are %d. So the position is invalid...Please enter the position among the position those elements.\n",num);
        }
    }
    else 
	{
        printf("The array is full of elements there is no place to incert a number.\n");
    }
}
void case4() 
{
    for(i=0;i<num-1;i++) 
	{
        arr[i]=arr[i+1];
    }
    flag=0;
    num--;
    if(num<0) 
	{
        printf("There is no element in the array to delete.\n");
    }
    else 
	{
        printf("Deleting from the 1st position is successfully completed.\n");
    }
}
void case5() 
{
    if(num>0) 
	{
        for(i=0;i<num-1;i++) 
		{
            flag=0; 	
        }
        num--;
        printf("Deleting from the last position is successfully completed.\n");
    }
    else 
	{
        printf("There is no element in the array to delete.\n");
    }
}
void case6() 
{
    if(num>0) 
	{
        printf("Enter the position you want to delete the number : ");
        scanf("%d",&pos1);
        if(pos1<=num) 
		{
            for(i=pos1-1;i<num;i++) 
			{
                arr[i]=arr[i+1];
            }
            num--;
            flag=0;
            printf("Deleting from %d no. position is successfully completed.\n",pos1);
        }
        else 
		{
            printf("Now in the array total elements are %d. So the position is invalid...Please enter the position among the position those elements.\n",num);
        }
    }
    else 
	{
        printf("There is no element in the array to delete.\n");
    }
}
void case7() 
{
    if(flag==0 && num<=0) 
	{
        printf("There is no element to show.\n");
        return;
    }
    if(flag==0 && num>0) 
	{
        printf("The certain list is : ");
        array();
        printf("\n");
    }
}


int main() 
{
	do
	{
        int ch;
        printf("How many numbers you want to store in the array (upto 10 as the array size is 10) :");
        scanf("%d",&num);
        if(num>10)
		{
            printf("Enter the total numbers you want to store under 10 or 10 as the array size is 10.....Please enter the total numbers you want to store under 10 or 10\n");
        }
        if(num==0)
		{
            printf("You entered 0 elements you want to store it means you don't want to store any numbers.....Please enter the total numbers you want to store under 10 or 10\n");
        }
        if(num<0)
		{
            printf("You entered a negative number, it has no meaning.....Please enter the total numbers you want to store under 10 or 10\n");
        }

        if(num>0 && num<11)
		{
            printf("Enter the array elements : \n\n");
            for(i=0;i<num;i++) 
			{
                printf("Enter no.%d element : ",i+1);
                scanf("%d",&arr[i]);
            }
            printf("The array elements are : \n");
            array();
            printf("\n");
            do
			{
                printf("                           ~* MENU *~        \n"
				"Press 1. To incert a number at the first position of the given list.\n"
                "Press 2. To incert a number at the at last position of the given list.\n"
                "Press 3. To incert a number at any position of the given list.\n"
              	"Press 4. To delete a number from the first position of the given list.\n"
       			"Press 5. To delete a number from the last position of the given list.\n"
      			"Press 6. To delete a number from any position of the given list.\n"
 				"Press 7. To display the certain list.\n"
     			"Press 8. To exit.\n"
        		"Enter your choice : ");
                scanf("%d",&ch);
				switch(ch) 
				{
            		case 1: 
						case1(); 
						break;
            		case 2: 
						case2(); 
						break;
            		case 3: 
						case3();
						break;
            		case 4: 
						case4(); 
						break;
            		case 5: 
						case5(); 
						break;
            		case 6: 
						case6(); 
						break;
            		case 7: 
						case7(); 
						break;
            		case 8: 
                		printf("This program is exited");
                		exit(0);
            		default:
                		printf("Invalid Choice!....Please Try Again\n");
        		}

    		} while(ch!=8);
        }
}while(1);
}