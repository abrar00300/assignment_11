#include<stdio.h>
int prime(int);
int main()
{
    int n;
    printf("enter number =");
    scanf("%d",&n);
    printf("next prime number of %d is =%d",n,prime(n));
    return 0;
}
int prime(int n)
{
    int i,j;
    for(j=n;;j++)
    {
            for( i=2;i<j;i++)
            {
                if(j%i==0)
                    break;
            }
            if(i==j ||n==1 )
               {
                    if(i>n)
                        return i;
               }
    }
}

