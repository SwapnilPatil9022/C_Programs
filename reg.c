#include<stdio.h>

void Demo()
{
 auto int i =11;
 register int j =21;
}

int main()

{

 Demo( );
 printf("Address of int %d\n");
 printf("auto of int %d\n");

 return 0;
}