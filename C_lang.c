
#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>

int main()
{
	char fname[30];
	int fd = 0;
	char Data[11];
	printf("Enter the file name that you want to open\n");
	scanf("%s",fname);
	
	fd = open(fname,O_RDWR);
	if(fd == -1)
	{
		printf("Unable to open file\n");
		return -1;
	}
	else
	{
		printf("File is succesfully opened with :%d\n",fd);
	}
		//1  2 3
	lseek(fd,-7,2);														//Topic
	//1.Filedescripter     kashat
	//2.Displacement       kitine halchal
	//3.From Where         Kuthun (0: start of file  1: Currunt position  2: End of file)

	read(fd,Data,6);
	
	write(1,Data,6);
	
	close(fd);
	return 0;
}




















/*

// Lseek file

#include<stdio.sh>
#include<stdlib.h>
#include<fcntl.h>

int main()
{
	char fname[30];
	int fd = 0;
	char Data[11];
	printf("Enter the file name that you want to open\n");
	scanf("%s",fname);
	
	fd = open(fname,O_RDWR);
	if(fd == -1)
	{
		printf("Unable to open file\n");
		return -1;
	}
	else
	{
		printf("File is succesfully opened with :%d\n",fd);
	}
		//1  2 3
	lseek(fd,4,0);														//Topic
	//1.Filedescripter     kashat
	//2.Displacement       kitine halchal
	//3.From Where         Kuthun (0: start of file  1: Currunt position  2: End of file)

	read(fd,Data,6);
	
	write(1,Data,6);
	
	close(fd);
	return 0;
}
 
*/







/*

#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>

int main()
{
	char fname[30];
	int fd = 0;
	char Data[11];
	printf("Enter the file name that you want to open\n");
	scanf("%s",fname);
	
	fd = open(fname,O_RDWR);
	if(fd == -1)
	{
		printf("Unable to open file\n");
		return -1;
	}
	else
	{
		printf("File is succesfully opened with :%d\n",fd);
	}
	
	read(fd,Data,6);
	
	// printf("Data from file is: %6s\n",Data);						//garbage
	write(1,Data,6);
	
	close(fd);
	return 0;
}


*/











/*

// write a file

#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>

int main()
{
	char fname[30];
	int fd = 0;
	char Data[11] = "Marvellous";
	printf("Enter the file name that you want to open\n");
	scanf("%s",fname);
	
	fd = open(fname,O_RDWR);
	if(fd == -1)
	{
		printf("Unable to open file\n");
		return -1;
	}
	else
	{
		printf("File is succesfully opened with :%d\n",fd);
	}
	
	write(fd,Data,10);
	
	return 0;
}



*/
























/*
#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>

int main()
{
	char fname[30];
	int fd = 0;
	int ret = 0;
	char Data[11] = "Marvellous";

	printf("Enter the file name that you want to open\n");
	scanf("%s",fname);

	fd = open(fname,O_RDWR);
	if(fd == -1)
	{
		printf("Unable to open file\n");
		return -1;
	}
	else
	{
		printf("File is successfully open with fd : %d\n",fd);
	}

	ret = write(fd,Data,10);
	if(ret == 0)
	{
		printf("Unable to write in file\n");
	}
	return 0;
}

*/

















/*

// open a file

#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>

int main()
{
	char fname[30];
	int fd = 0;

	printf("Enter the file name that you want to create\n");
	scanf("%s",fname);

	fd = open(fname,O_RDWR);
	if(fd == -1)
	{
		printf("Unable to open file\n");
		return -1;
	}
	else
	{
		printf("File is successfully open with fd : %d\n",fd);
	}
	return 0;
}

*/

















/*


// File Handling

#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>

int main()
{
	char fname[30];
	int fd = 0;

	printf("Enter the file name that you want to create\n");
	scanf("%s",fname);

	fd = creat(fname,0777);
	if(fd == -1)
	{
		printf("Unable to create file\n");
	}
	else
	{
		printf("File is successfully created\n");
	}
	return 0;
}

*/













