#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
// largest and second largest
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
        long long int max;
        int first = 1;
        int second = 1; // arr[i] most minimum value can be 1
        for (int i = 0; i < n; ++i) 
        {
            if (first < arr[i]) 
            {
                second = first;
                first = arr[i];
            } 
            else
            if (arr[i] > second && arr[i] != first) 
            {
                second = arr[i];
            }
        }
        max = first + second;
    
        printf("%lld\n",max);
    }
    return 0;
}

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
// chef and good array
// void sort(int *arr,int n);
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
        // sort(arr,n);
        int sum[n];
        memset(sum,0,sizeof(sum));
        int i=0,j=i+1,k=0;
        int temp,count=0;
        while(i<=n-2)
        {
            // if(arr[i]==arr[j])
            // {
            //     while(arr[i]==arr[j])
            //     {
            //         temp++;
            //         i++;
            //         j++;
            //     }
            //     if(temp>count)
            //     count=temp;
            // }
            // else
            // i++;
            // j++;
            sum[k]=arr[i]+arr[j];
            i+=2;
            j+=2;
            k++;
        }
        
        for(int i=0,j=i+1;i<(n/2);i++)
        {
            // if(arr[i]==arr[j])
            // {
            //     while(arr[i]==arr[j])
            //     {
            //         temp++;
            //         i++;
            //         j++;
            //     }
            //     if(temp>count)
            //     count=temp;
            // }
            // else
            // i++;
            // j++;
            printf("%d ",sum[i]);
        }
        printf("%d\n",n-count);
    }
    return 0;
}
// void sort(int *arr,int n)
// {
//     int i,j,temp;
//     for(i=0;i<n;i++)
//     {
//         for(j=i+1;j<n;j++)
//         {
//             if(arr[i]>arr[j])
//             {
//                 temp=arr[i];
//                 arr[i]=arr[j];
//                 arr[j]=temp;
//             }
//         }
//     }
// }


#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
//maximum and or
long long int function(long long x,long long a,long long b);
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long long int a,b,c;
        scanf("%lld %lld %lld",&a,&b,&c);
        long long int x = pow(2*1.0,c*1.0)-1;
        long long int value,temp,count=1;
        temp = function(x,a,b);
        while(x--)
        {
            value = function(x,a,b);
            if(value==temp)
            count++;
            if(x<x/2)
            break;
        }
        printf("%lld\n",count);
    }
    return 0;
}
long long int function(long long x,long long a,long long b)
{
    long long int result;
    result = (b | x) - (a & x);
    return result;
}

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
// unstable subarray



// the strategy : we will count the total number of possibilities of sub array .then will remove the stable array from this
// stable array : when arr[i]==arr[j](j could be any index) the then the subarray becomes stable.
// couting of subarray : if array of legth 4 for index 0 subarray will be((0.1),(0,2),(0,3))=3 like that  index 1 subarray 2..for index 2 subarray will be 1
// if we noticed then it becoming a series of 1 to (n-1);
// then we will sort the array in descending order
// will traverse the array while arr[i]==arr[i+1] will count a variable(m). sum(1 to m) will be stable array till i.so will minus it from stable array and will set m to 1;


// int summation(int *arr,int i,int j);
long long possiblesubarray(int n);
int comparison(const void *a,const void *b);
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
        long long int count = possiblesubarray(n);
        // printf("p : %lld\n",count);
        qsort(arr,n,sizeof(int),comparison);
        printf("p : %lld\n",count);
        // for(int i=0;i<n;i++)
        // {
        //     printf("%d ",arr[i]);
        // }
        int stablearray = 1;
        for(int i=0;i<n-1;i++)
        {
            if(arr[i]==arr[i+1])
            {
                stablearray++;
            }
            else
            {
                count = (long long)count - (long long)possiblesubarray(stablearray);
                // printf("p : %lld\nstable : %lld\n",count,stablearray); // deleting the stable arrays from the total
                stablearray = 1; 
            }
        }
        count = count - possiblesubarray(stablearray);
        printf("p : %lld\n",count);

        // for(int i=0;i<n-1;i++)
        // {
        //     for(int j=i+1;j<n;j++)
        //     {
        //         // int value = summation(arr,i,j);
        //         // if(value!=0)
        //         if(arr[i]!=arr[j])
        //         count++;
        //     }
        // }
        printf("%lld\n",count);
    }
    return 0;
}

long long possiblesubarray(int n) // summation of 1 to n-1
{
    long long sum = ((long long)n - 1LL) * n / 2LL;
    // printf(" sum : %lld\n",sum);
    return (long long)sum;
}
// int summation(int *arr,int i,int j)
// {
//     int sum =0 ;
//     int p=0,q=0;
//     int r=j;
//     while(i+1<=r)
//     {
//         sum = sum + (arr[i] - arr[i+1]);
//         i++;
        
//     }
//     return sum;
// }
int comparison(const void *a,const void *b)
{
    return (*(int *)a - *(int *)b);
}

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
// online or offline
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,m;
        scanf("%d %d",&n,&m);
        float discounted = n-(n*0.1);
        if((int)discounted<m)
        printf("ONLINE\n");
        else if(discounted==m)
        printf("EITHER\n");
        else
        printf("DINING\n");
    }
    return 0;
}

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
// masterchef finals
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int x;
        scanf("%d",&x);
        if(x<=10)
        printf("YES\n");
        else
        printf("NO\n");
    }
    return 0;
}