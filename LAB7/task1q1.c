#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<fcntl.h>

int main(int size,char *args[])
{
char buff[256];
int n;
 int fd1 = open(args[1],0);
int fd2 = open(args[2],O_CREAT|O_WRONLY,0777);
  	for(;;)
	{
		 n=read(fd1,buff,255);
			if(n<=1)
		        {
			  exit(-n);
			}
	       
		write(fd2,buff,n);

	}

return 0;
}