/*

#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[])
{
	int ans = 0;
	printf("Name of executable is : %s\n",argv[0]);

	printf("Number of command line arguument are ; %d\n",argc);

	ans = atoi(argv[1]) + atoi(argv[2]);

	printf("Addition is a : %d\n",ans);

	return 0;
}


*/









/*
#include<stdio.h>

void Display(int iNo)
{
	int iCnt = 0;

	for(iCnt = 1; iCnt <= iNo; iCnt++)
	{
		printf("*\n");
	}
}

int main()
{
	int iValue1 = 0;

	printf("Enter the number \n");
	scanf("%d",&iValue1);

	Display(iValue1);

	return 0;
}

*/















/*
#include<stdio.h>

void Display(int iNo)
{
	if(iNo % 5 == 0)
	{
		printf("Its dividible by 5 : \n");
	}
	else
	{
		printf("Not dividible\n");
	}
}

int main()
{
	int iValue1 = 0;

	printf("Enter the number \n");
	scanf("%d",&iValue1);

	Display(iValue1);

	return 0;
}

*/
















/*
#include<stdio.h>

void Display()
{
	int i = 0;
	int j = 5;

	for(i = 0; i = j; i++)
	{
		printf("%d\n",j);
		j--;
	}
}

int main()
{

	Display();

	return 0;
}
*/














/*
#include<stdio.h>

void Display()
{
	int iCnt = 0;

	for(iCnt = 1; iCnt <= 5; iCnt++)
	{
		printf("Marvellous...\n");
	}
}

int main()
{

	Display();

	return 0;
}
*/















/*
#include<stdio.h>

int Display(int iNo1, int iNo2)
{
	int iAns = 0;

	if(iNo2 > iNo1)
	{
		return -1;
	}

	iAns = iNo1 / iNo2;

	return iAns;
}

int main()
{
	int iValue1 = 15, iValue2 = 5;
	int iRet = 0;

	iRet = Display(iValue1,iValue2);
	printf("Divison is : %d",iRet);

	return 0;
}

*/
















/*
#include<stdio.h>
#include<stdbool.h>

int DisplayPower(int iNo1, int iNo2)
{
	register  int iCnt = 1;
	long int mult = 1;

	for(iCnt = 1; iCnt <= iNo2; iCnt++)
	{
		mult = iNo1 * mult;
	}
	return mult;
}

bool ChkArmstromg(int iNo1)
{
	int iTemp = 0;
	int iDigit = 0, iDigitCnt = 0, iSum = 0;

	if(iNo1 < 0)
	{
		iNo1 = -iNo1;
	}

	iTemp = iNo1;

	while(iNo1 != 0)
	{
		iDigitCnt++;
		iNo1 = iNo1 / 10;
	}
	iNo1 = iTemp;

	while(iNo1 != 0)
	{
		iDigit = iNo1 % 10;
		iSum = iSum + DisplayPower(iDigit,iDigitCnt);
		iNo1 = iNo1 / 10;
	}
	if(iSum == iTemp)
	{
		return true;
	}
	else
	{
		return false;
	}
}

int main()
{
	int iValue1 = 0;
	bool bRet = 0;

	printf("Enter number :\n");
	scanf("%d",&iValue1);

	bRet = ChkArmstromg(iValue1);
	if(bRet == true)
	{
		printf("Amstrong number : \n",iValue1);
	}
	else
	{
		printf("Not Amstrong number : \n",iValue1);
	}

	return 0;
}
*/












/*
#include<stdio.h>

unsigned int Power(int iNo1, int iNo2)
{
	unsigned long int lMult = 1;
	register int iCnt = 0;
	
	for(iCnt=1; iCnt<=iNo2; iCnt++)
	{
		lMult = lMult * iNo1;
	}
	return lMult;
}
int main()	
{
	auto int iValue1 = 0;
	auto int iValue2 = 0;
	auto unsigned long int lRet = 0;
	
	printf("Enter Base : \n");
	scanf("%d",&iValue1);
	
	printf("Enter Power : \n");
	scanf("%d",&iValue2);
	
	lRet = Power(iValue1, iValue2);
	
	printf("Result is : %ld\n",lRet);

	return 0;
}
*/

















