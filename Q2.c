#include<stdio.h>
int hcf(int ,int);
int main()
{
    int n1,n2;
    printf("enter two numbers =\n");
    scanf("%d%d",&n1,&n2);
    printf("HCF of %d and %d is %d ",n1,n2,hcf(n1,n2));
    return 0;
}
int hcf(int n1,int n2)
{
    int gcd,min;
    min=n1<n2?n1:n2;
    for(int i=1;i<=min;i++)
    {
        if(n1%i==0 && n2%i==0)
            gcd=i;
    }
    return gcd;
}

