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