/*

#include<stdio.h>

int DisplayPower(int iNo1, int iNo2)
{
	register  int iCnt = 1;
	long int mult = 1;

	for(iCnt = 1; iCnt <= iNo2; iCnt++)
	{
		mult = iNo1 * mult;
	}
	return mult;
}

int main()
{	
	int iValue1 = 0;
	int iValue2 = 0;
	long int iRet = 0;

	printf("Enter the first number : \n");
	scanf("%d",&iValue1);

	printf("Enter secound number :\n");
	scanf("%d",&iValue2);

	iRet = DisplayPower(iValue1,iValue2);
	printf("Resut is  : %d\n",iRet);

	return 0;
}
*/














/*
#include<stdio.h>
#include<stdbool.h>

bool ChkPalamdrome(int iNo)
{	
	int iRev= 0;
	int iDigit = 0;
	int iTemp = 0;

	if(iNo < 0)
	{
		iNo = -iNo;
	}
	iTemp = iNo;

	while(iNo > 0)
	{
		iDigit = iNo % 10;
		iRev = iRev * 10 + iDigit;
		iNo = iNo / 10;
	}
	if(iRev == iTemp)
	{
		return true;
	}
	else
	{
		return false;
	}

	// for(iCnt = 0; iCnt <= iNo; iCnt++)
	// {
	// 	iDigit = iNo % 10;
	// 	iRev = iRev * 10 + iDigit;
	// 	iNo = iNo / 10;
	// }
	// return iRev;
}

int main()
{
	int iValue = 0;
	bool iRet = 0;
	
	printf("Enter the number\n");
	scanf("%d",&iValue);

	iRet = ChkPalamdrome(iValue);	
	if(iRet == true)
	{
		printf("palandrome number\n",iRet);
	}
	else
	{
		printf("not a palandrome number \n",iRet);
	}

	return 0;
}

*/

















/*
#include<stdio.h>

int RevDigit(int iNo)
{	
	int iRev= 0;
	int iCnt = 0;
	int iDigit = 0;

	if(iNo < 0)
	{
		iNo = -iNo;
	}

	while(iNo > 0)
	{
		iDigit = iNo % 10;
		iRev = iRev * 10 + iDigit;
		iNo = iNo / 10;
	}
	return iRev;

	// for(iCnt = 0; iCnt <= iNo; iCnt++)
	// {
	// 	iDigit = iNo % 10;
	// 	iRev = iRev * 10 + iDigit;
	// 	iNo = iNo / 10;
	// }
	// return iRev;
}

int main()
{
	int iValue = 0;
	int iRet = 0;
	
	printf("Enter the number\n");
	scanf("%d",&iValue);

	iRet = RevDigit(iValue);	
	printf("Result is : %d\n",iRet);

	return 0;
}
*/ 















/*
#include<stdio.h>

void AdditonEvenDigit(int iNo)
{	
	int iDigit = 0;
	int iCnt = 0;
	int iSum = 0;

	while(iNo > 0)
	{
		iDigit = iNo % 10;
		// printf("%d\n",iDigit);
		// iSum = iSum + iDigit;
		iNo = iNo / 10;
		if((iDigit % 2)!= 0)
		{
			iSum = iSum + iDigit;
		}
	} 	
	printf("Even Digit Addition : %d\n",iSum);
}

int main()
{
	int iValue = 0;
	
	printf("Enter the number\n");
	scanf("%d",&iValue);

	AdditonEvenDigit(iValue);	

	return 0;
}

*/













