#include<stdio.h>
int main()
{
	int n,r,c=0;
	scanf("%d",&n);
	while(n!=0)
	{
		r=n%2;
		n=n/2;
		if(r==1)
		{
			c++;
		}
	}
	printf("%d",c);
}