// START 82


#include<stdio.h>
//Candy division
int main()
{
    int t,n;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        if(n%3==0)
        puts("yes");
        else
        puts("no");
    }
    return 0;
}

#include<stdio.h>
//Reach Home
int main()
{
    int t,x,y;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&x,&y);
        if(x*5>=y)
        puts("yes");
        else
        puts("no");
    }
    return 0;
}

#include<stdio.h>
// Min to Max
int main()
{
    int n,t;
    scanf("%d",&t);
    while(t--)
    {
        int count = 0;
        scanf("%d",&n);
        int arr[n];
        for(int i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);
        }
        int temp;
        for(int i=0;i<n-1;i++)
        {
            for(int j=0;j<n-i-1;j++)
            {
                if(arr[j]>arr[j+1])
                {
                    temp=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=temp;
                }
            }
        }
        // for(int i=0;i<n;i++)
        // {
        //     printf("%d ",arr[i]);
        // }
        for(int i=0;i<n;i++)
        {
            if(arr[0]!=arr[i+1])
            {
            count++;
            }
        }
        // for(int i=0;i<n;i++)
        // {
        //     printf("%d ",arr[i]);
        // }
        printf("%d\n",count-1);
    }
}