/*
#include<stdio.h>

void AdditonEvenDigit(int iNo)
{	
	int iDigit = 0;
	int iCnt = 0;
	int iSum = 0;

	while(iNo > 0)
	{
		iDigit = iNo % 10;
		// printf("%d\n",iDigit);
		// iSum = iSum + iDigit;
		iNo = iNo / 10;
		if((iDigit % 2)== 0)
		{
			iSum = iSum + iDigit;
		}
	} 	
	printf("Even Digit Addition : %d\n",iSum);
}

int main()
{
	int iValue = 0;
	
	printf("Enter the number\n");
	scanf("%d",&iValue);

	AdditonEvenDigit(iValue);	

	return 0;
}
*/












/*
#include<stdio.h>

int SumDigit(int iNo)
{	
	int iDigit = 0;
	int iCnt = 0;
	int iSum = 0;

	// for(iCnt = 1; iCnt <= iNo; iCnt++)
	// {
	// 	if(iNo > 0)
	// 	{
	// 		iDigit = iNo % 10;
	// 		// printf("%d\n",iDigit); 
	// 		iCnt++;
	// 		iNo = iNo / 10;
	// 	}
	// }
	// return iCnt;
	while(iNo > 0)
	{
		iDigit = iNo % 10;
		// printf("%d\n",iDigit);
		iSum = iSum + iDigit;
		iNo = iNo / 10;
	} 	
	return iSum;
}

int main()
{
	int iValue = 0;
	int iRet = 0;

	printf("Enter the number\n");
	scanf("%d",&iValue);

	iRet = SumDigit(iValue);	
	printf("Result is : %d\n",iRet);

	return 0;
}
*/















/*
#include<stdio.h>

int CountDigit(int iNo)
{	
	int iDigit = 0;
	int iCnt = 0;
	int iSum = 0;

	// for(iCnt = 1; iCnt <= iNo; iCnt++)
	// {
	// 	if(iNo > 0)
	// 	{
	// 		iDigit = iNo % 10;
	// 		// printf("%d\n",iDigit); 
	// 		iCnt++;
	// 		iNo = iNo / 10;
	// 	}
	// }
	// return iCnt;
	while(iNo > 0)
	{
		iDigit = iNo % 10;
		// printf("%d\n",iDigit);
		iCnt++;
		iNo = iNo / 10;
	} 	
	return iCnt;
}

int main()
{
	int iValue = 0;
	int iRet = 0;

	printf("Enter the number\n");
	scanf("%d",&iValue);

	iRet = CountDigit(iValue);	
	printf("Result is : %d\n",iRet);

	return 0;
}
*/


















/*
#include<stdio.h>

void DisplayDigit(int iNo)
{	
	int iDigit = 0;
	int iCnt = 0;

	for(iCnt = 1; iCnt <= iNo; iCnt++)
	{
		if(iNo != 0)
		{
			iDigit = iNo % 10;
			printf("%d\n",iDigit);
			iNo = iNo / 10;
		}
	}
	// while(iNo != 0)
	// {
	// 	iDigit = iNo % 10;
	// 	printf("%d\n",iDigit);
	// 	iNo = iNo / 10;
	// } 	
}

int main()
{
	int iValue = 0;

	printf("Enter the number\n");
	scanf("%d",&iValue);

	DisplayDigit(iValue);	

	return 0;
}
*/












/*
#include<stdio.h>
#include<stdbool.h>

bool CheckPrime(int iNo)
{
	int iCnt = 0;

	for(iCnt = 2 ; iCnt <= (iNo/2); iCnt++)
	{
		if(iNo % iCnt == 0)
		{
			break;
		}
	}

	if(iCnt == (iNo/2) + 1)
	{
		return true;
	}
	else
	{
		return false;
	}
}
int main()
{
	int iValue = 0;
	bool bRet;
	
	printf("Enter number\n");
	scanf("%d",&iValue);

	bRet = CheckPrime(iValue);
	
	if(bRet == true)
	{
		printf("%d is prime number\n",iValue);
	}
	else
	{
		printf("%d is not a prime number\n",iValue);
	}
	return 0;
}
*/














