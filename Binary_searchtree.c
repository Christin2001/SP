#include<stdio.h>
#include<stdlib.h>

struct node{
	struct node *left;
	struct node *right;
	int data;
};
struct node *root;

struct node* newnode(int value)
{
  struct node *newnode = malloc(sizeof(struct node));
  newnode -> data = value;
  newnode -> left = NULL;
  newnode -> right = NULL;
  return newnode;
}

struct node* insert(struct node* root, int value)
{
  if(root == NULL)
  	return newnode(value);
  	
  else if(value == root -> data)
  	printf("Same data can't be stored");
  	
  else if(value > root -> data)
  	root -> right = insert(root -> right, value);
  	
  else if(value < root -> data)
  	root -> left = insert(root -> left, value);
  return root;
}

void inorderTraversal(struct node* root)
{
  if(root == NULL)
  	return;
  inorderTraversal(root -> left);
  printf("%d ->", root -> data);
  inorderTraversal(root -> right);
}

void preorderTraversal(struct node* root)
{
  if(root == NULL)
  	return;
  printf("%d ->",root -> data);
  preorderTraversal(root -> left);
  preorderTraversal(root -> right);
}

void postorderTraversal(struct node* root)
{
  if(root == NULL)
  	return;
  postorderTraversal(root -> left);
  postorderTraversal(root -> right);
  printf("%d ->", root -> data);
}

struct node* search(struct node* root, int key)
{
  if (root == NULL)
  	printf("\nNot Found!\n");
  else if(root -> data == key)
  	printf("\nFOUND\n");
  else
  	{
  	  if(root -> data < key)
  	  return search(root -> right, key);
  	  return search(root -> left, key);
  	}
}

struct node* minvalue(struct node* node)
{
  struct node* current = node;
  while(current && current -> left != NULL)
  	current = current -> left;
  
  return current;
}

struct node* deletenode(struct node* root, int key)
{
  if(root == NULL)
  	return root;
  	
  if (key < root -> data)
  	root -> left = deletenode(root -> left, key);
  else if(key > root -> data)
  	root -> right = deletenode(root -> right, key);
  else
  	{
  	  if(root -> left == NULL)
  	  {
  	    struct node* temp = root -> right;
  	    free(root);
  	    return temp;
  	  }
  	  else if (root -> right == NULL)
  	  {
  	    struct node* temp = root -> left;
  	    free(root);
  	    return temp;
  	  }
  	  struct node* temp = root -> left;
  	  root -> data = temp -> data;
  	  root -> right = deletenode(root -> right, temp -> data);
  	}
  return root;
}

void main()
{
  int opt, value, searchv, key;
  printf("\n1.Create Root Node \n2.Insert Node \n3.Search \n4.inorderTraversal \n5.preorderTraversal \n6.postorderTraversal \n7.Delete \n8.Exit \n");
  do
  {
    printf("\nChoose option:: ");
    scanf("%d",&opt);
    switch(opt)
    {
      case 1:
      	printf("\nEnter Number: ");
      	scanf("%d",&value);
      	root = newnode(value);
      	break;
      	
      case 2:
      	printf("\nEnter Number: ");
      	scanf("%d",&value);
      	root = insert(root,value);
      	break;
      	
      case 3: 
      	printf("\nEnter Number: ");
      	scanf("%d",&searchv);
      	search(root,searchv);
      	break;
      	
      case 4: 
      	printf("\n---------\n");
      	inorderTraversal(root);
      	printf("\n---------\n");
      	break;
      	
      case 5: 
      	printf("\n---------\n");
      	preorderTraversal(root);
      	printf("\n---------\n");
      	break;
      	
      case 6: 
      	printf("\n---------\n");
      	postorderTraversal(root);
      	printf("\n---------\n");
      	break;
      	
      case 7:
      	printf("\nEnter number to be deleted: ");
      	scanf("%d",&key);
      	deletenode(root,key);
      	break;
      	
      case 8:
      	printf("Exiting the program !\n");
      	exit(0);
      	break;
      	
      default:
      	printf("INVALID OPTION !");
    	
    }
   
  }
  while(opt != 8);
  
}





























