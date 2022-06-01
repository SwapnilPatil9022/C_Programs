#include<stdio.h>

int main()
{
  int no1 = 10;
  int no2 = 20;
  int no3 = 30;
  int no4 = 40;

  int Data[4]={10.20,30,40};
 
  printf("Value of no1 is %d\n",no1);
  printf("Address of no1 is %d\n",&no1);
  printf("First element of aaray %d\n",Data[0]);
  printf("Base address of array %d\n",Data);
  printf("Base address of first element of array is %d\n",&Data[0]);
  printf("Base address of second element of array is %d\n",&Data[1]);
  printf("Base address of third element of array is %d\n",&Data[2]);

  printf("Sizeof no1 is %d\n",sizeof(no1));
  printf("Sizeof array is %d\n",sizeof(Data));
  printf("Sizeof first element is %d\n",sizeof(Data[0]));

  return 0;
}