/*
#include<stdio.h>
#include<stdbool.h>

int CountFactor(int iNo)
{
	int iCnt = 0;
	int iFactCnt = 0;
	
	for(iCnt=2; iCnt<= iNo/2; iCnt++)
	{
		if(iNo % iCnt == 0)
		{
			iFactCnt++;
		}
	}
	return iFactCnt;
}
bool CheckPrime(int iNo)
{
	int iRet = 0;
	iRet = CountFactor(iNo);
	if(iRet == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}
int main()
{
	int iValue = 0;
	bool bRet;
	
	printf("Enter number\n");
	scanf("%d",&iValue);

	bRet = CheckPrime(iValue);
	
	if(bRet == true)
	{
		printf("%d is prime number\n",iValue);
	}
	else
	{
		printf("%d is not a prime number\n",iValue);
	}
	return 0;
}

*/










/*
#include<stdio.h>
#include<stdbool.h>

int CountFact(int iNo)
{
	int iCnt = 0;
	int iFactCnt = true;
	
	for(iCnt=2; iCnt<=(iNo/2); iCnt++)
	{
		if(iNo % iCnt == 0)
		{
			iFactCnt++;
		}
	}
	return iFactCnt;
}

bool CheckPrime(int iNo)
{
	int iRet = 0;
	iRet = CountFact(iNo);
	if(iRet == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}
int main()
{
	int iValue = 0;
	bool bRet = false;
	
	printf("Enter number\n");
	scanf("%d",&iValue);
	
	bRet=CheckPrime(iValue);
	if(bRet == true)
	{
		printf("%d prime number",bRet);
	}
	else
	{
		printf("%d is not a prime number",bRet);
	}
	

	return 0;
}

*/














/*
#include<stdio.h>
#include<stdbool.h>

bool DisplayPrime(int iNo)
{
	int iSum = 0;
	int iCnt = 0;

	if(iNo < 0)
	{
		iNo = -iNo;
	}
	for(iCnt=(iNo/2); ((iCnt >= 1)&&(iSum <= iNo)); iCnt--)
	{
		if((iNo % iCnt)== 0)
		{
			iSum = iSum + iCnt;
		}
	}
	if(iSum == iNo)
	{
		return true;
	}
	else
	{
		return false;
	}
}

int main()
{
	int iValue = 0;
	bool iRet = 0;

	printf("Enter the number\n");
	scanf("%d",&iValue);

	iRet = DisplayPrime(iValue);
	if(iRet == true)
	{
		printf("is prime :",iRet);
	}
	else
	{
		printf("not prime is :",iRet);
	}
	

	return 0;
}
*/













/*
#include<stdio.h>

void Display(int iNo)
{
	int iCnt = 0;

	if(iNo < 0)
	{
		iNo = -iNo;
	}
	for(iCnt = 1; iCnt <= iNo; iCnt++)
	{
		printf("%d\n",iCnt);
	}
	printf("---------------\n");
}

void DisplayF(int iNo)
{
	int iCnt = 0;

	if(iNo < 0)
	{
		iNo = -iNo;
	}
	for(iCnt = iNo; iCnt >= 1; iCnt--)
	{
		printf("%d\n",iCnt);
	}
}

int main()
{
	int iValue = 0;

	printf("Enter the number\n");
	scanf("%d",&iValue);
	printf("------------\n");

	Display(iValue);	
	DisplayF(iValue);

	return 0;
}
*/











/*
#include<stdio.h>
#include<stdbool.h>

bool DisplayPrime(int iNo)
{
	int iSum = 0;
	int iCnt = 0;

	if(iNo < 0)
	{
		iNo = -iNo;
	}
	for(iCnt=(iNo/2); ((iCnt >= 1)&&(iSum <= iNo)); iCnt--)
	{
		if((iNo % iCnt)== 0)
		{
			iSum = iSum + iCnt;
		}
	}
	if(iSum == iNo)
	{
		return true;
	}
	else
	{
		return false;
	}
}

int main()
{
	int iValue = 0;
	bool iRet = 0;

	printf("Enter the number\n");
	scanf("%d",&iValue);

	iRet = DisplayPrime(iValue);
	if(iRet == true)
	{
		printf("is prime :",iRet);
	}
	else
	{
		printf("not prime is :",iRet);
	}
	

	return 0;
}
*/















