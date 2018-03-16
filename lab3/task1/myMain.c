#include<stdio.h>
#include"myMath.h"

int main()
{
  int first=12;
  int second=13;
  int result= isEqual(first,second);
  if(result == 1)
   {
      printf("both number are equal...");
   }
  else
  {
    printf("both number are not equal...");
  }
  swap(first,second);
  printf("Swapped... ");
  return 0;
}
