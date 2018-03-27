//question no 2

#include <stdio.h>
#include <sys/types.h>

int main()
{
  int *p1,*p2,*p3,*p4;
  printf("before malloc : ", sbrk(0));
  int p1=(int *) malloc(4);
  printf("p1 : %x\n", p1);
  int p2=(int *) malloc(4);
  printf("p2 : %x\n", p2);
  int p3=(int *) malloc(4);
  printf("p3 : %x\n", p3);
  int p4=(int *) malloc(4);
  printf("p4 : %x\n", p4);
  printf("in ending  : ", sbrk(0));
  return 0;
}
