#include<stdio.h>
int main()
{
	char s[30],a[]="aeiou";
	int c[5]={0},i,l;
	scanf("%[^\n]",s);
	l=strlen(s);
	for(i=0;i<l;i++)
	{
		if(s[i]=='A'||s[i]=='a')
		{
			c[0]++;
		}
		else if(s[i]=='E'||s[i]=='e')
		{
			c[1]++;
		}
		
		else if(s[i]=='I'||s[i]=='i')
		{
			c[2]++;
		}
		
		else if(s[i]=='O'||s[i]=='o')
		{
			c[3]++;
		}
		
		else if(s[i]=='U'||s[i]=='u')
		{
			c[4]++;
		}
	}
	for(i=0;i<5;i++)
	{
		if(c[i]!=0)
		{
			printf("%c %d\n",a[i],c[i]);
		}
	}
}
		