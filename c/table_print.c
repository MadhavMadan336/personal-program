#include<stdio.h>
int main()
{
    int i,n;
    printf("\n Enter Number");
    scanf("%d",&n);
    i=1;//initilization
while (i<=n)
{
    printf("\n%d",i);
    i=++i;
}
return 0;
}
