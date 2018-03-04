#include<stdio.h>
int main()
{
	int a[20],c[20][2],i,j,k=0,n,count;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d ",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		count=1;
		for(j=i+1;j<n;j++)
		{
			if(a[i]==a[j])
			{
				a[j]=-1;
				count++;
			}
		}
		if(a[i]!=-1)
		{
			c[k][0]=a[i];
			c[k][1]=count;
			k++;
		}
	}
	for(i=0;i<k;i++)
	{
		for(j=0;j<=1;j++)
		{
			printf("%d ",c[i][j]);
		}
		printf("\n");
	}
}
