#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<limits.h>
//parliament
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,x;
        scanf("%d %d",&n,&x);
        float temp = (float)n/2;
        float temp1 = (float)x;
        (temp1>=temp)?puts("YES"):puts("NO");
    }
    return 0;
}


#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<limits.h>
// monopoly
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int arr[4];
        scanf("%d %d %d %d",&arr[0],&arr[1],&arr[2],&arr[3]);
        int sum;
        int result = 0;
        for(int i=0;i<4;i++)
        {
            sum = 0;
            for(int j=0;j<4;j++)
            {
                if(i==j)
                continue;
                sum = sum + arr[j];
            }  
            if(arr[i]>sum)
            result = arr[i];
        }
        (result>0)?puts("YES"):puts("NO");
    }
    return 0;
}

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<limits.h>
// DDMM OR MMDD
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        char str[20];
        scanf("%s",str);
        char datee[]= {str[0],str[1],'\0'};
        int date = atoi(datee);
        char monthe[] = {str[3],str[4],'\0'};
        int month = atoi(monthe);
        if(date<=12 && month >12)
        puts("MM/DD/YYYY");
        else if(date>12 && month<=12)
        puts("DD/MM/YYYY");
        else
        puts("BOTH");
    }
    return 0;
}

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<limits.h>
// plus 2 or minus 1
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int y;
        scanf("%d",&y);
        if(y==0)
        printf("%d\n",1);
        else
        printf("%d\n",(3*y));
    }
    return 0;
}


#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<limits.h>
//positive or negative subarrays
//codechef
int mypower(int n,int x);
int sum(int n);
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int a[n],b[n],c[n];
        int pos=0,neg=0,temp;
        for(int i=0;i<n;i++)
        {
            a[i]=mypower(2,i);
            scanf("%d",&b[i]);
            // if(b[i]<0)
            // neg++;
            c[i]=a[i]*b[i];
        }
    //     int result = (sum(n)-(4*neg));
    //     (result>0)?printf("%d\n",result) : printf("%d\n",(-1)*result);
        int k,j;
        for(int i=0;i<n;i++)
        {
            j=i+1;
            k = n-1-i;
            // if(c[i]>0)
            // pos++;
            // else
            temp = 0;
            // neg++;
            for(int q=i;q<n;q++)
            {
                temp = 0;
                for(int p = i;p<=j;p++)
                {
                    temp = temp + c[p];
                }
                j++;
                temp = temp + c[q];
                if(temp>0)
                pos++;
                else
                neg++;
            }
 
        (pos>=neg)?printf("%d\n",(pos-neg)) : printf("%d\n",(neg-pos));
        }
    }
    return 0;
}
int sum(int n)
{
    int summation = 0;
    for(int i=1;i<=n;i++)
    {
        summation = summation + i;
    }
    return summation;
}
int mypower(int x,int n)
{
    int powervalue=1;
    while(n--)
    {
        powervalue = powervalue*x;
    }
    return powervalue;
}



/// UPSOLVING
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<limits.h>
//positive or negative subarrays
//codechef
// accepted solution
int main()
{
    long long int t;
    scanf("%lld",&t);
    while(t--)
    {
        long long int n;
        scanf("%lld",&n);
        long long int b[n];
        long long int subarray = (n*(n+1))/2; // total number of subarrays
        long long int negsubarrays=0;
        for(int i=0;i<n;i++)
        {
            scanf("%lld",&b[i]);
            if(b[i]<0)
            negsubarrays = negsubarrays + i + 1; // where will -1 ,we will get exactly (i+1) negative subarrays for this index
            // for clarification do it in paper
        }
        long long int result = subarray - (2*negsubarrays);
        result = llabs(result);
        printf("%lld\n",result);
    }
    return 0;
}
