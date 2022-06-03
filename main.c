#include<stdio.h>

#include "marvellos.h"

int main()
{ 
 struct Demo obj; 
 
 printf("Inside main\n"));
 printf("Value of macro is : %d\n",MAX);
 printf("Size of structure is : %d\n",sizeof(obj));
 
 fun();
 
 return 0;
}
 void fun()
{
 printf("Inside fun\n");
}
 