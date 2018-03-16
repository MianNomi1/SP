#include<stdio.h>
#include "mystr.h"

int main()
{
 
  char arr[5]="abbba";
  int res= isPalindrom(arr,5);
  if(res == 1)
  {
    printf("is a palidrome");
  }
  else
 {
   printf("not a palidrome");
 }
 return 0;
}
