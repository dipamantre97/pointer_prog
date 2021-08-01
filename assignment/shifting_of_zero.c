#include<stdio.h>
void print_arr(int size,int arr[])
{
    for(int i=0;i<size;i++)
    {
        printf(" %d ",arr[i]);
    }
}

void swap_data(int *pos1, int *pos2)
{
    int temp=*pos1;
    *pos1=*pos2;
    *pos2=temp;
}

int main()
{
    int arr[]={2,5,7,0,4,0,7,5,8,0};
    int size_arr=(sizeof(arr)/sizeof(int));
    int i=0,j=0;
     int *s=&arr[0];
    int *e=&arr[size_arr-1];
    
    printf("\nBefore modification\n");
    print_arr(size_arr,arr);
    
    while(s!=e)
{
    if(*e!=0)
{
if(*s!=0)
{
s++;
}
else
{
swap_data(s,e);
s++;
e--;
}
}
else
{
e--;
}
}
    printf("\nAfter modification\n");
    print_arr(sizeof(arr)/sizeof(int),arr);
    
    return 0;
}
