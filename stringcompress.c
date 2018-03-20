#include<stdio.h>
int main()
{
	char s[30];
	int i,j=0,count=1,l;
	scanf("%s",s);
	l=strlen(s);
	char c=s[0];
	for(i=j+1;i<=l;i++)
	{
		if(c==s[i])
		{
			count++;
		}
		else
		{
			if(count>1)
			{
				printf("%c%d",c,count);
			}
			else
			{
				printf("%c",c);
			}
			c=s[i];
			j=i;
			count=1;
		}
	}
}
	