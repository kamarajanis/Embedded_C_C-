#include<stdio.h>

#define SA // Just a definition that SA is defined that's it

// Conditional Compilation if its defined to SA 
#ifdef SA 
int a=1;
#endif 


#ifndef PA
    #define PA
#endif
 
int main()
{
    printf("\n Hello World\n");
    printf("\n%d",a);

}