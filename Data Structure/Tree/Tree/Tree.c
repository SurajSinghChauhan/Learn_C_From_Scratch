#include<stdio.h>
#include<malloc.h>

struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};
typedef struct Node NODE;
NODE *root=NULL;

int createNode(int value){
	NODE* newNode = malloc(sizeof(NODE));

    if (newNode==NULL) {
        printf("\nNULL\n");
    }
    else{
	    newNode->data = value;
	    newNode->left = newNode->right = NULL;
	    return newNode;
    }
}

int insertLeft() {
	int value;
	printf("\n Enter Left Data: ");
	scanf("%d",&value);
    root->left = createNode(value);
}

int insertRight() {
	int value;
	printf("\n Enter Right Data: ");
	scanf("%d",&value);
    root->right = createNode(value);

}

void inorderTraversal(NODE *element) {
  if (element == NULL){ 
  	return;
	}
	else{
	  inorderTraversal(element->left);
	  printf("%d ", element->data);
	  inorderTraversal(element->right);
 }
}

void preorderTraversal(NODE *element) {
  if (element == NULL) return;
  printf("%d ", element->data);
  preorderTraversal(element->left);
  preorderTraversal(element->right);
}


void postorderTraversal(NODE *element) {
  if (element == NULL) return;
  postorderTraversal(element->left);
  postorderTraversal(element->right);
  printf("%d ", element->data);
}

int main() {
    int choice,value;
	while(1)
	{
		printf("\n1. For creation of TREE");
		printf("\n2. Insert Left of root");
		printf("\n3. Insert Right of root");
		printf("\n4. Inorder traversal");
		printf("\n5. Preorder traversal");
		printf("\n6. Postorder traversal");
		printf("\n7. EXIT\n");
		scanf("%d",&choice);
		switch(choice){
			    case 1:
					printf("\n Enter data : ");
					scanf("%d",&value);
				    root=createNode(value);
				    break;
				case 2:
					insertLeft();
					break;
				case 3:
				    insertRight();
				    break;
				case 4:
				    inorderTraversal(root);
				    break;
				case 5:
				    preorderTraversal(root);
				    break;
				case 4:
				    postorderTraversal(root);
				    break;
		}
	}
}

