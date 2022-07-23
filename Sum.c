#include<stdio.h>

int Summation(int No1, int No2)
{
	int Ans = 0;
	
	Ans = No1 + No2;
	
	
	return Ans;
}

int main()
{
	int A = 10;
	int B = 20;
	int C = 0;
	
	C = Summation(A,B);
	
	printf("Summation  is : %d\n",C);
	
	return 0;
}