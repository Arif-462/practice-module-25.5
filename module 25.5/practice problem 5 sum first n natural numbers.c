#include<stdio.h>
int sum(int x)
{
    if(x>0)
    {
        return sum(x-1)+x ;

    }
    return 0;
}
int main(void)
{
    int n;
    scanf("%d",&n);
    int a = sum(n);
    printf("%d",a);
    return 0;
}
