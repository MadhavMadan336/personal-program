#include <stdio.h>

int main()
{
    int a=5,b=5,c=7,result;
      result=(a==b&&a>b);
      printf("%d\n",result);
         result=(a==b&&c>a);
         printf("%d\n",result);
      result=(a==b||a>b);
      printf("%d\n",result);
         result=(a==c||a>c);
         printf("%d\n",result);
      result=(a!=b);
      printf("%d\n",result);
           result=(a!=c);
           printf("%d\n",result);
    return 0;
}


