#include<stdio.h>
void subset(int *b,int m)
{
	int i,j,numOfSub;
	numOfSub=pow(2,n);
	for(i=0;i<numOfSub;i++)
	{
		for(j=0;j<m;j++)
		{
			if(i&(1<<j))
			{
				printf("%d",b[j]);
			}
		}
		printf("\n");
	}
}
int main()
{
	int n,a[30],i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	subset(a,n);
}