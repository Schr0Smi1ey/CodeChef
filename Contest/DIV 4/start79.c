// START 79

#include<stdio.h>

int main()
{
    int T,A,B,i,r;
    scanf("%d",&T);
    

    for(i=1;i<=T;i++)
    {
        scanf("%d %d",&A,&B);   
        r = ((A/2)+( B/2));
        printf("%d\n",r);   
    }  
     
    return 0;
   
}


#include<stdio.h>
int main()
{
    int h,i,space,j;
    scanf("%d",&h);
    space = h-1;

    for(i=1;i<=h;i++)
    {
        for(j=1;j<=space;j++)
        {
            printf(" "); 
            space = space -1;           
        }
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}


#include<stdio.h>
int main()
{
    int h,i,j;
    char ch = 'A';
    scanf("%d",&h);

    for(i=h;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            for(ch = 'A';ch<= 'Z';)
            printf("%c",ch);
            ch++;     
        }
        printf("\n");
    }

    return 0;
}