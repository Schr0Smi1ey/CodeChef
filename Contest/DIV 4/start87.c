#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
// four tickets
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int x;
        scanf("%d",&x);
        int total = 4*x;
        if(total>1000)
        printf("NO\n");
        else
        printf("YES\n");
    }
    return 0;
}

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
// buy ten packets
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int x,y;
        scanf("%d %d",&x,&y);
        float x1=(float)x/2;
        float y1=(float)y/4;
        int cost,rem;
        if(x1>y1)
        {
            cost = 2*y;
            cost = cost + x;
        }
        else
        {
            cost = 5*x;
        }
        printf("%d\n",cost);
    }
    return 0;
}

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
// return the change
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int x;
        scanf("%d",&x);
        int cost;
        if(x%10>=5)
        {
            cost = 100 - (x+(10-(x%10)));
        }
        else
        {
            cost = 100 - ((x-(x%10)));
        }
        printf("%d\n",cost);
    }
    return 0;
}

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<limits.h>
// existence
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long long int x;
        long long int y;
        scanf("%lld %lld",&x,&y);
        long long int leftside = (x*x*x*x) + 4*y*y;
        long long int rightside = 4*y*x*x;
        if(leftside==rightside)
        printf("YES\n");
        else
        printf("NO\n");
    }
}

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
// AB_plus_c
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long long int x;
        long long int a,b,c;
        scanf("%lld",&x);
        if(x>2)
        {
            if(x<1000001)
            {
                printf("1 1 %lld",x-1);
                printf("\n");
            }
            else
            {
                long long int p = 1000000;
                long long int t = x%1000000;
                if(t>0)
                {
                    printf("%lld 1000000 %lld",x/p,t);
                    printf("\n");
                }
                else
                {
                    t=(x-1)/p;
                    long long int c = (x-1)%p;
                    printf("%lld %lld %lld",p,t,c+1);
                    printf("\n");
                }
            }
        }
        else
        {
            if(x==1)
            printf("-1\n");
            else
            printf("1 1 1\n");
        }
    }
    return 0;
}