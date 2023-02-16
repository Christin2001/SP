#include<stdio.h>
# define size 10
int Top = -1, A[size];
void push();
void pop();
void show();

void main()
{
  int choice;
  while (1)
  {
    printf("\n1. push \n2. pop \n3.show \n4.end\n");
    printf("enter your choice: ");
    scanf("%d", &choice);
    switch (choice)
    {
      case 1: push();
      break;
      case 2: pop();
      break;
      case 3: show();
      break;
      case 4: return;
      break;
      default: 
      	       printf("invalid choice!! \n");
    }
  }
}

void push()
{
	int x;
	
	if(Top==size-1)
	{
		printf("\nOverflow!!");
	}
	else
	{
		printf("Enter element to be inserted to the stack: ");
		scanf("%d",&x);
		Top=Top+1;
		A[Top]=x;
	}
}
 
void pop()
{
	if(Top==-1)
	{
		printf("\nUnderflow!!");
	}
	else
	{
		printf("Popped element:  %d",A[Top]);
		Top=Top-1;
	}
}
 
void show()
{
	
	
	if(Top==-1)
	{
		printf("\nUnderflow!!");
	}
	else
	{
		printf("Elements present in the stack: \n");
		for(int i=Top;i>=0;--i)
			printf("%d\n",A[i]);
	}
}

