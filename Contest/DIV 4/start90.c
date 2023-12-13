#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<limits.h>
// ap free sequences
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int arr[n];
        for(int i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);
        }
        int flag = 0,flag1=0,flag2;
        for(int i=2;i<n;i++)
        { 
            for(int j=i-1;j>=1;j--)
            {
                // printf("i : %d j : %d\n",i,j);
                flag1 = arr[i]-arr[j];
                // printf("f1 : %d\n",flag1);
                for(int k=j-1;k>=0;k--)
                {
                    // printf("j : %d k : %d\n",j,k);
                    flag2 = arr[j]-arr[k];
                    // printf("f2 : %d\n",flag2);
                    if(flag2==flag1)
                    {
                        flag++;
                        break;
                    }
                }
                // printf("fg : %d\n",flag);
                if(flag>0)
                break;
            }
            if(flag>0)
            break;
        }
        puts(flag?"NO":"YES");
    }
    return 0;
}

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<limits.h>
// anti palindrome 
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        char str[n];
        scanf("%s",str);
        int arr[26];
        memset(arr,0,sizeof(arr));
        for(int i=0;i<n;i++)
        {
            arr[str[i]-'a']++;
        }
        int odd = 0;
        int k=0;
        for(int i=0;i<26;i++)
        {
            if(arr[i]%2!=0)
            odd++;
            if(arr[i]>0) // a string will be palindrome if from all the character frequency there is only 0 or 1 character with odd frequency
            k++;
            if(odd>1)
            break;
        }
        if(odd>1) // if odd frequency is greater than one than it can't be palindrome means it's already anti-palindrome
        {
            puts("0"); // as anti-palindrome so ans is zero
            continue;
        }
        else
        {
            if(k==1) // whenever all characters of the string is same
            {
                if(n%2!=0)
                printf("%d\n",2); // if n is odd then we have to changes two character...do it manually in paper
                else
                printf("%d\n",1); // if n is even then changing one character is enough to make the string anti-palindrome
            }
            else
            printf("1\n"); // otherwise in every case changing one character is enough to make the string anti-palindromme
        }
    }
}


#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<limits.h>
// crushed apples and a balance scale
// long long int check(long long);
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long long int m,n;
        scanf("%lld %lld",&m,&n);
        if(m==n)
        {
            puts("YES");
            continue;
        }
        if(n>m)
        {
            puts("NO");
            continue;
        }
        else 
        {
            if(m%n==0)
            {
                
            }
        }
        // if(check(m)==n)
        // puts("YES");
        // else
        // puts("NO");
    }
    return 0;
}
// long long int check(long long int m)
// {
//     if(m%2!=0)
//     return 0;
//     if(m==0)
//     return 0;
//     if(m==1)
//     return 0;
//     return m/2+check(m/2);
// }

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<limits.h>
// printing binary array
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int arr[n];
        int temp[n];
        for(int i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);
            if(arr[i]==1)
            temp[i] = 0;
            else
            temp[i] = 1;
        }
        for(int i=0;i<n;i++)
        {
            printf("%d ",temp[i]);
        }
        printf("\n");
    }
}

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<limits.h>
// favourite numbers
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        if(n%2==0 && n%7==0)
        printf("Alice\n");
        else if(n%2!=0 && n%9==0)
        printf("Bob\n");
        else
        printf("Charlie\n");
    }
    return 0;
}


#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<limits.h>
// learning sql
int main()
{
    int r,c,e;
    scanf("%d %d %d",&r,&c,&e);
    printf("%d",(r+e)*c);
    return 0;
}