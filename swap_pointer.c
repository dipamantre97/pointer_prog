#include<stdio.h>
int main()
{
	int x=10,y=20,temp;
	int *a=&x;
	int *b=&y;
	printf("before swapping x=%d,y=%d",x,y);
	temp=*a;
	*a=*b;
	*b=temp;
	printf("after swapping x=%d,y=%d",x,y);

}


