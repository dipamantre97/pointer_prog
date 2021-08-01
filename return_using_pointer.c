#include<stdio.h>
void fun(int x,int y,int *ps,int *pd,int *pp);
int main()
{
	int a,b,sum,diff,prod;
	a=6;
	b=4;
	fun(a,b,&sum,&diff,&prod);
	printf("sum=%d,diff=%d,product=%d\n",sum,diff,prod);
	return 0;
}
void fun(int x,int y,int *ps,int *pd,int *pp)
{
	*ps=x+y;
	*pd=x-y;
	*pp=x*y;
}

