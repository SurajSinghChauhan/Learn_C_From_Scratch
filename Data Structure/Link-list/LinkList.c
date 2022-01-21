#include<stdio.h>
#include<malloc.h>
struct node{
	int data;
	struct node *link;
};
typedef struct node NODE;
NODE *head=NULL,*temp=NULL,*element,*p;

void create(){
	int ch;
	while(1){
		element=(NODE*)malloc(sizeof(NODE));
		printf("Enter Data : ");
		scanf("%d",&element->data);
		if(head==NULL){
			head=element;
			temp=element;
		}
		else{
			temp->link=element;
			temp=element;
		}
		printf("Do You Want Add More Elements[1/0] : ");
		scanf("%d",&ch);
		if(ch==0)
		{
			temp->link=NULL;
			break;
		}
	}
}
void show()
{
	temp=head;
		if(head==NULL){
			printf("No Data Available :");
				}
				else{
					while(temp!=NULL){
							printf("%d ",temp->data);
							temp=temp->link;
					}
						
				}
}
void AddAtBegin(){
	element=(NODE*)malloc(sizeof(NODE));
	printf("Enter Data : ");
	scanf("%d",&element->data);
	element->link=head;
	head=element;
}
void AddAtEnd(){
	element=(NODE*)malloc(sizeof(NODE));
	printf("Enter Data : ");
	scanf("%d",&element->data);
	temp=head;
	while(temp->link!=NULL){
		temp=temp->link;
	}
	temp->link=element;
	element->link=NULL;
}
void DelAtBegin(){
	if(head==NULL){
		printf("\nLIST IS EMPTY");
	}
		else  if(head->link==NULL){
			printf("\n ONLY ONE DATA WAS AVAILABLE");
			free(head);
			head=NULL;
			}
			else{ 
				head=head->link;
				free(temp);
				printf("\nData Deleted");
			}	
}
void DelAtEnd(){
	if(head==NULL){
		printf("\n LIST IS EMPTY");
	}
	else if(head->link==NULL){
			printf("\n ONLY ONE DATA IS AVAILABLE");
			free(head);
			head=NULL;
	}
	else{
		temp=head;
	while(temp->link->link!=NULL){
		temp=temp->link;
	}
	free(temp->link);
	temp->link=NULL;
	printf("\n Data Deleted");
	}
}
void search(){
	int value ,count=0 , found=0;
	printf("Enter a Number To Be Search : ");
	scanf("%d",&value);
	temp=head;
	while(temp!=NULL){
		if(temp->data==value){
			printf("Element Found at %d",count);
			found=1;
			break;
		}
		count++;
		temp=temp->link;
	}
	if(found==0)
	printf("\n ELEMENT NOT FOUND");
}
int addinbetween(){
	int value ,count=0 , found=0;
	element=(NODE*)malloc(sizeof(NODE));
	printf("Enter Data to be added : ");
	scanf("%d",&element->data);
	printf("Enter a Number To Be Search : ");
	scanf("%d",&value);
	temp=head;
	while(temp!=NULL){
		if(temp->data ==value){
			p=temp->link;
			temp->link=element;
			element->link=p;
			break;
		}
		temp=temp->link;
	}
}
void reversing(){
    struct node* prev = NULL,*current,*next=NULL; 
	current=head;
    while (current != NULL) { 
        // Store next 
        next = current->next; 
  
        // Reverse current node's pointer 
        current->next = prev; 
  
        // Move pointers one position ahead. 
        prev = current; 
        current = next; 
    } 
    head= prev;
}  
}
void e(){
	exit(1);
}
int main()
{
	int choice;
	while(1)
	{
		printf("\n1. For creation of LINKLIST");
		printf("\n2. For Show Data");
		printf("\n3. For Add Element At Begin");
		printf("\n4. For Add Element At End");
		printf("\n5. For Delete Element At Begin");
		printf("\n6. For Delete Element At End");
		printf("\n7. Search For An Element");
		printf("\n8. For Add Element after a value");
		printf("\n9. Reversing a link-list");
		printf("\n10. EXIT\n");
		scanf("%d",&choice);
		switch(choice){
			    case 1:
				    create();
				    break;
				case 2:
					show();
					break;
				case 3:
				    AddAtBegin();
				    break;
				case 4:
				    AddAtEnd();
				    break;
				case 5:
				    DelAtBegin();
				    break;
				case 6:
				    DelAtEnd();
				    break;	
				case 7:
				    search();
				    break;
				case 8:
					addinbetween();
					break;
				case 9:
					reversing();
					break;
				case 10:
					e();
					break;
		}
	}
}
