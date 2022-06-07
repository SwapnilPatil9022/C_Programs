#include<stdio.h>

void Displayi(int iNo)
{
	int i = 1;
	while(i <= iNo)
	{
		printf("*\n");
		i++;
	}
}
	
	void DisplayR(int iNo)
{
	static int i = 1;
	if(i <= iNo)
	{
		printf("*\n");
		i++;
		DisplayR(iNo); 		//Recursive call
	}
}

int main()
{
	int value = 3;
	
	DisplayR(value);
	
	return 0;
}
	