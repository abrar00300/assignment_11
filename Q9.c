#include<stdio.h>
int square(int n)
{
    return n*n;
}
int main()
{
    int n;
    printf("enter number =");
    scanf("%d",&n);
    printf("square of %d is %d ",n,square(n));
}
