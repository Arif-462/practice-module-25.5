#include<stdio.h>
int sorting_array(int ara[], int size)
{
    for(int i=0; i<size; i++)
    {
        scanf("%d",&ara[i]);
    }

    int temp = 0;

    for(int i=0; i<size; i++)
    {
        for(int j=i+1; j<size; j++)
        {
            if(ara[i]>ara[j])
            {
                temp=ara[i];
                ara[i]=ara[j];
                ara[j]=temp;
            }
        }

    }

//    //int i;
//    for(int i=0; i<size; i++)
//    {
//        printf("%d ",ara[i]);
//    }
//     printf("\n");

}

void ith_largest_element(int ara[], int size)
{
    int k;
    scanf("%d",&k);
    int count=1;

    for(int i=size-1; i>=0; i--)
    {
        count++;
        if(count==k)
        {
            printf("%dth largest element = %d\n",k,ara[i-1]);
            break;
        }
    }
}

void ith_smallest_element(int ara[], int size)
{
    int k;
    scanf("%d",&k);
    int count=1;
    for(int i=0; i<size; i++)
    {
         count++;
        if(count==k)
        {
            printf("%dth smallest element = %d\n",k,ara[i+1]);
            break;
        }
    }
}

int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    sorting_array(arr, n);
    ith_largest_element(arr, n);
    ith_smallest_element(arr, n);

    return 0;
}
