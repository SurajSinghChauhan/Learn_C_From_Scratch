#include <stdio.h>
#include<malloc.h>
 
struct node
{
    int data;
    struct node *next;
};
int count = 0;
typedef struct node NODE;int x;
NODE *front=NULL,*temp=NULL,*element=NULL,*rear=NULL;

void enq()  
{     
    element=(NODE*)malloc(sizeof(NODE));  
    if(element == NULL)  
    {  
        printf("\nOVERFLOW\n");  
        return;  
    }  
    else  
    {   
		printf("\n\tEnter Data:");
		scanf("%d",&element->data); 
        if(front == NULL)  
        {  
            front = element;  
            rear = element;   
            front -> next = NULL;  
            rear -> next = NULL;  
        }  
        else   
        {  
            rear->next = element;  
            rear = element;  
            rear->next = NULL;  
        }  
    }  
}
void deq()  
{  
    if(front == NULL)  
    {  
        printf("\nUNDERFLOW\n");  
        return;  
    }  
    else   
    {  
    	printf("Element deleted is : %d\n",front->data);
        temp = front;  
        front = front -> next;  
        free(temp);  
    }  
}
void display()  
{  
  
    temp = front;      
    if(front == NULL)  
    {  
        printf("Empty queue\n");  
    }  
    else  
    {   printf("\nprinting values .....\n");  
        while(temp!= NULL)   
        {  
            printf("%d ",temp->data);  
            temp=temp->next; 
        }
		printf("\n");  
    }  
} 
void peek()
{
    if(front == NULL)  
    {  
        printf("Empty queue\n");  
    } 
	else{
		printf("Element is : %d\n",front->data);
	} 
}
int queuesize(){
    if(front == NULL)  
    {  
        printf("Empty queue\n");  
    }
    else{
    	temp=front;
        while(temp!= NULL)   
        {  
            count++;  
            temp=temp->next; 
        }
        printf("Size is: %d\n",count);
	}
}

int main()
{
    int no, ch, e;
 	printf("\n\t\tWRITE YOURSELF INSERT FRONT AND DELETE REAR\n");
    printf("\n 1 - Enque");
    printf("\n 2 - Deque");
    printf("\n 3 - Front element");
    printf("\n 4 - Exit");
    printf("\n 5 - Display");
    printf("\n 6- Queue size");

    while (1)
    {
        printf("\n Enter choice : ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            enqfrntAQ();
            break;
        case 2:
            deq();
            break;
        case 3:
            peek();
            break;
        case 4:
            exit(1);
            break;
        case 5:
            display();
            break;
        case 6:
            queuesize();
            break;
        default:
            printf("Wrong choice, Please enter correct choice  ");
            break;
        }
    }
}
