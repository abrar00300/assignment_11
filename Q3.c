#include<stdio.h>
int prime(int);
int main()
{
    int n;
    printf("enter number =");
    scanf("%d",&n);
    if(prime(n)==1)
        printf("%d is prime",n);
    else
        printf("%d is not prime",n);
    return 0;
}
int prime(int n)
{
    int i;
    for( i=2;i<n;i++)
    {
        if(n%i==0)
            break;
    }
    if(i==n ||n==1)
        return 1;
    else
        return 0;
}
