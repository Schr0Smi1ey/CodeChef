#include<stdio.h>
int main()
//burgers
{
    int A,B,T,i;

    scanf("%d",&T);
    for(i=0;i<T;i++)
    {
        scanf("%d %d",&A,&B);
        if(A<=B)
        printf("%d\n",A);
        else
        printf("%d\n",B);
    }
    return 0;
}

#include <stdio.h>
//age limit

int main(void) 
{
    int X,Y,A,T,i;
    scanf("%d",&T);
    for(i=0;i<T;i++)
    {
        scanf("%d %d %d",&X,&Y,&A);
        if(A>=X && A<Y)
        printf("YES\n");
        else
        printf("NO\n");
    }
	return 0;
}


#include <stdio.h>
//squats
int main()
 {
	int X,i,t;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
	    scanf("%d",&X);
	    int output = X*15;
	    printf("%d\n",output);
	}
	return 0;
}

#include <stdio.h>
//water consumption
int main()
 {
	int X,t,i;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
	    scanf("%d",&X);
        if(X>=2000)
        printf("YES\n");
        else
        printf("NO\n");
	}
	return 0;
}

#include<stdio.h>
//GDTURN
int main()
{
    int T,X,Y;
    scanf("%d",&T);
    for(int i=1;i<=T;i++)
    {
        scanf("%d %d",&X,&Y);
        if(X + Y >6)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
}

#include<stdio.h>
//biriyani classes
int main()
{
    int T,X,Y;
    scanf("%d",&T);
    for(int i=1;i<=T;i++)
    {
        scanf("%d %d",&X,&Y);
        printf("%d\n",X*Y);
    }
    return 0;
}


#include<stdio.h>
//counting words
int main()
{
    int t,n,m;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&n,&m);
        printf("%d\n",m*n);
    }
}

#include<stdio.h>
//N buttons 1 Bulb
int main()
{
    int t,n;
    char s[1000],r[1000];
    scanf("%d",&t);
    while(t--)
    {
        int i,count=0;
        scanf("%d",&n);
        scanf("%s",s);
        scanf("%s",r);
        for(i=0;i<n;i++)
        {
            if(s[i]!=r[i])
            count++;
        }
        if(count%2==0)
        printf("1\n");
        else
        printf("0\n");
    }
    return 0;
}

#include<stdio.h>
#include<math.h>
// kepler's law
int main()
{
    int c,t1,t2,r1,r2;
    float x,y;
    scanf("%d",&c);
    while(c--)
    {
        scanf("%d %d %d %d",&t1,&t2,&r1,&r2);
        x= (float)(t1*t1)/(float)(r1*r1*r1);
        y= (float)(t2*t2/(float)(r2*r2*r2));
        // printf("%f %f ",x,y);
        if(x==y)
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
//Lucky Four
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int count=0,n;
        scanf("%d",&n);
        while(n>0)
        {
            if(n%10==4)
            count++;
            n=n/10;
        }
        printf("%d\n",count);
    }
    return 0;
}

#include<stdio.h>
// Balls and Boxes
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,k;
        scanf("%d %d",&n,&k);
        if(n>=(k*(k+1)/2))
        puts("yes");
        else
        puts("no");
    }
    return 0;
}


#include<stdio.h>
//kitchen timetable
int main()
{
    int t,n;
    scanf("%d",&t);
    while(t--)
    {
        int i,count=0;
        scanf("%d",&n);
        int a[n],b[n];
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        for(i=0;i<n;i++)
        {
            scanf("%d",&b[i]);
        }
        for(i=0;i<(n);i++)
        {
            if(a[0]>=b[0] && i==0)
            count++;
            else if((a[i]-a[i-1])>=(b[i]) && i!=0)
            count++;
        }
        printf("%d\n",count);
    }
    return 0;
}

#include<stdio.h>
//Dark Light
int main()
{
    int t,n,k;
    int c1=0,c2=0;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&n,&k);
        if(k==0)
        {
            if(n%4==0)
            puts("off");
            else
            puts("on");
        }
        else if(k==1)
        {
            if(n%4==0)
            puts("on");
            else
            puts("ambiguous");
        }
    }
        return 0;
}

#include<stdio.h>
#include<math.h>
// love square hate cubes
long long cube(long long);
int main()
{
    long long int n,t;
    scanf("%lld",&t);
    while(t--)
    {
        // int i=1,j,count;
        // long long int square;
        // scanf("%d",&n);
        // while(1)
        // {
        //     square = i*i;
        //     j=1;
        //     count=0;
        //     while((j*j*j)<=square)
        //     {
        //         count++;
        //         j++;
        //     }
        //     if(i - count == n)
        //     break;
        //     i++;
        // }

        // printf("%lld\n",square);
        long long int s,n,c=0,x;
        scanf("%d",&n);
        while(x!=n)
        {
            s=n+c;
            c=cube(pow(s,2));
            x=s-c;
        }
        printf("%lld\n",s*s);
    }
}
long long cube(long long a)
{
    long long start=0,end=3000000;
    while(end-start>1)
    {
        long long mid = (end-start)/2;
        if((mid*mid*mid)>a)
        end=mid;
        else
        start=mid;
    }
    return start;
}


#include <stdio.h>
#include <math.h>
//love square hate cubes 
// correct answer
long long find(long long n) {
    long long start = 0, end = 3e6;
    while (end - start > 1) {
        long long mid = (start + end) / 2;
        if ((mid * mid * mid) > n)
            end = mid;
        else
            start = mid;
    }
    return start;
}

