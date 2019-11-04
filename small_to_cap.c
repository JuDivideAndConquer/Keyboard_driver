#include<stdio.h>
#include<string.h>

char*conver(char s[100])
{
	char*s_cap;
	int len;
	len=strlen(s);
	s_cap=new char[len];
	for(int i=0;i<len;i++)
	{
		if(s[i]>='a' && s[i]<='z')
		{
			s_cap[i]=s[i] - 32;
		}
		else
		{
			s_cap[i]=s[i];
		}
	}
	return s_cap;
}

char*conver_bengali(char s[100])
{
	char*s_cap;
	int len;
	len=strlen(s);
	s_cap=new char[len];
	for(int i=0;i<len;i++)
	{
		s_cap[i]=s[i] + 15;
	}
	return s_cap;
}

int main(void)
{
	char s[100];
	printf("\nEnter the string : ");
	scanf("%s",s);
	printf("%s\n",conver(s));
	printf("%s\n",conver_bengali(s));
	return 0;
}