//question no 1

#include<stdio.h>
#include<stdlib.h>
int main()
{
int size=10;
int *arr=(int*)malloc(sizeof(int)*size);

int i;
for(i=0;i<size;i++)
{
   int val=0;
   arr[i]=val+1;
   printf("%d ", arr[i]);
}
for(i=0;i<size;i++)
{

   printf("%d ", arr[i]);
}

int newsize=20;
int *nptr=(int*)realloc(arr, sizeof(int)*newsize);
for(i=0;i<newsize;i++)
{
   int val=0;
   arr[i]=val+1;
   printf("%d ", arr[i]);
}
for(i=0;i<newsize;i++)
{

   printf("%d ", arr[i]);
}

free(arr);
return 0;
}
