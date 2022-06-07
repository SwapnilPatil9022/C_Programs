#include<stdio.h>
#include<stdlib.h>

int main()
{
 int Arr[5];
 int size = 0;
 int *ptr = NULL;

 printf("Enter number of elements  : ");
 scanf("%d",&size);

 ptr = malloc(size *sizeof(int));
 if(ptr == NULL)
{
 printf("Unable to allocate memory\n");
}
 else
{
 printf("Memory succesfully allocated\n");
}

 return 0;
}