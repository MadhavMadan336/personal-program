#include<stdio.h>
int main()
{
    int n;
    printf("Enter element how you print::>>>>");
    scanf("\n%d",&n);
	int a[n],i,sum=0;
	for(i=0;i<n;i++)
	{
		printf("\n enter the aray element:::>>>>");
		scanf("%d",&a[i]);
	}
		for(i=0;i<n;i++)
		{
			sum=sum+a[i];
		}
		printf("Array Element sum=\n%d",sum);
return '0';
}
