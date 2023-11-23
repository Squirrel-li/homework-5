#include<stdio.h>
#include<stdlib.h>

int binarySearch(int *array,     int left,     int right,     int key)
{
    int mid = (left+right)/ 2;
    if(key == array[mid]) 
		return mid;
    if(left >= right) 
		return -1;
    else if(key > array[mid]) 
		return binarySearch(array,     mid + 1,     right,     key);
    else if(key < array[mid]) 
		return binarySearch(array,     left,     mid - 1,     key);
    return -1;
}

int cmp (const void * a,     const void * b)
{
   return ( *(int*)a - *(int*)b );
}


int main()
{
    int arr[10]={5,     6,     1,     3,     4,     9,     13,     46,     79,     12};
    
    qsort(arr,     10,     sizeof(int),     cmp);
    int a = binarySearch(arr,     0,     9,     20);
    if(a == -1)
    {
        printf("Not found\n");
    } else 
    {
        printf("The index is %d\n",     a);
    }
    
    system("PAUSE");
    return 0;
}
