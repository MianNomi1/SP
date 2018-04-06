#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>
#include<errno.h>
extern errno;
int main(){
	uid_t ruid,euid,suid;
	gid_t rgid,egid,sgid;
	getresuid(&ruid,&euid,&suid);	
	printf("real usr id: %d",ruid);
	printf("effective usr id: %d",euid);		
	printf("saved usr id: %d",suid);
	getresgid(&rgid,&egid,&sgid);	
	printf("real grp id: %d",rgid);
	printf("effective grp id: %d",egid);		
	printf("saved grp id : %d",sgid);
return 0;

}
