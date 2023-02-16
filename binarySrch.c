#include<stdio.h>
void main()
{
 int i, low, high, mid, n ,key, array[50];
 printf("Enter the number of elements\n ");
 scanf("%d", &n);
 printf("Enter %d elements\n", n);
   for(i = 0; i<n; i++)
      scanf("%d", &array[i]);
  
  printf("Enter value to find\n");
  scanf("%d", &key);

  low = 0;
  high = n-1;
  mid = (low+high)/2;
  while(low <= high)
  {
   if (array[mid] < key)
   low = mid + 1;
   else if (array[mid] == key)
   {
    printf("%d found at location %d ", key, mid+1);
    break;
   }
   else if (array[high] == key)
   {
     printf("element found at %d", n);
     break;
   }
   else 
   high = mid - 1;
   mid = (low + high)/2;
  } 
  if (low > high)
  printf("not found");
 
}
