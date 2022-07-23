/*
#include<stdio.h>

int Addition(int iNo1, int iNo2)
{
	int Ans = 0;
	Ans = iNo1 + iNo2;
	
	return Ans;
}

int main()
{
	int A = 10;
	int B = 20;
	int iRet = 0;
	
	iRet = Addition(A,B);
	printf("Addition is %d\n",iRet);
	
	return 0;
}

*/

#include<stdio.h>

int Addition(int iNo1, int iNo2)
{
	int iAns = 0;
	iAns = iNo1 + iNo2;
	
	return iAns;
}

int Substraction(int iNo1, int iNo2)
{
	int iAns = 0;
	iAns = iNo1 - iNo2;
	
	return iAns;
}

int main()
{
	int iValue1 = 0;
	int iValue2 = 0;
	int iRet = 0;
	
	printf("Enter First number\n");
	scanf("%d",&iValue1);
	
	printf("Enter Srcound number\n");
	scanf("%d",&iValue2);
	
	iRet = Addition(iValue1,iValue2);
	printf("Addition is: %d\n",iRet);
	
	iRet = Substraction(iValue1,iValue2);
	printf("Substraction is: %d\n",iRet);
	
	return 0;
}
