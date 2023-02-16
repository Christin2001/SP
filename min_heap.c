#include <stdio.h>
#define HEAP_CAPACITY 10
#define SUCCESS_VAL 99999
#define FAIL_VAL -99999
int size = 0;
int i;
int heap[HEAP_CAPACITY];
void swap(int *a,int *b)
{
    int temp = *b;
    *b = *a;
    *a = temp;
}
void heapify(int i)
{
    if (size == 1)
    {
        return;
    }
    else{
        int smallest = i;
        int left = 2 * i + 1;
        int right = 2 * i + 2;
        if(left < size && heap[left] < heap[smallest])
            smallest = left;
        if(right < size && heap[right] < heap[smallest])
            smallest = right;
        if (smallest != i)
        {
            swap(&heap[i], &heap[smallest]);
            heapify(smallest);
        }
    }
}
int insert(int newNum)
{
    if(size==0)
    {
        heap[0] = newNum;
        size += 1;
        return SUCCESS_VAL;
    }
    else if(size < HEAP_CAPACITY)
    {
        heap[size] = newNum;
        size += 1;
        for(i =(size-1)/2;i>=0;i--)
        {
            heapify(i);
        }
        return SUCCESS_VAL;
    }
    else
    {
        printf("Heap capacity reached. Insertion failed.\n");
        return FAIL_VAL;
    }
}
int delete(int number)
{
    int i,index=-1;
    if(size <=0)
    {
        printf("Empty min heap");
        return FAIL_VAL;
    }
    for(i=0;i<size;i++)
    {
        if(number == heap[i])
        {
            index = i;
            break;
        }
    }
    if(index == -1)
    {
        printf("Key is not found\n");
        return FAIL_VAL;
    }
    swap(&heap[i],&heap[size-1]);
    size -= 1;
    for(i=(size-1)/2; i>=0;i--)
    {
        heapify(i);
    }
    return SUCCESS_VAL;
}
void printHeap()
{
    for( i=0;i<size;++i)
    {
        if(i==0)
            printf("%d(root) ", heap[i]);
        else
            printf("%d(%d's child) ",heap[i],heap[(i-1)/2]);
    }
    printf("\n");
}
int main()
{
    while(1)
    {
        printf("\n1.Insert Element \n2.Print MinHeap \n3.Delete Element \n4.Exit \n");
        int choice;
        printf("Enter your choice: ");
        scanf("%d",&choice);
        if(choice==1)
        {
            printf("Enter the element to be inserted: ");
            int item;
            scanf("%d",&item);
            int res=insert(item);
            if(res==SUCCESS_VAL)
                printf("\ninserted successfully\n");
        }
        else if(choice==2)
        {
            printHeap();
        }
        else if(choice==3)
        {
            int res = delete(heap[0]);
            if(res==SUCCESS_VAL)
                printf("Delete Successfully\n");
            else
                printf("Deleted Unsuccessfully\n");
            }
        else if(choice==4)
        {
            break;
        }
    }
}
