#include<stdio.h>
int main()
{
	int j,x,i=0,a[30];
	scanf("%d",&x);
	while(scanf("%d",&a[i])>0)
	{
		i++;
	}
	for(j=0;j<i;j++)
	{
		if(a[j]==x)
		{
			printf("%d",j);
			break;
		}
		else if(j==i-1&&a[j]!=x)
		{
			printf("-1");
		}
	}
}