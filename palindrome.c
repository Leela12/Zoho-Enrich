#include<stdio.h>
void nearestPalindrome(int m)
{
	int i,rev,j,r;
	for(i=m+1;;i++)
	{
		j=i;
		rev=0;
		while(j!=0)
		{
			r=j%10;
			rev=rev*10+r;
			j=j/10;
		}
		if(i==rev)
		{
			printf("%d",i);
			break;
		}
	}
}
int main()
{
	int n;
	scanf("%d",&n);
	nearestPalindrome(n);
}