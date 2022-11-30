#include<stdio.h>
int print_value(int x)
{
    if(x>0)
    {
        printf("%d ",x);
        print_value(x-1);
    }
}
int main(void)
{
    int n;
    scanf("%d",&n);
    print_value(n);

    return 0;
}
