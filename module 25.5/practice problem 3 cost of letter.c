#include<stdio.h>
#include<string.h>
#include<math.h>
int sumation_input_string()
{
    char s[100];
    scanf("%s",s);
    int sum=0;
    for(int i=0; s[i]!='\0'; i++)
    {
        s[i] = s[i]-96;
        sum = sum + s[i];
    }
    return sum;
}

void check_power()
{
    int sum = sumation_input_string();

    int ans = 0;
    int flag = 1;
    while(sum>1)
    {
        if(sum % 2 == 0)
        {
            sum = sum / 2 ;
            ans++;
        }
        else
        {
            flag=0;
            break;
        }
    }

    if(flag == 1)
    {
        printf("YES\n");
        printf("cost = 2^%d\n",ans);
    }
    else
    {
        printf("NO\n");
    }
}

int main(void)
{
    check_power();
    return 0;
}



/*

int main()
{
    char s[50];
    scanf("%s",s);
    int len = strlen(s);
    int sum=0;
    for(int i=0; i<len; i++)
    {
        s[i]=s[i]-96;
        sum = sum + s[i];
    }

    //printf("\n%d\n",sum);

    int ans = 0;
    int flag = 1;
    while(sum>1)
    {
        if(sum % 2 == 0)
        {
            sum = sum / 2 ;
            ans++;
        }
        else
        {
            flag=0;
            break;
        }
    }

    if(flag == 1)
    {
        printf("YES\n");
        printf("cost = 2^%d\n",ans);
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}
*/