/*
#include<stdio.h>
#include<stdbool.h>


bool DisplayPrime(int iNo)
{
	int iSum = 0;
	int iCnt = 0;

	if(iNo < 0)
	{
		iNo = -iNo;
	}
	for(iCnt = 1; ((iCnt <= (iNo/2))&&(iSum <= iNo)); iCnt++)
	{
		if((iNo % iCnt)== 0)
		{
			iSum = iSum + iCnt;
		}
	}
	if(iSum == iNo)
	{
		return true;
	}
	else
	{
		return false;
	}
}

int main()
{
	int iValue = 0;
	bool iRet = 0;

	printf("Enter the number\n");
	scanf("%d",&iValue);

	iRet = DisplayPrime(iValue);
	if(iRet == true)
	{
		printf("is prime :",iRet);
	}
	else
	{
		printf("not prime is :",iRet);
	}
	

	return 0;
}

*/














/*
#include<stdio.h>
#include<stdbool.h>


bool DisplayPrime(int iNo)
{
	int iSum = 0;
	int iCnt = 0;

	if(iNo < 0)
	{
		iNo = -iNo;
	}
	for(iCnt = 1; iCnt <= (iNo/2); iCnt++)
	{
		if((iNo % iCnt)== 0)
		{
			iSum = iSum + iCnt;
		}
		if(iSum > iNo)
		{
			break;
		}
	}
	if(iSum == iNo)
	{
		return true;
	}
	else
	{
		return false;
	}
}

int main()
{
	int iValue = 0;
	bool iRet = 0;

	printf("Enter the number\n");
	scanf("%d",&iValue);

	iRet = DisplayPrime(iValue);
	if(iRet == true)
	{
		printf("is prime :",iRet);
	}
	else
	{
		printf("not prime is :",iRet);
	}
	

	return 0;
}
*/


















/*
#include<stdio.h>
#include<stdbool.h>

int SumFactorial(int iNo)
{
	int iCnt = 0;
	int iSum = 0;

	if(iNo < 0)
	{
		iNo = -iNo;
	}
	for(iCnt = 1; iCnt <= (iCnt/2); iCnt++)
	{
		if((iNo % iCnt)== 0)
		{
			iSum = iSum + iCnt;
		}
	}
	return iSum;
}
bool CheckPerfect(int iNo)
{
	int iAns = 0;
	iAns = SumFactorial(iNo);
	
	if(iAns == iNo)
	{
		return true;
	}	
	else
	{
		return false;
	}
}

int main()
{
	int iValue = 0;
	bool bRet;

	printf("enter number\n");
	scanf("%d",&iValue);

	bRet = CheckPerfect(iValue);
	if(bRet == true)
	{
		printf("%d is a perfect number\n",iValue);
	}
	else
	{
		printf("%d is not a perfect number\n",iValue);
	}

	return 0;
}
*/

















/*

#include<stdio.h>

int SumNonFactorial(int iNo1)
{
	int iCnt = 0;
	int iSum = 0;

	if(iNo1 < 0)
	{
		iNo1 = -iNo1;
	}

	for(iCnt = 1; iCnt <= (iNo1/2); iCnt++)
	{
		if((iNo1 % iCnt)!= 0)
		{
			printf("%d\n",iCnt );
			iSum = iSum + iCnt;
		}
	}
	return iSum;
}

int main()
{
	int iValue = 0;
	int iRet = 0;

	printf("Enter the number\n");
	scanf("%d",&iValue);

	iRet = SumNonFactorial(iValue);
	printf("Sum of factorial : %d\n",iRet);

	return 0;
}
*/




















