#include<stdio.h>
void primes(int);
int main()
{
    int n;
    printf("enter number =");
    scanf("%d",&n);
    primes(n);
    return 0;
}
void primes(int n)
{
    int i,j,x=1;
    while(n)
   {
       for(j=2;j<x;j++)
       {
           if(x%j==0)
            break;
       }
       if(j==x || x==1)
       {
            printf("%d\t",x);
            n--;
       }
       x++;
   }
}
