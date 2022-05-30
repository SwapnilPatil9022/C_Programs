#include<stdio.h>

int Addition(int ,int);

int main()
{
	int A=10.25;
	int B=11.25;
	int ret=0;
	
	ret=Addition(A,B);
	printf("%d\n",ret);
//	printf("%d\n",&A);
//	printf("%d\n",&B);
	
	return 0;
}
int Addition(int no1,int no2)
{
	int Ans=0;
	Ans = no1+no2;
	
	return Ans;
	
}
	































