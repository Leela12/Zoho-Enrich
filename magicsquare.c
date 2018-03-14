#include<stdio.h>
int main()
{
	int n,a[30][30];
	scanf("%d",&n);
	int i=0,j=n/2,k,m=n*n;
	for(k=1;k<=m;k++)
	{
		a[i][j]=k;
		i--;
		j++;
		if(k%n==0)
		{
			i=i+2;
			j--;
		}
		else
		{
			if(j==n)
			{
				j=j-n;
			}
			else if(i<0)
			{
				i=i+n;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
}