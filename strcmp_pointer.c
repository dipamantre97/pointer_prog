#include<stdio.h>
#include<string.h>
int ustrcmp(char *str1,char *str2)
{
        while(*str1==*str2))
        {
               if(str1=='\0')
		       return 0;
	       str1++;
                str2++;
        }
        return (*str1-*str2);
}


int main()
{
        char str1[50],str2[50];
        printf("enter str1");
        gets(str1);
        printf("enter str2");
        gets(str2);
        printf("%d",ustrcmp(str1,str2));
}
strcpy_pointer.c [unix] (08:30 30/07/2021)                
