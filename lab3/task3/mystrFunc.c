int isPalindrom(char *arr,int size)
{
  int i;
  int j=size/2;
  int sizz=size;
  int status;
  for(i=0;i<=j;i++)
  {
    if (arr[i]==arr[sizz])
    {
       status=1;
	sizz--;
    }  
   else
    {
      return 0;
    }
  }

  return status;
}
