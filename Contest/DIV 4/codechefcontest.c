#include<stdio.h>
// ageing
int main()
{
    int T,X=20;
    scanf("%d",&T);
    for(int i=1;i<=T;i++)
    {
        scanf("%d",&X);
        int p = X -20;
        printf("%d\n",p+10);
    }
    return 0;
}


#include<stdio.h>
// better deal
int main()
{
    int T,A,B;
    scanf("%d",&T);

    for(int i=1;i<=T;i++)
    {
        scanf("%d",&A);
        scanf("%d",&B);
        int first = 100-A;
        int second = 200 - (B*2);
        if(first>second)
        {
            printf("second\n");
        }
        else if(second>first)
        {
            printf("first\n");
        }
        else if(first==second)
        {
            printf("both\n");
        }
    }
return 0;
}

#include<stdio.h>
// add smallest prime factor
int main()
{
    int T;
    int X,Y;
    for(int i=1;i<=T;i++)
    {
        scanf("%d",&X);
        scanf("%d",&Y);
        if(X%2==0)
        int y = 2;
        int digit = X + y;
        else if()
    }
}