#include <stdio.h>
void main() 
{
  int array[100], item, pos,size;
  printf("Enter the size of array\n");
  scanf("%d",&size);
  printf("Enter the elements of array\n");
  for(int i=0;i<size;i++)
    scanf("%d",&array[i]);
  printf("Enter the element to be inserted in the array\n");
  scanf("%d",&item);
  printf("Enter the position element to be inserted in the array\n");
  scanf("%d",&pos);
  size=size+1;
  for(int i=size-1;i>=pos;i--)
    array[i]=array[i-1];
  array[pos-1]=item;
  printf("new array elements are\n");
  for(int i=0;i<size;i++)
     printf("%d \n",array[i]);
}
