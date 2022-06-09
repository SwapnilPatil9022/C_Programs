#include<stdio.h>

int main()
{
 int iValue = 11;
 int cValue = 'A';
 int fValue = 10.11;
 int dValue = 20.11;

 void *ptr = NULL;

 ptr = &iValue;
 printf("%d\n",*(int *)ptr);
 
 ptr= NULL;
 ptr = &fValue;

 printf("%f\n",*(float *)ptr);
  
 ptr = &cValue;
 printf("%c\n",*(char *)ptr);

 return 0;
}