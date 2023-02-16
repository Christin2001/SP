#include<stdio.h>
void main()
 {
	int a[50], n, flag=0, S;
	printf("enter the size of the array: ");
	scanf("%d", &n);
	printf("enter the elements of the array: \n");
	for (int i=0; i<n; i++)
		scanf("%d",&a[i]);
	
	// display the array
	printf("the array is: \n");
	for (int i=0; i<n; i++)
		printf("%d\n", a[i]);
	// collect search element
	printf("enter the element to be searched: ");
	scanf("%d", &S);
	
	// execute search
	for (int i=0; i<n; i++)
	{
		if (a[i]==S)
		{
     		   printf("the element found at %d", i+1);
     		   flag = 1;
     		   break;
		}
	}
	if (flag == 0)
		printf("element not found");
		
	 
	
 }
