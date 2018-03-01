#include<stdio.h>
int main()
{
	int n,x,i,a[30];
	scanf("%d",&x);
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d ",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]==x)
		{
			printf("%d",i);
			break;
		}
		else if(i==n-1&&a[i]!=x)
		{
			printf("-1");
		}
	}
}