#include<stdio.h>
#include<string.h>
int ustrlen(char *str)
{
	char *p=str;
	while(*p!='\0')
		p++;
	return p-str;
}

int main()
{
	char s[50];
	printf("enter string");
	gets(s);
	printf("%d",ustrlen(s));
}


