#include<stdio.h>

struct Demo
{
 int *ip;
 float *fp;
};
 int main()
{
 struct Demo obj;
 
 int no =11;
 float f = 3.10;
 
 obj.ip = &no;
 obj.fp = &f;

 printf("%d\n",*(obj.ip));
 printf("%d\n",*(obj.fp));
 
 return 0;
}