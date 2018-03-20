#include<stdio.h>
int convertbase(int n1, int b1)
{
	int i=0,j,numb=0,a[20];
	while(n1>0)
	{
		a[i++]=n1%b1;
		n1=n1/b1;
	}
	for(j=i-1;j>=0;j--)
	{
		numb=numb*10+a[j];
	}
	return numb;
}
int main()
{
	int n,b;
	scanf("%d %d",&n,&b);
	int num=convertbase(n,b);
	printf("%d",num);
}