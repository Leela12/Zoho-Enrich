#include<stdio.h>
int main()
{
	int a,b,c,y[2][2][2];
	for(a=0;a<=1;a++)
	{
		for(b=0;b<=1;b++)
		{
			for(c=0;c<=1;c++)
			{
				y[a][b][c]=a|(b|c);
			}
		}
	}
	printf("A\tB\tC\tY\n");
	for(a=0;a<=1;a++)
	{
		for(b=0;b<=1;b++)
		{
			for(c=0;c<=1;c++)
			{
				printf("%d\t%d\t%d\t%d\n",a,b,c,y[a][b][c]);
			}
		}
	}
}