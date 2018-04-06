#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>
#include<errno.h>

int main(){
	
	int f = fork();
	if(f==-1){
	
	printf("fork failed \n\n");
	exit(1);
}

if(f==0){
	printf("mychild pid %d\n",(long)getpid);
	printf("mychild ppid %d\n",(long)getppid);

}
else{
	printf("my pid %d\n",(long)getpid);
	printf("my ppid %d\n",(long)getppid);

}
}