/*
#include<stdio.h>

int SumNonFactorial(int iNo1)
{
	int iCnt = 0;
	int iSum = 0;

	if(iNo1 < 0)
	{
		iNo1 = -iNo1;
	}

	for(iCnt = 1; iCnt <= (iNo1/2); iCnt++)
	{
		if((iNo1 % iCnt)!= 0)
		{
			printf("%d\n",iCnt );
			iSum = iSum + iCnt;
		}
	}
	return iSum;
}

int main()
{
	int iValue = 0;
	int iRet = 0;

	printf("Enter the number\n");
	scanf("%d",&iValue);

	iRet = SumNonFactorial(iValue);
	printf("Sum of factorial : %d\n",iRet);

	return 0;
}
*/












/*

#include<stdio.h>

int SumFactorial(int iNo1)
{
	int iCnt = 0;
	int iSum = 0;

	if(iNo1 < 0)
	{
		iNo1 = -iNo1;
	}

	for(iCnt = 1; iCnt <= (iNo1/2); iCnt++)
	{
		if((iNo1 % iCnt)== 0)
		{
			iSum = iSum + iCnt;
		}
	}
	return iSum;
}

int main()
{
	int iValue = 0;
	int iRet = 0;

	printf("Enter the number\n");
	scanf("%d",&iValue);

	iRet = SumFactorial(iValue);
	printf("Sum of factorial : %d\n",iRet);

	return 0;
}
*/















/*

#include<stdio.h>

void DisplayFactorial(int iNo)
{	
	int iCnt = 0;

	if(iNo < 0)
	{
		iNo =  -iNo;
	}

	for(iCnt = 1; iCnt < iNo; iCnt++)
	{
		if((iNo % iCnt)== 0)
		{
			printf("%d\n",iCnt);
		}
	}
}
int main()
{
	int iValue = 0;

	printf("Enter the number\n");
	scanf("%d",&iValue);

	DisplayFactorial(iValue);

	return 0;
}


*/





/*
#include<stdio.h>

void DisplayFactor(int iNo1)
{
	int iCnt = 0;

	for(iCnt = 1; iCnt <= iNo1; iCnt++)
	{
		if((iNo1 % iCnt)== 0)
		{
			printf("%d\n",iCnt);
		}
	}
}

int main()
{
	int iValue1 = 0;

	printf("Enter the number \n");
	scanf("%d",&iValue1);

	DisplayFactor(iValue1);

	return 0;
}
*/


















/*
#include<stdio.h>

void JweleryPortal(int iWeight)
{
	switch(iWeight)
	{
		case 1:
		printf("Your bill amount is : 4000\n");
		break;

		case 2:
		printf("Your bill amount is : 8000\n");
		break;

		case 5:
		printf("Your bill amount is : 20000\n");
		break;

		case 10:
		printf("Your bill amount is : 40000\n");
		break;

		default:
		printf("Invaild Weight\n");
		break;
	}
}

int main()
{
	int iValue = 0;
	
	printf("Enter the gold coin size that you want to purchase\n");
	scanf("%d",&iValue);

	JweleryPortal(iValue);

	return 0;
}

*/


















/*
#include<stdio.h>

void DisplayMark(float fMark)
{
	if((fMark > 0.0)&&(fMark < 35.0))
	{
		printf("You are Fail\n");
	}
	else if((fMark >= 35.0)&&(fMark < 50.0))
	{
		printf("Pass Class\n");
 	}
	else if((fMark >= 50.0)&&(fMark < 60.0))
	{
		printf("Secound Class\n");
	}
	else if((fMark >= 60.0)&&(fMark < 70.0))
	{
		printf("First Class\n");
	}
	else if((fMark >= 70.0)&&(fMark < 100.0))
	{
		printf("First Class with distiction\n");
	}
	else
	{
		printf("Invalid Marks\n");
	}
}

int main()
{
	float fValue = 0.0;

	printf("enter the percentage\n");
	scanf("%f",&fValue);

	DisplayMark(fValue);
	
	return 0;
}
*/














