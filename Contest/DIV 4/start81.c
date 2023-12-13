// START 81

#include<stdio.h>
//sunny day
int main()
{
    int t,x;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&x);
        if(x>24)
        {
            printf("yes\n");
        }
        else
        {
            printf("no\n");
        }
    }
    return 0;
}

#include<stdio.h>
//maximum capacity
int main()
{
    int t,x,y;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&x,&y);
        int mul = x*y;
        if(mul>500 || x>8)
        {
            printf("no\n");
        }
        else
        {
            printf("yes\n");
        }
    }
    return 0;
}


#include<stdio.h>
// divide pages
int main()
{
    int t,n;
    scanf("%d",&t);
    while(t--)
    {
        int sum=0;
        int sum1=0;
        scanf("%d",&n);
        int book[n];
        for(int i=0;i<n;i++)
        {
            scanf("%d",&book[i]);
        }
        for(int j=0;j<n/2;j++)
        {
            sum+=book[j];
        }
        // printf("%d",sum);
        for(int k=n/2;k<n;k++)
        {
            sum1+=book[k];
        }
        // printf("%d",sum1);
        if(sum%2==0)
        {
            if(sum1%2==0)
            {
                printf("yes\n");
            }
            else
            {
                printf("no\n");
            }
        }
        else if(sum%2!=0)
        {
            if(sum1%2!=0)
            {
                printf("yes\n");
            }
            else
            {
                printf("no\n");
            }
        }
    }
    return 0;
}