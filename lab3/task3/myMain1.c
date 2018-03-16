#include<stdio.h>
#include"myMath.h"
#include"mystr.h"

int main()
{
   char arr[5]="abbba";
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
