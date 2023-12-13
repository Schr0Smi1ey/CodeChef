//START 80

#include<stdio.h>
//just one more episode
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
// single use attack
int main()
{
    int t,h,x,y;
    scanf("%d",&t);
    while(t--)
    {
        int i=0;
        scanf("%d %d %d",&h,&x,&y);
        int r = h-y;
        i++;
        while(r>0)
        {
            r=r-x;
            i++;
            if(r<=0)
            break;
        }
        printf("%d\n",i);
    }
    return 0;
}

#include<stdio.h>
// running comparison
int main()
{
    int t,n;
    int j;
    scanf("%d",&t);
    while(t--)
    {
        j = 0;
        scanf("%d",&n);
        int alice[n],bobs[n];
        for(int i=0;i<n;i++)
            {
            scanf("%d",&alice[i]);
            }
        for(int i=0;i<n;i++)
        {
            scanf("%d",&bobs[i]);
        }
        for(int i=0;i<n;i++)
        {
            if(!(alice[i]>2*bobs[i]) && !(bobs[i]>2*alice[i]))
            {
                j++;
            }
            else if(alice[i]==bobs[i])
            j++;
        }
        printf("%d\n",j);
    }   
}

#include<stdio.h>
// equal elements(wrong)
int main()
{
    int t,n;
    scanf("%d",&t);
    while(t--)
    {
        int j=0;
        scanf("%d",&n);
        int test[n];
        for(int i=0;i<n;i++)
        {
            scanf("%d",&test[i]);
        }
        for(int i=0;i<(n-1);i++)
        {
            if(test[i]!=test[i+1])
            {
            test[i]=test[i+1];
            j++;
            }
            printf("r = %d\n",test[0]);
        }
    printf("%d\n",j);
    }
}

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
// equal elements
// passed
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int arr[n];
        int fre[n];
        int flag=0;
        for(int i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);
        }
        memset(fre,0,sizeof(fre));
        int max = -1;
        for(int i=0;i<n;i++)
        {
            fre[arr[i]-1]++;
            if(fre[arr[i]-1]>max)
            max=fre[arr[i]-1];
        }
        printf("%d\n",n-max);
    }
    return 0;
}