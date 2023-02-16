#include <stdio.h>
void main() 
{
  int array[100],pos,size;
  printf("Enter the size of array\n");
  scanf("%d",&size);
  printf("Enter the elements of array\n");
  for(int i=0;i<size;i++)
    scanf("%d",&array[i]);
  printf("Enter the position element to be deleted in the array\n");
  scanf("%d",&pos);
  for(int i=pos-1;i<size-1;i++)
    array[i]=array[i+1];
  printf("array elements after deletion are\n");
  for(int i=0;i<size-1;i++)
    printf("%d \n",array[i]);
}
