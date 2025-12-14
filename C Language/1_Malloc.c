#include <stdio.h>
#include <stdlib.h>// for malloc and free
int main(){
    int num_elements=5;
    int *dynamic_array;// pointer to hold the base address of the dynamic array
    dynamic_array= (int*)malloc(num_elements*sizeof(int));// allocating memory for 5 integers; we cast void pointer return value to int pointer
    if (dynamic_array==NULL){
        printf("Memory allocation failed\n");
        return 1;// exit with error code
    }
    printf("Memory successfully allocated at address: %u\n", dynamic_array);// print base address of allocated memory

    for (int i = 0; i < num_elements; i++)
    {
        dynamic_array[i]= i*10;// assign values to the dynamic array
    }
    printf("Value assigned:\n");
    for (int i = 0; i < num_elements; i++)
    {
        printf("%d ",dynamic_array[i]);// print values of the dynamic array
    }
    printf("\n");
    free(dynamic_array);// free the allocated memory
    printf("Memory successfully freed.\n");
    dynamic_array = NULL; // It is good practice to set pointer to NULL after freeing to prevent dangling pointer
    return 0;
}