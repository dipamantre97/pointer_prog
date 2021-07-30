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
	printf("enter str2");
	gets(str2);
	printf("%s",ustrcpy(str1,str2));
}


