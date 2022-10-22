#include<stdio.h>
#include<stdlib.h>

int example_function(int a)
{
    printf("Example function executed with value %d ",a);
}


int main()
{
    printf("Hello World\n");

    example_function(1); // Normally Execute the fucntion without any function pointer concept 

    int (*func_pointer)(int)= &example_function;

    (*func_pointer)(10);
}

