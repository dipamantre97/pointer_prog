#include<stdio.h>
int main()
{
	int a,b,c,*p,*q;
	printf("enter two no");
	scanf("%d %d",&a,&b);
	p=&a;
	q=&b;
	c=*p+*q;
	printf("sum=%d",c);
}
