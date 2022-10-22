#include<stdio.h>
#include<stdlib.h>

int main()
{
    printf("Hello World\n\n");

    int a=10;
    int b=20;

    // &a will provide the address of the Variable 
    // Pointer will store the address of the variable 
    // int *ptr represents the integer Pointer 
    // int *ptr and int* ptr are same - Just a Representation of integer Pointer
    int *aptr = &a; 
    int* bptr = &b;

    printf("\nPointer will store the address of the variable -- %d",aptr);
    printf("\nPointer will store the address of the variable -- %d",bptr);

    printf("\n");
    //Dereferencing the Pointer and print the value of the address
    printf("\nDereferencing the Pointer and print the value of the address -- %d",*aptr);
    printf("\nDereferencing the Pointer and print the value of the address -- %d",*bptr);

    printf("\n");
    //Used Dereferencing we can change the value of the Pointer 
    *aptr = 100;
    *bptr = 200;

    printf("\n");
    //Dereferencing the Pointer and print the value of the address
    printf("\nDereferencing the Pointer to change and print the value of the address -- %d",*aptr);
    printf("\nDereferencing the Pointer to change and  and print the value of the address -- %d",*bptr);
    
        
}