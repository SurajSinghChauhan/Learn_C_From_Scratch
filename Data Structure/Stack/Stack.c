#include <stdio.h>  
#include <stdlib.h>

struct Stack   
{  
int data; 

struct node *next;  
}; 
typedef struct Stack NODE; 
NODE *top=NULL,*temp,*element;


void push(){
	element=(NODE*)malloc(sizeof(NODE));
	//check if heap is full
	if(!element){
		printf("STACK OVERFLOW\n");
		exit(1);
	}
	printf("Enter Data : ");
	scanf("%d",&element->data);
	element->next=top;
	top=element;
}

void pop(){
	if(top==NULL){
		printf("UNDERFLOW\n");
	}
		else  if(top->next==NULL){
			printf("ONLY ONE DATA WAS AVAILABLE\n");
			free(top);
			top=NULL;
			}
			else{ 
				int a=top->data;
				top=top->next;
				free(temp);
				printf("%d popped out\n",a);
			}
}

void display(){
	temp=top;
	if(top==NULL){
	printf("No Data Available :\n");
	}
	else{
		while(temp!=NULL){
			printf("%d ",temp->data);
			temp=temp->next;
		}
						
	}
}
void peek(){
	printf("TOP MOST ELEMENT IS : %d",top->data);
}

int main ()  
{  
    int choice=0;     
    printf("\n*********Stack operations using linked list*********\n");  
    printf("\n----------------------------------------------\n"); 
    while(choice != 5)  
    {  
        printf("\n\nChose one from the below options...\n");  
        printf("\n1.Push\n2.Pop\n3.Show\n4.PeeK\n5.Exit");  
        printf("\n Enter your choice \n");        
        scanf("%d",&choice);
		printf("\n");  
        switch(choice)  
        {  
            case 1:  
            {   
                push();  
                break;  
            }  
            case 2:  
            {  
                pop();  
                break;  
            }  
            case 3:  
            {  
                display();  
                break;  
            }
			case 4:
			{
				peek();
				break;
			}
            case 5:   
            {  
                printf("Exiting....");  
                break;   
            }  

		}
	}  
}  

