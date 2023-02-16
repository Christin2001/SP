#include<stdio.h>
void main ()
{
  int arr1[50], arr2[50], arr3[50], S1, S2, S3;
// array declaration
  printf("enter the size of the array 1 : ");
  scanf("%d",&S1);
  printf("enter the elements of array 1:\n");
  for (int i=0; i<S1; i++)
  	scanf("%d",&arr1[i]);
  
  printf ("enter the size of the array 2: ");
  scanf("%d",&S2);
  printf("enter the elements of array 2:\n");
  for (int i=0; i<S2; i++)
  	scanf("%d",&arr2[i]);
  
  //merging in arr3
  S3 = S1+S2;
  
  for (int i=0; i<S1; i++)
  	arr3[i]=arr1[i];
  for (int i=0; i<S2; i++)
  	arr3[i+S1]=arr2[i];
  printf("Array before sorting\n");
  for (int i=0; i<S3; i++)
  	printf("%d\n",arr3[i]);
  
  
  //sorting
  for (int i=0;i<S3;i++)
  	{
  	 int temp;
  	 for (int j=i+1; j<S3; j++)
  	 {
  	    if (arr3[i]>arr3[j])
  	    {
  	      temp = arr3[i];
  	      arr3[i] = arr3[j];
  	      arr3[j]=temp;
  	    }
  	 }
  	}
  
  // print sorted & merged array
  printf("Sorted Array\n");
  for (int i=0; i<S3; i++)
  	printf("%d\n",arr3[i]);
  	
}

