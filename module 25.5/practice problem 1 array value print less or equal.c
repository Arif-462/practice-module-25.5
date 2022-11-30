#include<stdio.h>
int input_array(int arr[], int size)
{
    for(int i=0; i<size; i++)
    {
        scanf("%d",&arr[i]);
    }
}

void sub_array_element_count(int arr[], int size)
{
    int k,count=0;
    scanf("%d",&k);
    for(int i=0; i<size; i++)
    {
        if(arr[i]!= k)
        {
            count ++ ;
        }
    }
    printf("%d\n", count);
}
int main(void)
{
    int n;
    scanf("%d",&n);
    int ara[n];
    input_array(ara, n);
    sub_array_element_count(ara, n);
    return 0;

}


/*

int main(void)
{
    int n,k;
    scanf("%d",&n);
    int arr[n];

    int count= 0;

    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);

    }

    scanf("%d",&k);
    for(int i=0; i<n; i++)
    {
        if(arr[i] != k )
        {
           printf("%d ",arr[i]);
           count++;
        }

    }
    printf("\n%d\n",count);

    return 0;
}
*/
