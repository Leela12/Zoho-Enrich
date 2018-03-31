#include<stdio.h>
void substring(char s[])
{
	int l=strlen(s),i,j,k=1,c=0,f;
	char t[30];
	t[0]=s[0];
	for(i=1;i<l;i++)
	{
		f=0;
		for(j=0;j<k;j++)
		{
			if(s[i]==t[j])
			{
				f=1;
			}
		}
		if(f==0)
		{
			t[k++]=s[i];
		}
	}
	for(i=0;i<k;i++)
	{
		printf("%c",t[i]);
	}
}
int main()
{
	char a[30];
	scanf("%s",a);
	substring(a);
}