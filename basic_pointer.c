#include<stdio.h>
int main()
{
	int a=5;
	int *p=&a;
	printf("value 0f p=address of p=%p\n",p);
	printf("value of a=%d",*p);
}

