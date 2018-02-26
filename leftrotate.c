#include<stdio.h>
int main()
{
	int n,nt,r,i=0,a[30],j,k=0,c=0;
	scanf("%d",&n);
	scanf("%d",&nt);
	while(n!=0)
	{
		r=n%10;
		n=n/10;
		a[i++]=r;
	}
	for(j=i-1;j>=0;j--)
	{
		a[k++]=a[j];
	}
        while(c!=nt)
	{
		for(j=0;j<k-1;j++)
		{
			a[j]=a[j++];
		}
		a[k]=a[0];
		c++;
	}
	for(j=0;j<k;j++)
	{
		printf("%d",a[j]);
	}
}
			
		
		
		