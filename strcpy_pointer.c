#include<stdio.h>
#include<string.h>
char * ustrcpy(char *str1,char *str2)
{
	while((*str1=*str2)!='\0')
	{
		str1++;
		str2++;
	}
	return str1;
}


int main()
{
	char str1[50],str2[50];
	printf("enter str1");
	gets(str1);
	ustrcpy(str1,str2));
	printf("str1=%s\n str2=%s",str1,str2);
}


