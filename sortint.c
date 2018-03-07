#include<stdio.h>
int main()
{
	char a[30][30],t[30];
	int i,j,n,b,c;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			sscanf(a[i],"%d",&b);
			sscanf(a[j],"%d",&c);
			if(b>c)
			{
				strcpy(t,a[i]);
				strcpy(a[i],a[j]);
				strcpy(a[j],t);
			}
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%s ",a[i]);
	}
}