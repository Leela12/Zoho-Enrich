#include<stdio.h>
int main()
{
	int x,i=0,j,a[30],flag=0;
	scanf("%d",&x);
	while(scanf("%d",&a[i])>0)
	{
		i++;
	}
	for(j=0;j<i;j++)
	{
		if(a[j]==x)
		{
			flag=1;
			break;
		}
	}
	if(flag==1)
	{
		printf("%d",j);
	}
	else
	{
		printf("-1");
	}
}