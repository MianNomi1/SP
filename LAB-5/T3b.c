#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>
#include<errno.h>

void pr_exit(int status)
{
	if(WIFEXITED(status)){
	printf("normal termination\n ");
}

}

int main(){
	
	int f = fork();
	if(f==-1){
	
	printf("fork failed \n\n");
	exit(1);
}

if(f==0){
	exit(-1);
}
else{
	wait(&status);
	if(WIFEXITED(status)==0){
	printf("normal termination, exitstatus=%d\n", WEXITSTATUS(status));
}
	printf("my pid %d\n",(long)getpid);
	printf("my ppid %d\n",(long)getppid);

}
}
