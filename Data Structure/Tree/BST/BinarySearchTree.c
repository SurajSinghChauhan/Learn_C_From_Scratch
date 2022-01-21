#include<stdio.h>
#include<malloc.h>

struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};
typedef struct Node NODE;
NODE *root=NULL;


// A utility function to create a new BST node
struct Node* createNode(int value)
{
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

// A utility function to do inorder traversal of BST
struct Node* inorderTraversal(NODE *element)
{
	if (element == NULL) return;
    inorderTraversal(element->left);
	printf("%d ", element->data);
	inorderTraversal(element->right);
}
struct Node* preorderTraversal(NODE *element) {
  if (element == NULL) return;
  printf("%d ", element->data);
  preorderTraversal(element->left);
  preorderTraversal(element->right);
}


struct Node* postorderTraversal(NODE *element) {
  if (element == NULL) return;
  postorderTraversal(element->left);
  postorderTraversal(element->right);
  printf("%d ", element->data);
}
/* A utility function to insert
a new node with given key in
* BST */
struct node* insert(struct Node* node, int key)
{
	/* If the tree is empty, return a new node */
	if (node == NULL)
		return createNode(key);

	/* Otherwise, recur down the tree */
	if (key < node->data)
		node->left = insert(node->left, key);
	else if (key > node->data)
		node->right = insert(node->right, key);

	/* return the (unchanged) node pointer */
	return node;
}

struct Node* minValueNode(struct Node* node)
{
    struct Node* current = node;
 
    /* loop down to find the leftmost leaf */
    while (current && current->left != NULL)
        current = current->left;
 
    return current;
}

struct Node* deleteNode(struct Node* root, int key)
{
    // base case
    if (root == NULL)
        return root;
 
    // If the key to be deleted 
    // is smaller than the root's
    // key, then it lies in left subtree
    if (key < root->key)
        root->left = deleteNode(root->left, key);
 
    // If the key to be deleted 
    // is greater than the root's
    // key, then it lies in right subtree
    else if (key > root->key)
        root->right = deleteNode(root->right, key);
 
    // if key is same as root's key, 
    // then This is the node
    // to be deleted
    else {
        // node with only one child or no child
        if (root->left == NULL) {
            struct node* temp = root->right;
            free(root);
            return temp;
        }
        else if (root->right == NULL) {
            struct node* temp = root->left;
            free(root);
            return temp;
        }
 
        // node with two children: 
        // Get the inorder successor
        // (smallest in the right subtree)
        struct node* temp = minValueNode(root->right);
 
        // Copy the inorder 
        // successor's content to this node
        root->key = temp->key;
 
        // Delete the inorder successor
        root->right = deleteNode(root->right, temp->key);
    }
    return root;
}


int main() {
    int choice,value;
	while(1)
	{
		printf("\n1. For creation of TREE");
		printf("\n2. Insert node");
		printf("\n3. Exit");
		printf("\n4. Inorder traversal");
		printf("\n5. Preorder traversal");
		printf("\n6. Postorder traversal");
		scanf("%d",&choice);
		switch(choice){
			    case 1:
					printf("\n Enter data : ");
					scanf("%d",&value);
				    root=createNode(value);
				    break;
				case 2:
					printf("\n Enter data : ");
					scanf("%d",&value);
					insert(root,value);
					break;
				case 3:
				    exit(0);
				    break;
				case 4:
				    inorderTraversal(root);
				    break;
				case 5:
				    preorderTraversal(root);
				    break;
				case 6:
				    postorderTraversal(root);
				    break;
		}
	}
}

