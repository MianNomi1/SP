#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>
int main(){
	printf("real usr id: %d",getuid());
	printf("effective usr id: %d",geteuid());		
	printf("real grp id: %d",getgid());
	printf("effective grp id: %d",getegid());
}