int main(void) {
    // your code goes here
    int t;
    scanf("%d", &t);
    while (t--) {
        long long n;
        scanf("%ld", &n);
        long long a=0, b, x;
        while (x != n) {
            b = n + a;
            a = find(pow(b,2));
            x = b - a;
        }
        printf("%ld\n",b*b);
    }
    return 0;
}

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
// sum of digits
int main()
{
    long long int n,t;
    scanf("%lld",&t);
    while(t--)
    {
        long long int sum = 0;
        scanf("%lld",&n);
        while(n!=0)
        {
            sum = sum + (n%10);
            n/=10;
        }
        printf("%lld\n",sum);
    }
    return 0;
}

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
// Enormous input test
int main()
{
    long long int n,k,a;
    long long int count = 0;
    scanf("%lld %lld",&n,&k);
    while(n--)
    {
        scanf("%lld",&a);
        if(a%k==0)
        count++;     
    }
    printf("%lld",count);
    return 0;
}

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
// Game between friends
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int a,b,c,d;
        scanf("%d %d %d %d",&a,&b,&c,&d);
        if(a>b || a==b)
        b = b + c;
        else
        a=a+c;
        if(a>b || a==b)
        b=b+d;
        else
        a=a+d;
        if(a>b || a==b)
        printf("N\n");
        else 
        printf("S\n");
    }
    return 0;
}

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
// equal elements
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

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
// easy pronunciation
int checkchar(char c);
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        getchar();
        char str[n+1];
        gets(str);
        int k,flag;
        for(int i=0;i<n;i++)
        {
            flag=0;
            k=i;
            if(checkchar(str[k])==0)
            {
                k++;
                if(checkchar(str[k])==0)
                {
                    k++;
                    if(checkchar(str[k])==0)
                    {
                        k++;
                        if(checkchar(str[k])==0)
                        {
                            flag++;
                            break;
                        }
                    }
                }
            }
        }
        if(flag>0)
        printf("NO\n");
        else
        printf("YES\n");
    }
    return 0;
}
int checkchar(char c)
{
    char str[]="aeiou";
    if(strchr(str,c)==NULL)
    return 0;
    else
    return -1;
}

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
// programming languages
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int arr[6];
        for(int i=0;i<6;i++)
        {
            scanf("%d",&arr[i]);
        }
        if((arr[0]==arr[2] || arr[0]==arr[3]) && (arr[1]==arr[2] || arr[1]==arr[3]))
        printf("1\n");
        else if((arr[0]==arr[4] || arr[0]==arr[5]) && (arr[1]==arr[4] || arr[1]==arr[5]))
        printf("2\n");
        else
        printf("0\n");
    }
    return 0;
}

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
//ATM machine
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,k;
        scanf("%d %d",&n,&k);
        int arr[n];
        int result[n];
        memset(result,0,sizeof(result));
        for(int i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);
        }
        for(int i=0;i<n;i++)
        {
            if(arr[i]<=k)
            {
                result[i]++;
                k-=arr[i];
            }
        }
        for(int i=0;i<n;i++)
        {
            printf("%d",result[i]);
        }
        printf("\n");
    }
    return 0;
}

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
// slow solution
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int maxt,maxn,sumn;
        scanf("%d %d %d",&maxt,&maxn,&sumn);
        int arr[10000];
        memset(arr,0,sizeof(arr));
        int i=0;
        while(sumn>=maxn)
        {
            arr[i]=maxn;
            sumn=sumn-maxn;
            i++;
        }
        arr[i]=sumn;
        i++;
        int sum=0;
        int flag = (i<maxt)?i:maxt;
        for(int j=0;j<flag;j++)
        {
            sum = sum + (arr[j]*arr[j]);
        }
        printf("%d\n",sum);
    }
    return 0;
}

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
//zero ones equal one zeros
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        if(n%2==0)
        {
            for(int i=0;i<n;i++)
            {
                if(i==0 || i==n-1)
                printf("1");
                else
                printf("0");
            }
            printf("\n");
        }
        else
        {
            for(int i=0;i<n;i++)
            {
                if(i==0 || i==n-1)
                printf("0");
                else
                printf("1");
            }
            printf("\n");
        }
    }
    return 0;
}

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
// chef and dolls 
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int arr[100000];
        int ans = 0;
        for(int i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);
            ans^=arr[i];
        }
        printf("%d\n",ans);
    }
    return 0;
}

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
// chef and dolls 
// not accepted
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int arr[100000];
        int frequency[100000];
        memset(frequency,0,sizeof(frequency));
        for(int i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);
            frequency[arr[i]]++;

        }
        for(int i=0;i<100000;i++)
        {
            if(frequency[i]==1)
            {
                printf("%d\n",i);
                break;
            }
        }
    }
    return 0;
}

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
// adjacent sum parity copy
// accepted
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
        int flag=0,flag1=0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]==0)
            flag++;
            else
            flag1++;
        }
        if(n%2==0)
        {
            if(flag1%2==0 && flag%2==0)
            printf("YES\n");
            else
            printf("NO\n");
        }
        else
        {
            if(flag%2==1)
            printf("YES\n");
            else
            printf("NO\n");
        }
    }
    return 0;
}

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
// adjacent sum parity 
// not accepted
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
        int flag=0;
        if(n>2)
        {
            for(int i=0;i<n;i++)
            {
                if(i&1)
                {
                    if(arr[i]!=0)
                    flag++;
                }
                else
                {
                    if(arr[i]!=1)
                    flag++;
                }
            }
            if(flag==0)
            printf("YES\n");
            else
            printf("NO\n");
        }
        else
        {
            if(arr[0]==0 && arr[1]==0)
            printf("YES\n");
            else
            printf("NO\n");
        }

    }
    return 0;
}

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
// how much scholarship
int main()
{
    int r;
    scanf("%d",&r);
    if(r>=1 && r<=50)
    printf("100\n");
    else if(r>50 && r<=100)
    printf("50\n");
    else
    printf("0");
    return 0;
}