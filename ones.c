#include<stdio.h>
int main()
{
	int n,r,s,c=0;
	scanf("%d",&n);
	while(n>0)
	{
		r=(n/2)*2;
		s=n-r;
		if(s==1)
		{
			c++;
		}
		n=n/2;
	}
	printf("%d",c);
}