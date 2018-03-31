#include<stdio.h>
void substring(char s[])
{
	int l=strlen(s),i,j;
	for(i=0;i<l;i++)
	{
		for(j=i+1;j<l;j++)
		{
			if(s[i]==s[j])
			{
				s[j]=0;
			}
		}
	}
	for(i=0;i<l;i++)
	{
		if(s[i]!=0)
		{
			printf("%c",s[i]);
		}
	}
}
int main()
{
	char a[30];
	scanf("%s",a);
	substring(a);
}