/*
#include<stdio.h>

void DisplayClass(float fMark)
{
	if((fMark > 0.0)&&(fMark < 35.0))
	{
		printf("You are Fail\n");
	}
	else if((fMark >= 35.0)&&(fMark < 50.0))
	{
		printf("Pass Class\n");
	}
	else if((fMark >= 50.0)&&(fMark < 60.0))
	{
		printf("Secound Class\n");
	}
	else if((fMark >= 60.0)&&(fMark < 70.0))
	{
		printf("First Class\n");
	}
	else if((fMark >= 70.0)&&(fMark < 100.0))
	{
		printf("First Class with distiction\n");
	}
	else
	{
		printf("Invalid Marks\n");
	}
}

int main()
{
	float fValue = 0.0;

	printf("enter the percentage\n");
	scanf("%f",&fValue);

	DisplayClass(fValue);
	
	return 0;
}

*/













/*
#include<stdio.h>
#include<stdbool.h>

bool Display(int iNo1)
{
	if((iNo1 % 3 == 0)&&(iNo1 % 5 == 0))
		{
			return true;
		}
	else
		{
			return false;
		}
}

int main()
{
	int iValue1 = 0;
	bool bRet = false;

	printf("enter the number\n");
	scanf("%d",&iValue1);

	bRet = Display(iValue1);
	if(bRet == true)
	{
		printf("%d is divisible by 3 & 5\n",iValue1);
	}
	else
	{
		printf("%d is not divisible by 3 & 5\n",iValue1);
	}


	return 0;
}
*/
















/*
#include<stdio.h>

void Display(int iNo1)
{
	if(iNo1 % 2 == 0)
		printf("Even number\n");
	else
		printf("Odd number\n");
}

int main()
{
	int iValue1 = 0;

	printf("enter the number\n");
	scanf("%d",&iValue1);

	Display(iValue1);


	return 0;
}
*/













/*
#include<stdio.h>

int Summation(int iNo)
{
	int iCnt = 0;
	int iSum = 0;

	if(iNo < 0)
	{
		iNo = -iNo;
	}

	for(iCnt = 1; iCnt <= iNo; iCnt++)
	{
		iSum = iSum + iCnt;
	}
	return iSum;
}

int main()
{
	int iValue1 = 0;
	int iRet = 0;

	printf("Enter the number\n");
	scanf("%d",&iValue1);

	iRet = Summation(iValue1);
	printf("result is : %d\n",iRet);

	return 0;
}
*/
















/*
#include<stdio.h>

void Display(int iNo1)
{
	// int i = 0;

	// for(i = 1; i <= iNo1; i++)
	// {
	// 	printf("%d\n",i);
	// }

	int icnt = 1;

	if(iNo1 < 0)
	{
		iNo1 = -iNo1;
	}

	while(icnt <= iNo1)
	{
		printf("%d\n",icnt);
		icnt++;
	}
}

int main()
{
	int iValue1 = 0;

	printf("Enter the number\n");
	scanf("%d",&iValue1);

	Display(iValue1);

	return 0;
}
*/












/*
#include<stdio.h>

void Display(int iNo1)
{
	// int i = 0;

	// for(i = 1; i <= iNo1; i++)
	// {
	// 	printf("%d\n",i);
	// }

	int icnt = 1;

	while(icnt <= iNo1)
	{
		printf("%d\n",icnt);
		icnt++;
	}
}

int main()
{
	int iValue1 = 0;

	printf("Enter the number\n");
	scanf("%d",&iValue1);

	Display(iValue1);

	return 0;
}
*/





















/*
#include<stdio.h>

void Display(int iNo1)
{
	int i = 0;

	for(i = 1; i <= iNo1; i++)
	{
		printf("%d\n",i);
	}
}

int main()
{
	int iValue1 = 0;

	printf("Enter the number\n");
	scanf("%d",&iValue1);

	Display(iValue1);

	return 0;
}
*/



















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
	int iValue1 = 0;
	int iValue2 = 0;
	int iRet = 0;

	printf("Enter the first number\n");
	scanf("%d",&iValue1);

	printf("Enter the secound number\n");
	scanf("%d",&iValue2);

	iRet = Addition(iValue1,iValue2);
	printf("Result is :%d",iRet);

	return 0;
}
*/