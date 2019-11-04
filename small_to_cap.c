#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char*conver(char s[100])
{
	char*s_cap;
	int len;
	len=strlen(s);
	s_cap=(char*) malloc(len * sizeof(char));;
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

void get_bangali(char c)
{
	if(c=='a'|| c=='A') printf("অ");
	if(c=='b'|| c=='B') printf("ব");
	if(c=='c'|| c=='C') printf("স");
	if(c=='d'|| c=='D') printf("ড");
	if(c=='e'|| c=='E') printf("ই");
	if(c=='f'|| c=='F') printf("ফ");
	if(c=='g'|| c=='G') printf("গ");
	if(c=='h'|| c=='H') printf("হ");
	if(c=='i'|| c=='I') printf("আ");
	if(c=='j'|| c=='J') printf("জ");
	if(c=='k'|| c=='K') printf("ক");
	if(c=='l'|| c=='L') printf("ল");
	if(c=='m'|| c=='M') printf("ম");
	if(c=='n'|| c=='N') printf("ন");
	if(c=='o'|| c=='O') printf("ও");
	if(c=='p'|| c=='P') printf("প");
	if(c=='q'|| c=='Q') printf("খ");
	if(c=='r'|| c=='R') printf("র");
	if(c=='s'|| c=='S') printf("স");
	if(c=='t'|| c=='T') printf("ট");
	if(c=='u'|| c=='U') printf("ইউ");
	if(c=='v'|| c=='V') printf("ভ");
	if(c=='w'|| c=='W') printf("ড");
	if(c=='x'|| c=='X') printf("একস");
	if(c=='y'|| c=='Y') printf("ওআই");
	if(c=='z'|| c=='Z') printf("জেড");
}

char*conver_bengali(char s[100])
{
	char*s_cap;
	int len;
	len=strlen(s);
	s_cap=(char*) malloc(len * sizeof(char));;
	for(int i=0;i<len;i++)
	{
		get_bangali(s[i]);
	}
	return s_cap;
}

int main(void)
{
	char s[100];
	//char p='জ';
	printf("\nEnter the string : ");
	scanf("%s",s);
	printf("%s\n",conver(s));
	//int v;
	//v=(int)p;
	printf("%s\n",conver_bengali(s));
	//printf("%d\n",p);
	return 0;
}