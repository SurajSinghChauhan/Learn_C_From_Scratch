#include<stdio.h>
#include<malloc.h>
struct node{
	int data;
	struct node *next;
	struct node *prev;
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
			element->prev=NULL;
		}
		else{
			temp->next=element;
			element->prev=temp;
			temp=element;
		}
		printf("Do You Want Add More Elements[1/0] : ");
		scanf("%d",&ch);
		if(ch==0)
		{
			temp->next=NULL;
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
		printf("\nTRAVERSAL IN FORWARD DIRECTION\n");
		while(temp!=NULL){
				printf("%d ",temp->data);
				p=temp;
				temp=temp->next;
		}
		printf("\n\nTRAVERSAL IN REVERSE DIRECTION\n");
		temp=p;
		while(temp!=NULL){
				printf("%d ",temp->data);
				temp=temp->prev;
		}				
	}
	printf("\n");
}
void AddAtBegin(){
	element=(NODE*)malloc(sizeof(NODE));
	printf("Enter Data : ");
	scanf("%d",&element->data);
	temp=head;
	element->next=head;
	head->prev=element;
	head=element;
	head->prev=NULL;
}
void AddAtEnd(){
	element=(NODE*)malloc(sizeof(NODE));
	printf("Enter Data : ");
	scanf("%d",&element->data);
	temp=head;
	while(temp->next!=NULL){
		temp=temp->next;
	}
	temp->next=element;
	element->prev=temp;
	element->next=NULL;
}
void DelAtBegin(){
	if(head==NULL){
		printf("\nLIST IS EMPTY");
	}
		else  if(head->next==NULL){
			printf("\n ONLY ONE DATA WAS AVAILABLE");
			free(head);
			head=NULL;
			}
			else{ 
				head=head->next;
				head->prev=NULL;
				free(temp);
				printf("\nData Deleted");
			}	
}
void DelAtEnd(){
	if(head==NULL){
		printf("\n LIST IS EMPTY");
	}
	else if(head->next==NULL){
			printf("\n ONLY ONE DATA WAS AVAILABLE");
			free(head);
			head=NULL;
	}
	else{
		temp=head;
	while(temp->next->next!=NULL){
		temp=temp->next;
	}
	free(temp->next);
	temp->next=NULL;
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
		temp=temp->next;
	}
	if(found==0)
	printf("\n ELEMENT NOT FOUND");
}
int addafter(){
	int value ,count=0 , found=0;
	element=(NODE*)malloc(sizeof(NODE));
	printf("Enter Data to be added : ");
	scanf("%d",&element->data);
	printf("Enter a Number To Be Search : ");
	scanf("%d",&value);
	temp=head;
	while(temp!=NULL){
		if(temp->data ==value){
			p=temp->next;
			temp->next=element;
			element->prev=temp;
			element->next=p;
			break;
		}
		temp=temp->next;
	}
	printf("\nELEMENT ADDED");
}
int addbefore(){
	int value ,count=0 , found=0;
	element=(NODE*)malloc(sizeof(NODE));
	printf("Enter Data to be added : ");
	scanf("%d",&element->data);
	printf("Enter a Number To Be Search : ");
	scanf("%d",&value);
	temp=head;
	while(temp!=NULL){
		if(temp->next->data ==value){
			p=temp->next;
			temp->next=element;
			element->prev=temp;
			element->next=p;
			break;
		}
		temp=temp->next;
	}
	printf("\nELEMENT ADDED");
}
int main()
{
	int choice;
	while(1)
	{
		printf("\n1. For creation of DOUBLY LINKLIST");
		printf("\n2. For Show Data");
		printf("\n3. For Add Element At Begin");
		printf("\n4. For Add Element At End");
		printf("\n5. For Delete Element At Begin");
		printf("\n6. For Delete Element At End");
		printf("\n7. Search For An Element");
		printf("\n8. For Add Element after a value");
		printf("\n9. For Add Element before a value");
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
					addafter();
					break;
			    case 9:
			    	addbefore();
			    	break;
				case 10:
					exit(0);
					break;
		}
	}
}
