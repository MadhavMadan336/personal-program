#include<stdio.h>
int main()
{
    int a,b,c;
    printf("\n Enter three value");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b&&b>c)
    printf("\n largest no=%d",a);

    else if(b>a&&b>c)
    printf("\n b is largest%d",b);

    else
    printf("\n c is the largest%d",c);
    
    return 0;
}
