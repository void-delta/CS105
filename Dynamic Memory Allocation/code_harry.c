// malloc calloc realloc free
/*  Memory Allocation 
    it reserves a block of memory in heap.
    return pointer is void pointer, so typecast it accordingly 
    ptr = (ptr_type*)malloc(size_in_bytes); use sizeof
    Upon failure of malloc it return NULL POINTER, so look out for that
    All allocated values are initialized to 'Garbage Values'

    Contiguos Memory Allocation
    it reserves n blocks of memory in the heap.
    return pointer is void pointer, typecasting required
    ptr = (ptr_type*)calloc(n, size_in_bytes); use sizeof
    All allocated values are initialized to '0'

    ReAllocation of Memory
    ptr = (ptr_type*) realloc(ptr, ne_size_in_bytes) 

    FREE 
    we can free the memory allocated to it
    free(ptr)
*/

#include <stdio.h>
#include<stdlib.h>

int main()
{
    int *ptr;
    ptr = (int*) malloc(10 * sizeof(int));
    if(!ptr)
    {
        printf("Error\n");
        exit(101);
    }
    
    for(int i = 0; i < 10; i++)
    {
        printf("Enter the %d element\t", ptr + i);
        scanf("%d", ptr + i);
    } 
}
