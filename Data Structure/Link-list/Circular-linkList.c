#include<stdio.h>
#include<malloc.h>
struct node{
	int data;
	struct node *next;
};
typedef struct node NODE;int x;
NODE *head=NULL,*temp=NULL,*element=NULL,*start=NULL;

void create(){
	int ch;
	int i,num;
	printf("Eneter the number of element to add :");
	scanf("%d",&num);
	for(i=0;i<num;i++){
		element=(NODE*)malloc(sizeof(NODE));
		printf("\n\tEnter Data:");
		scanf("%d",&element->data);
		if(head==NULL){
			head=element;
			temp=element;
		}
		else{
			temp->next=element;
			temp=element;
		}
	}
	temp->next=head;
}
void show(){
	printf("Elements Are :");
	temp=head;
	if(head==NULL){
		printf("NO Element");
	}
	else{
		while(1){
			printf("%d",temp->data);
			temp=temp->next;
			if(temp==head)
			break;
		}
	}
}
void AddAtBegin(){
	start=head;
	temp=head;
	element=(NODE*)malloc(sizeof(NODE));
	printf("\n\tEnter Data:");
	scanf("%d",&element->data);
	if(head==NULL){
		head=element;
		element->next=head;
	}
	else{
		element->next=head;
		head=element;
		while(1){
			temp=temp->next;
			if(temp->next==start){
				temp->next=element;
				break;
			}
		}
	}
	printf("\nData Added");
}
void AddAtEnd(){
	temp=head;
	element=(NODE*)malloc(sizeof(NODE));
	printf("\n\tEnter Data:");
	scanf("%d",&element->data);
	if(head==NULL){
		AddAtBegin();
	}
	else{
		while(1){
			temp=temp->next;
			if(temp->next==head){
				break;
			}
		}
		temp->next=element;
		element->next=head;
	}
}
int length(){
	int len=1;
	temp=head;
	if(head==NULL){
		return 0;
	}
	while(1){
		if(len==1){
		    if(temp->next==head){
			  break;
		    }
	    }
		len++;
		temp=temp->next;
		if(temp->next==head){
			break;
		}
	}
	return len;
}
void DelAtBegin(){
	int len=length();
	if(len==0){
		printf("\nList is Empty");
	}
	else if(len==1){
		free(head);
		printf("\nOnly one Data Available....Data Deleted");
	}
	else{
		temp=head;
		start=head;
		head=temp->next;
		printf("\nData Deleted");
		while(1){
			if(temp->next==start){
				temp->next=head;
				break;
			}
			temp=temp->next;
		}
		free(start);
		start=NULL;
	}
}




int main(){
	int choice;
	printf("\t\t------CIRCULAR LINKLIST--------\n");
	while(1){
		printf("\n1. For creation of CIRCULAR LINKLIST");
		printf("\n2. For Show Data");
		printf("\n3. For Add Element At Begin");
		printf("\n4. For Add Element At End");
		printf("\n5. For Length");
		printf("\n6. For Delete Element At Begin");
		printf("\n7. For Delete Element At End");
		printf("\n8. Search For An Element");
		printf("\n9. EXIT\n");
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
				x=length();
				printf("Length is %d",x);
				break;
			case 6:
				DelAtBegin();
				break;
			case 7:
				DelAtEnd();
				break;	
			case 8:
				search();
				break;
			case 9:
				e();
				break;
		}
	}
			
}

